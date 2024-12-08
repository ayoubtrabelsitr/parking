#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include"Voiture.h"
#include <QDateTime>
#include <QTimer>
#include <QInputDialog>
#include <QMessageBox>
std::vector<Voiture> voitures;
static bool test=true;

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

        ui->label_3->setText(currentTimeText);  //  l'heure
        ui->label_4->setText(currentDateText);  //  la date
    });
    timer->start(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Entrer_clicked()
{
    QString qNum = ui->lineEdit->text();
    std::string num = qNum.toStdString();
    ui->lineEdit->clear();

    if (num.size() <= 5) {
        QMessageBox::warning(this, "Erreur", "La plaque d'immatriculation doit contenir plus de 5 caractères.");
        ui->lineEdit->clear();
        return;
    }
    // Vérifier si la voiture existe déjà
    for (const auto& voiture : voitures) {
        if (voiture.num == num) {
            QMessageBox::warning(this, "Erreur", "Cette voiture est déjà enregistrée.");
            ui->lineEdit->clear();
            return;
        }
    }
    // Ajouter la nouvelle voiture
    voitures.emplace_back(num);
    on_lcdNumber_overflow();
    QMessageBox::information(this, "Succès", "Voiture ajoutée avec succès !");
}

void MainWindow::on_lcdNumber_overflow()
{
    ui->lcdNumber->display(Voiture::dispo);
}

void MainWindow::on_Sortir_clicked()
{
    // plaque d'immatriculation depuis QLineEdit
    QString qNum1 = ui->lineEdit->text();
    std::string num1 = qNum1.toStdString();
    ui->lineEdit->clear();

    // parking vide
    if (voitures.empty()) {
        QMessageBox::warning(this, "Parking vide", "Il n'existe pas de voitures.");
        return;
    }
    // Chercher la voiture avec cette plaque
    for (size_t i = 0; i < voitures.size(); i++) {
        if (voitures[i].num == num1) {
            // Demander le code de sortie au client
            bool ok;
            // Calculer le montant à payer
            double montant = voitures[i].calculePrix();
            QString message = QString("Vous devez payer : %1 €").arg(montant);
            QMessageBox::information(this, "Montant à payer", message);
            QString code = QInputDialog::getText(
                this,
                "Code de sortie",
                "Veuillez entrer le code de sortie :",
                QLineEdit::Normal,
                "",
                &ok
                );

            // Si le code est correct
            if (ok && code == "0000") {

                // Libérer la place et mettre à jour les places disponibles
                for (int j = 0; j < 100; ++j) {
                    if (Voiture::places[j] == 1 && voitures[i].num == num1) {
                        // Libérer la place et mettre à jour les places disponibles
                        Voiture::places[j] = 0;
                        Voiture::dispo++;
                        voitures.erase(voitures.begin() + i); // Supprimer la voiture
                        on_lcdNumber_overflow();

                        break;
                    }
                }
            }
            else {
                // Si le code est incorrect
                QMessageBox::warning(this, "Erreur", "Code incorrect. Vous ne pouvez pas sortir.");
                on_lcdNumber_overflow();
            }

            return; // Quitter la fonction
        }
    }
    // Si la voiture n'existe pas
    QMessageBox::warning(this, "Erreur de plaque", "Vérifiez votre plaque d'immatriculation, s'il vous plaît.");

}

