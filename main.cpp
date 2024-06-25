#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QListWidget>
#include <QDialog>
#include <limits>
#include <unordered_map>
#include <QTextStream>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QMessageBox>
#include <QtSql/QSql>
#include <unordered_map>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTextEdit>
#include <QApplication>



#include "ui_mainwindow.h"
#include "gameai.h"
#include "ai_or_2.h"         // Assuming this header exists
#include "game_history.h"    // Assuming this header exists
#include "game_or_history.h" // Assuming this header exists
#include "gameWindow1.h"      // Assuming this header exists
#include "register_dialog.h" // Assuming this header exists

#include <QApplication>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

#include "GameManager.h"




int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

GameManager gameManager;
   QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/omar khaled/Downloads/untitled2/untitled2/database.db");

    if (db.open())
    {
        qDebug() <<"Database is Connected";
    }
    else{
        qDebug() <<"Database is Not Connected";
        qDebug() << "Error :" << db.lastError();
        return -1;
    }

    //db.open();
    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS Users (username TEXT PRIMARY KEY, password TEXT,history TEXT)");
    //std::unordered_map<QString, QString> userDatabase;
    MainWindow w;
    w.show();
return app.exec();
}
