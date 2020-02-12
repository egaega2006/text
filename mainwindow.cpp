#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    double x, y, z;


       QString S1 = ui->lineEdit->text();

       x = S1.toDouble();


       QString S2 = ui->lineEdit_2->text();

       y = S2.toDouble();


       z = x + y;


       ui->textEdit->setText(QString::number(z));
}

void MainWindow::on_pushButton_2_clicked()
{

  double x, y, z;


       QString S1 = ui->lineEdit->text();

       x = S1.toDouble();


       QString S2 = ui->lineEdit_2->text();

       y = S2.toDouble();


       z = x - y;


       ui->textEdit->setText(QString::number(z));
}

void MainWindow::on_pushButton_3_clicked()
{

    double x, y, z;


       QString S1 = ui->lineEdit->text();

       x = S1.toDouble();


       QString S2 = ui->lineEdit_2->text();

       y = S2.toDouble();


       z = x * y;

       ui->textEdit->setText(QString::number(z));

}

void MainWindow::on_pushButton_4_clicked()
{

    double x, y, z;


       QString S1 = ui->lineEdit->text();

       x = S1.toDouble();


       QString S2 = ui->lineEdit_2->text();

       y = S2.toDouble();


       z = x / y;


       ui->textEdit->setText(QString::number(z));
}
