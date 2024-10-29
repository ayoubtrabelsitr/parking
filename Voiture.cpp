#include "Voiture.h"
#include <iostream> // Pour std::cout
#include <ctime>    // Pour time()

int Voiture::dispo = 100; // Initialisez ici
int Voiture::places[100] = {};

Voiture::Voiture(std::string num) : num(num) {
    this->duration = static_cast<int>(time(0));
    for (int i = 0; i < 100; ++i) {
        if (places[i] == 0) {
            places[i] = 1;
            this->in = true;
            dispo--; // Décrémentez ici
            std::cout << "Place " << i << " attribuée par : " << this->num << std::endl;
            //std::cout << "Places disponibles : " << dispo << std::endl;
            return;
        }
    }
    std::cout << "Aucune place disponible." << std::endl;
}

double Voiture::calculePrix() {
    int t = static_cast<int>(time(0));
    dispo++; // Incrémentez ici lors de la sortie
    return static_cast<double>(t - this->duration) * 0.005;
}
