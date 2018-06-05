#include "mainwin.h"
#include "menustart.h"
#include "ui_mainwin.h"

MainWin::MainWin(QWidget *parent, MenuStart * win) : QMainWindow(parent),win_(win), ui(new Ui::MainWin)
{
    ui->setupUi(this);

    QPixmap pic("adding.png");
    ui->image_label->setScaledContents(true);
    ui->image_label->setPixmap(pic);

    connect(ui->exit_button, SIGNAL(clicked(bool)),this, SLOT(end_learn()));
    connect(ui->know_button,SIGNAL(clicked(bool)),this,SLOT(know()));
    connect(ui->dont_know_button,SIGNAL(clicked(bool)),this,SLOT(do_not_know()));
    connect(ui->check_button,SIGNAL(clicked(bool)),this,SLOT(check()));
    repetition_=new Repetition();
    ui->dont_know_button->hide();
    ui->know_button->hide();

}

MainWin::~MainWin()
{
    delete repetition_;
    delete ui;
}
void MainWin::check(){
    showDetails();
    ui->check_button->hide();
    ui->dont_know_button->show();
    ui->know_button->show();
}
void MainWin::know()
{
    if(it_elements_<(repetition_->getEndIterator()-1)){
        it_elements_->increaseRememberingRate();
        ++it_elements_;
        ui->dont_know_button->hide();
        ui->know_button->hide();
        ui->check_button->show();
        showElement();

    }
    else if(it_elements_==(repetition_->getEndIterator()-1)){
        it_elements_->increaseRememberingRate();
        repetition_->saveRepetition();
        std::string std_text="Gratulacje! skończyłeś powtórki z tego działu";
        QString message_text=QString::fromStdString(std_text);
        int ret=showMessageWindow(message_text);
        doChoosenAction(ret);
    }
}

void MainWin::do_not_know()
{
    if(it_elements_<(repetition_->getEndIterator()-1)){
        it_elements_->decreaseRememberingRate();
        ++it_elements_;
        ui->dont_know_button->hide();
        ui->know_button->hide();
        ui->check_button->show();
        showElement();

    }
    else if(it_elements_==(repetition_->getEndIterator()-1)){
        it_elements_->decreaseRememberingRate();
       repetition_->saveRepetition();

        std::string std_text="Skończyłeś powtórki z tego działu";
        QString message_text=QString::fromStdString(std_text);
        int ret=showMessageWindow(message_text);
        doChoosenAction(ret);
    }
}

void MainWin::end_learn()
{
    repetition_->saveRepetition();
    this->hide();
    win_->show();
}
int MainWin::getState(){
    return repetition_->getState();
}
void MainWin::setRepetition(QString name){

    repetition_=new Repetition(name.toStdString());
    repetition_->setCurrentRepetitions();

    if(repetition_->getState()){
        it_elements_=repetition_->getCurrentRepetitions();

        showElement();
    }
    else {
        std::string std_text="Brak elementów do powtórki w tym dziale";
        QString message_text=QString::fromStdString(std_text);
        int ret=showMessageWindow(message_text);
        doChoosenAction(ret);
    }

}
void MainWin::showElement(){
    ui->foreign_word_view->clear();
    ui->descript_view->clear();
    ui->image_view->clear();
    QString native_word=QString::fromStdString(it_elements_->getWord().getNativeWord());

    ui->native_word_view->setFontPointSize(12);
    ui->native_word_view->setText(native_word);



}
void MainWin::showDetails(){
    QString foreign_word=QString::fromStdString( it_elements_->getWord().getForeignWord());
    QString descript=QString::fromStdString(it_elements_->getWord().getTranslation());
    QPixmap pic(QString::fromStdString(it_elements_->getPicture().getPath()));


    ui->foreign_word_view->setFontPointSize(12);
    ui->foreign_word_view->setText(foreign_word);
    ui->descript_view->setText(descript);
    ui->image_view->setScaledContents(true);
    ui->image_view->setPixmap(pic);

}
int MainWin::showMessageWindow(QString info_text){
    QMessageBox msgBox;
    msgBox.setText(info_text);
    msgBox.setInformativeText("Wybierz, co chcesz zrobić");
    msgBox.setStandardButtons(QMessageBox::Save |QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    msgBox.setButtonText(QMessageBox::Save, "Powrót" );
    msgBox.setButtonText(QMessageBox::Cancel,"Wyjście");
    int ret = msgBox.exec();
    return ret;
}
void MainWin::doChoosenAction(int action){
    switch (action) {
      case QMessageBox::Save:
          win_->show();
          this->close();
          break;
      case QMessageBox::Cancel:
          this->close();
          break;
      default:
          break;
    }
}

