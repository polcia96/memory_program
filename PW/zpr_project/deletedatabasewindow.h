#ifndef DELETEDATABASEWINDOW_H
#define DELETEDATABASEWINDOW_H

#include <QDialog>
#include <deletedatabaseobserver.h>
#include <menustart.h>
#include <QString>
#include <QItemSelectionModel>
#include <QStandardItemModel>

namespace Ui {
class DeleteDatabaseWindow;
}
/*!
 * \brief Klasa reprezentująca okno, które umożliwia użykowinikowi wybór bazy danych do usunięcia.
 * informajca o tym, która baza danych ma być usunięta jest przekazywana do odpowiedniego obserwatora.
 */
class DeleteDatabaseWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteDatabaseWindow(QWidget *parent,MenuStart * menu);
    ~DeleteDatabaseWindow();
    void notify();
    void showDatabasesList();

private slots:
    void save();
    void come_back();

private:
    Ui::DeleteDatabaseWindow *ui_;
    MenuStart * menu_start_;
    DeleteDatabaseObserver * observer_;
    QString database_name_;
    QItemSelectionModel* select_model_;
    QStandardItemModel* model_;

};

#endif // DELETEDATABASEWINDOW_H
