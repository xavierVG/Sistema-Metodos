#ifndef MENUECUACIONESNOLINEALES_H
#define MENUECUACIONESNOLINEALES_H

#include <QMainWindow>
#include <ecuacionesnolineales.h>
#include <biseccion.h>
#include <falsaposicion.h>
#include <newton.h>
#include <secante.h>

namespace Ui {
class menuecuacionesnolineales;
}

class menuecuacionesnolineales : public QMainWindow
{
    Q_OBJECT

public:
    explicit menuecuacionesnolineales(QWidget *parent = nullptr);
    ~menuecuacionesnolineales();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::menuecuacionesnolineales *ui;
};

#endif // MENUECUACIONESNOLINEALES_H
