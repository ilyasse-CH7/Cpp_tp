//
// Created by ilyasse-ch7 on 4/11/26.
//

#include "cercle.h"
#include<iostream>
#include <print>
#include<cmath>

cercle::cercle() {
    r = 0 ;
    x = 0 ;
    y = 0 ;
}

cercle::cercle(float r, float x , float y ) {
    if (r<0){ r = 0 ;}
    this->r = r ;
    this->x = x ;
    this->y = y ;
}

void cercle::setrayon( float r) {
    if (r<0){ r = 0 ;}
    this->r = r ;
}

void cercle::setx(const float& x) {
    this->x=x ;
}

void cercle::sety(const float& y) {
    this->y=y ;
}

float cercle::getRayon() const { // returnn pas de cout !!!!
   return r ;
}
float cercle::getx() const { // returnn pas de cout !!!!
    return x ;
}
float cercle::gety() const { // returnn pas de cout !!!!
    return y ;
}
float cercle::aire(float r){
   float aire = M_PI * r * r ;
    return aire ;
}
float cercle::perimetre(float r) {
    float perimetre = 2 * r * M_PI ;
    return perimetre ;
}
 void cercle::affich_cercle() {
    std::println("les coordonnees du centres sont {{{} , {}}}",x,y);
    std::println("le rayon du cercle est : {}",r);
}
bool cercle::verifier_cercle(float x1,float x2) const {
    float d_carrer = std::pow((x1-x),2)+std::pow((x2-y),2);
    if (d_carrer < r*r || d_carrer==r*r ){ return true ;}

    else { return false;}
}

void cercle::transl_cercle(float x,float y ) {
    this->x+=x;
    this->y+=y;
}
void cercle::homothetie(float k) {
    r = std::abs(k)*r;
}