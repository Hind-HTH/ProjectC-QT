#include "findpackage.h"
#include "ui_findpackage.h"

FindPackage::FindPackage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindPackage)
{
    ui->setupUi(this);
}

FindPackage::~FindPackage()
{
    delete ui;
    delete model;
}

void FindPackage::on_btnFindPackage_clicked()
{
    QString packageName = ui->txtPackageName->text();

    qDebug() <<"Package Name: " <<packageName;


    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/xampp1/htdocs/projects/database/MyTourist.db");

    if(QFile::exists("C:/xampp1/htdocs/projects/database/MyTourist.db"))
    {
        qDebug() <<"Database file exists";
    }else{
        qDebug() <<"Database file does not exist";
        return;
    }

    if(!database.open())
    {
        qDebug() <<"Error: Unable to open database";
        return;
    }
    else{
        qDebug() <<"Dtabase opens successfully..";
    }

    QSqlQuery query(database);

    query.prepare("select * from Package where PackageName like '%"+ packageName +"%' ");
    query.exec();
    qDebug() <<"last query:" <<query.lastQuery();
    qDebug() <<"Last Error:" <<query.lastError().text();


    if(model==NULL){
        model = new QSqlQueryModel();
    }

    model->setQuery(std::move(query));
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,200);
    ui->tableView->setColumnWidth(1,200);
    ui->tableView->setColumnWidth(2,200);
    //
    database.close();
}

