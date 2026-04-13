//
// Created by ilyasse-ch7 on 4/11/26.
//
#ifndef ILYASSE_CPP_PROJECTS_TP2_H
#define ILYASSE_CPP_PROJECTS_TP2_H

class cercle {
    float r ;
    float x ;
    float y ;
public :
    cercle();
    cercle(float r, float x , float y ) ;

    void  setrayon( float r);
    void  setx(const float& x);
    void  sety(const float& y);

    float getRayon() const;
    float getx() const;
    float gety() const;

    float aire(float r);
    float perimetre(float r );

    void affich_cercle();
    bool verifier_cercle(float x1,float x2) const;
    void transl_cercle(float x,float y);
    void homothetie(float k );
};



#endif //ILYASSE_CPP_PROJECTS_TP2_H

