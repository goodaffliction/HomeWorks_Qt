#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "kvad_koren.h"
#include "triangle.h"
#include "add_change.h"

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

void MainWindow::on_kvad_koren_clicked()
{
    kvad_koren koren;
    koren.setModal(true);
    koren.exec();
}

void MainWindow::on_pushButton_triangle_clicked()
{
   triangle triangle;
   triangle.setModal(true);
   triangle.exec();
}

void MainWindow::on_pushButton_add_change_clicked()
{
    add_change ac;
    ac.setModal(true);
    ac.exec();
}
