//
// Created by ilyasse-ch7 on 10/05/2026.
//

#pragma once
#include<string>
#include<vector>
#include<iostream>
#include "Personne.h"

class Etudiant:public Personne{
private:
    int numero_ref ;
    std::string Filiere;
    int numero_module;
    std::vector<float> notes;

public:

    Etudiant();
    Etudiant(int num_ref , std::string F , int num_mod,std::vector<float> tab);
    Etudiant(const Etudiant &p1 );

    void saisirEtudiant();

    void setNumero_ref(int num);
    void setFiliere(std::string Filiere);
    void setNumeroModule(int num);
    void setNotes(std::vector<float> tab );

    int getNumero_ref()const;
    std::string getFiliere()const;
    int getNumeroModule()const;
    std::vector<float> getNotes()const; //return un tableau des reel
    float getMoyenne()const;

    void affichier() const override;

};


