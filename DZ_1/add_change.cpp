#include "add_change.h"
#include "ui_add_change.h"
#include <QPlainTextEdit>

add_change::add_change(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_change)
{
    ui->setupUi(this);
}

add_change::~add_change()
{
    delete ui;
}


void add_change::on_pushButton_add_clicked()
{
    ui->plainTextEdit_left->selectAll();
    ui->plainTextEdit_left->cut();
    ui->plainTextEdit_right->paste();
}

void add_change::on_pushButton_change_clicked()
{
    ui->plainTextEdit_left->selectAll();
    ui->plainTextEdit_left->cut();
    ui->plainTextEdit_right->selectAll();
    ui->plainTextEdit_right->paste();
}

void add_change::on_pushButton_html_clicked()
{
    QString right;
    right = "<font color='red'>Hello</font>";
    ui->plainTextEdit_right->appendHtml(right);
}
