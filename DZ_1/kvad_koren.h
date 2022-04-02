#ifndef KVAD_KOREN_H
#define KVAD_KOREN_H

#include <QDialog>

namespace Ui {
class kvad_koren;
}

class kvad_koren : public QDialog
{
    Q_OBJECT

public:
    explicit kvad_koren(QWidget *parent = nullptr);
    ~kvad_koren();

private slots:
    void on_button_calculate_clicked();

    void on_button_retry_clicked();

private:
    Ui::kvad_koren *ui;
};

#endif // KVAD_KOREN_H
