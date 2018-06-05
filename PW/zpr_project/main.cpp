#include <QApplication>
#include "base.h"
#include "picture.h"
#include "word.h"
#include "element.h"
#include "menustart.h"
#include "databaseslist.h"
#include "deletedatabaseobserver.h"
#include "repetition.h"


using namespace std;
/*!
 * \brief main
 * \param argc
 * \param argv
 * \return
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MenuStart start;
    try{
    start.show();
    }
    catch(...){}

    a.exec();


}
