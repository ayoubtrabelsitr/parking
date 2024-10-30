#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include"Voiture.h"
#include <QDateTime>
#include <QTimer>
#include<iostream>
#include <QMessageBox>
std::vector<Voiture> voitures;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    on_lcdNumber_overflow();
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [this]() {
        QDateTime currentDateTime = QDateTime::currentDateTime();
        QString currentTimeText = currentDateTime.toString("hh:mm:ss");
        QString currentDateText = currentDateTime.toString("dd/MM/yyyy");

        ui->label_3->setText(currentTimeText);  // Affiche l'heure
        ui->label_4->setText(currentDateText);  // Affiche la date
    });
    timer->start(0);
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

    Voiture v1(num);
    voitures.push_back(v1);
    on_lcdNumber_overflow();
}

void MainWindow::on_pushButton_2_clicked()
{
    // Lire la chaîne
    QString qNum1 = ui->lineEdit->text(); // Récupérer le texte du QLineEdit
    std::string num1 = qNum1.toStdString(); // Convertir QString en std::string
    for (size_t i = 0; i < voitures.size(); i++)
    {

        if (voitures[i].num==num1)
        {
        std::cout<<"Vous devez payez :"<<voitures[i].calculePrix()<<" Euro"<<std::endl;

        on_lcdNumber_overflow();
        ui->lineEdit->clear();
        }
        else {
            QMessageBox::warning(this, "Erreur de plaque", "Vérifiez votre plaque d'immatriculation, s'il vous plaît.");
            ui->lineEdit->clear();
        }
    }

}

void MainWindow::on_lcdNumber_overflow()
{
   ui->lcdNumber->display(Voiture::dispo);
}

void MainWindow::on_lineEdit_editingFinished()
{

}






