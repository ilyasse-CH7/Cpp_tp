//
// Created by ilyasse-ch7 on 11/05/2026.
//
#pragma once
#include <vector>


class Employe {
private:
    int Matricule;
    float salaire;
    int nbr_enfants;
    std::vector<int> ages;

public:
    Employe();
    Employe(int Matricule , float salaire , int nbr_enfants , std::vector<int>tab);
    Employe(Employe & p1 )const;
    


};


