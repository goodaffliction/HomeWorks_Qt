#ifndef ADD_CHANGE_H
#define ADD_CHANGE_H

#include <QDialog>

namespace Ui {
class add_change;
}

class add_change : public QDialog
{
    Q_OBJECT

public:
    explicit add_change(QWidget *parent = nullptr);
    ~add_change();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_change_clicked();

    void on_pushButton_html_clicked();

private:
    Ui::add_change *ui;
};

#endif // ADD_CHANGE_H
