//
// Created by ilyasse-ch7 on 28/04/2026.
//
#include "vecteur.h"
#include <print>
vecteur::vecteur() {
    taille = 3 ;
    element.push_back(3);
    element.push_back(5);
    element.push_back(6);
}
vecteur::vecteur(const vecteur &d) {
    taille = d.taille ;
    for (int i = 0 ; i <d.taille ; i++) {
        element.push_back(d.element.at(i));
    }
}
vecteur& vecteur::operator=(const vecteur &d) {
    taille = d.taille ;
    element = d.element ;
    return *this ;
}

vecteur vecteur::operator+(const vecteur &d )const {
    if (d.taille != taille ) {
        std::println("erreur pour + les tailles sont diff !");
        exit(1);
    }
    vecteur result ;
    result.taille = taille ;
    result.element.clear(); // je mis le tableau vide car il est deja remplie avec le constrecteur !
    for (int i =0 ; i < taille ; i++) {
        result.element.push_back(element.at(i)+d.element.at(i));
    }
    return result ;

}

vecteur vecteur::operator-(const vecteur &d )const {
    if (d.taille != taille ) {
        std::println("erreur pour - les tailles sont diff !");
        exit(1);
    }
    vecteur result ;
    result.taille = taille ;
    result.element.clear();
    for (int i =0 ; i < taille ; i++) {
        result.element.push_back(element.at(i)-d.element.at(i));
    }
    return result ;

}

int vecteur::operator*(const vecteur &d)const {

    if (d.taille != taille ) {
        std::println("erreur pour * les tailles sont diff !");
        exit(1);
    }
    int result = 0 ;
    for (int i = 0 ; i < taille ; i++ ) {
        result += (element.at(i)) * (d.element.at(i));
    }
    return result ;
}

std::ostream& operator<<(std::ostream& os , const vecteur & d ) {
    os << "[" ;
    for (int i = 0 ; i < d.taille ; i++) {
        if (i>0) os << ", " ;
        os << d.element.at(i) ;
    }
    os << "]" << std::endl ;
    return os ;
}

std::istream& operator>>(std::istream& is , vecteur & d) {
    int val ;
    d.element.clear();
    std::cout << "entre la taille de vetcteur \n ";
    is >> d.taille ;
    for ( int i = 0 ; i< d.taille ; i++) {
        std::cout << "entre element : " << std::endl ;
        is >> val ;
        d.element.push_back(val) ;
    }
    return is ;
}

