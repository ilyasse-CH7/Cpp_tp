//
// Created by ilyasse-ch7 on 12/04/2026.
//

#include "Duree.h"
#include<cmath>
#include<print>

Duree::Duree() {
    H = 0 ;
    M = 0 ;
    S = 0 ;
}

Duree::Duree(int H , int M , int S ) {
    //essayer dabord de maitre les attributs possitives
    //;
    H = std::abs(H) ; M = std::abs(M) ; S = std::abs(S);
    if (S >= 60 ) {
        M++;
        S = 0 ;
    }

    if (M >= 60 ) {
        H++;
        M = 0 ;
    }

    if (H >= 24 ) {
        S++;
        H = 0 ;
    }

    this->H = H ;
    this->M = M ;
    this->S = S ;
}

void Duree::setH(float H ) {
    H = std::abs(H) ;
    if (H>=24) {
        std::println("erreur l'heure ne peux pas depasser 24!! ");
    }
    else{this->H=H;}
}
void Duree::setM(float M ) {
    M = std::abs(M) ;
    if (M>=60) {
        std::println("erreur l'Minute ne peux pas depasser 60!! ");
    }
    else{this->M=M;}
}
void Duree::setS(float S ) {
    S = std::abs(S);
    if (S>=60) {
        std::println("erreur l'seconde ne peux pas depasser 60!! ");
    }
    else{this->S=S;}
}

int Duree::getH() const {
    return H ;
}

int Duree::getM() const {
    return M ;
}
int Duree::getS() const {
    return S ;
}

void Duree::affich_heure() {
    std::println("{}h{}m{}s",H,M,S);
}

int Duree::to_sec() {
    int result = H*3600 + M*60 + S*60 ;
    return result;
}

void Duree::add_sec(int sec) {
    sec=std::abs(sec); //mettre sec possitive
    if (sec+S >= 60 ) {
        int temp = 60 - S ;
        S = sec - temp ;
        M ++ ;

        if (M >= 60 ) {
            H++;
            M = 0 ;
        }

        if (H >= 24 ) {
            S++;
            H = 0 ;
        }
    }
    else{S+=sec;}
}
