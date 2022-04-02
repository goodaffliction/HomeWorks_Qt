#include "triangle.h"
#include "ui_triangle.h"
#include <QtMath>

triangle::triangle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::triangle)
{
    ui->setupUi(this);
}

triangle::~triangle()
{
    delete ui;
}


void triangle::on_pushButton_calc_clicked()
{
    double a, b, c, q;
    QString result;

    if(ui->radioButton_rad->isChecked()){
        b = ui->lineEdit_b->text().toDouble();
        c = ui->lineEdit_c->text().toDouble();
        q = ui->lineEdit_q->text().toDouble();
        q = q * 180 * M_PI;

        a = qSqrt((b*b) + (c*c) - (2*b*c*cos(q*M_PI/180)));


        result = QString::number(a, 'g', 15);
        ui->label_result->setText(result);

    } else if (ui->radioButton_grad->isChecked()){

        b = ui->lineEdit_b->text().toDouble();
        c = ui->lineEdit_c->text().toDouble();
        q = ui->lineEdit_q->text().toDouble();

        a = qSqrt((b*b) + (c*c) - (2*b*c*cos(q*M_PI/180)));
        result = QString::number(a, 'g', 15);
        ui->label_result->setText(result);
        }  else {
        ui->label_result->setText("Выберите единицу измерения угла Q");
    }
}

void triangle::on_pushButton_retry_clicked()
{
    ui->lineEdit_b->setText("");
    ui->lineEdit_c->setText("");
    ui->lineEdit_q->setText("");
    ui->label_result->setText("-");
}
