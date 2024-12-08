#include "Voiture.h"
#include <iostream>
#include <ctime>
int Voiture::dispo = 100;
int Voiture::places[100] = {};

Voiture::Voiture(const std::string& num) : num(num) {
    this->duration = static_cast<int>(time(0));
    for (int i = 0; i < 100; ++i) {
        if (places[i] == 0) { // la première place disponible
            places[i] = 1;    // place occupée
            this->in = true;
            dispo--;          // places disponibles
            return;
        }
    }
    std::cout << "Aucune place disponible." << std::endl;
}
Voiture::~Voiture(){

}
double Voiture::calculePrix() {
    int t = static_cast<int>(time(0));
    return static_cast<double>(t - this->duration) * 0.0005;
}
