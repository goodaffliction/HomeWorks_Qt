#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <QDialog>

namespace Ui {
class triangle;
}

class triangle : public QDialog
{
    Q_OBJECT

public:
    explicit triangle(QWidget *parent = nullptr);
    ~triangle();

private slots:

    void on_pushButton_calc_clicked();

    void on_pushButton_retry_clicked();

private:
    Ui::triangle *ui;
};

#endif // TRIANGLE_H
