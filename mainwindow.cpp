#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include"Voiture.h"
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
    // Lire la chaîne de lineEdit et la stocker dans une variable std::string
    QString qNum = ui->lineEdit->text(); // Récupérer le texte du QLineEdit
    std::string num = qNum.toStdString(); // Convertir QString en std::string
    ui->lineEdit->clear();
    // Afficher le texte récupéré dans la console ou l'utiliser selon vos besoins

    Voiture v1(num);
    on_lcdNumber_overflow();
}


void MainWindow::on_lcdNumber_overflow()
{
   ui->lcdNumber->display(Voiture::dispo);
}




void MainWindow::on_lineEdit_editingFinished()
{

}

