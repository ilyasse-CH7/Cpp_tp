//
// Created by ilyasse-ch7 on 11/05/2026.
//
#pragma once
#include <vector>
#include <iostream>


class Employe {
private:
    int Matricule;
    float salaire;
    int nbr_enfants;
    std::vector<int> ages;

public:
    Employe();
    Employe(int Matricule , float salaire , int nbr_enfants , std::vector<int>tab);
    Employe(const Employe & p1 );

    void SaisirEmploye();
    float getSalaire();
    void affichier()const;
    ~Employe();
    Employe& operator=(const Employe & p1 );

    friend bool operator==(const Employe & p1 , const Employe & p2 );

    bool operator!=(const Employe & p1 )const ;
    friend std::ostream & operator<<(std::ostream & os , const Employe &p1);


    


};


