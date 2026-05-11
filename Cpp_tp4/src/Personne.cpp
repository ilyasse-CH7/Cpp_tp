//
// Created by ilyasse-ch7 on 10/05/2026.
//

#include "../include /Personne.h"
#include <iostream>


Personne::Personne() {
    this-> Nom = "";
    this-> Prenom = "";
    this->Age = 20;
}

Personne::Personne(std::string Nom , std::string Prenom , int Age ) {
    this->Nom = Nom ;
    this->Prenom = Prenom;
    this->Age = Age ;
}


std::string Personne::getNom()const {
    return Nom ;
}
std::string Personne::getPrenom()const {
    return Prenom ;
}
int Personne::getAge()const {
    return Age ;
}


void Personne::setNom(std::string Nom) {
    this->Nom = Nom ;
}
void Personne::setPrenom(std::string Prenom) {
    this->Prenom = Prenom ;
}
void Personne::setAge(int Age) {
    this->Age = Age ;
}

void Personne::affichier()const {
    std::cout << "le Nom : " << Nom << "le Prenom : " << Prenom << "Age : " << Age << std::endl ;
}

