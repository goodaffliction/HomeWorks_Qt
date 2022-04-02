#include "kvad_koren.h"
#include "ui_kvad_koren.h"
#include <QtMath>

kvad_koren::kvad_koren(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kvad_koren)
{
    ui->setupUi(this);
}

kvad_koren::~kvad_koren()
{
    delete ui;
}

void kvad_koren::on_button_calculate_clicked()
{
    double a, b, c, dis, x1, x2;
    QString result1, result2;
    a = ui->lineEdit_a->text().toDouble();
    b = ui->lineEdit_b->text().toDouble();
    c = ui->lineEdit_c->text().toDouble();

    dis = b * b - 4 * a * c;
    ui->label_solve->setText(ui->lineEdit_a->text() + "x<sup>2</sup> + " + ui->lineEdit_b->text() + "x + " + ui->lineEdit_c->text() + " = 0");
    if(dis > 0){
       x1 = ((-b) + (dis)) / (2 * a);
       x2 = ((-b) - qSqrt(dis)) / (2 * a);
       result1 = QString::number(x1, 'g', 15);
       ui->result_1->setText(result1);
       result2 = QString::number(x2, 'g', 15);
       ui->result_2->setText(result2);

    } else if(dis == 0){
        x1 = -(b / (2 * a));
        result1 = QString::number(x1, 'g', 15);
        ui->result_1->setText(result1);
        ui->result_2->setText("-");

    }else if(dis < 0){
        ui->result_1->setText("Нет решения.");
        ui->result_2->setText("-");
    }
}

void kvad_koren::on_button_retry_clicked()
{
    ui->lineEdit_a->setText("");
    ui->lineEdit_b->setText("");
    ui->lineEdit_c->setText("");
    ui->result_1->setText("0");
    ui->result_2->setText("0");
    ui->label_solve->setText("");
}
