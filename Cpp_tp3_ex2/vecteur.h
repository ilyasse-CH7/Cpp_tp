//
// Created by ilyasse-ch7 on 28/04/2026.
//
#pragma once
#include <vector>
#include <iostream>

class vecteur {
private:
    std::vector<int>element ;
    int taille ;

public :

    vecteur();
    vecteur(const vecteur &d );
    vecteur& operator=(const vecteur &d);
    vecteur operator+(const vecteur &d) const ;
    vecteur operator-(const vecteur &d)const ;
    int operator*(const vecteur &d)const ;

    friend std::ostream& operator<<(std::ostream& os , const vecteur & d );
    friend std::istream& operator>>(std::istream& is , vecteur & d);
};