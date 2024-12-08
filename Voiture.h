#ifndef VOITURE_H
#define VOITURE_H

#include <string>

class Voiture {
public:
    std::string num;
    bool in = false;
    float prix{ 0 };
    int duration{ 0 };
    static int places[100];
    static int dispo;
    Voiture(const std::string& num);
    ~Voiture();
    double calculePrix();
};

#endif // VOITURE_H
