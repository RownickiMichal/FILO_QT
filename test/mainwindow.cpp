#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QList>

QList<QString>List;
int id=0;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    List.push_front(ui->lineEdit->text());
    ui->lineEdit->clear();
    ui->pushButton_2->setEnabled(true);
}

void MainWindow::on_pushButton_2_clicked()
{
    if(List.size()>id){
         ui->lineEdit_2->setText(List[id]);
         id+=1;
    }else{
        ui->lineEdit_2->setText("END.");
        ui->pushButton_2->setEnabled(false);
        id=0;
    }
}


