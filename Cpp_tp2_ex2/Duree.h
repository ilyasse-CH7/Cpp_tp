//
// Created by ilyasse-ch7 on 12/04/2026.
//

#ifndef ILYASSE_CPP_PROJECTS_DUREE_H
#define ILYASSE_CPP_PROJECTS_DUREE_H



class Duree {
private:
    int H ;
    int M ;
    int S ;
public:
    Duree();
    Duree(int H , int M , int S );
    Duree(const Duree &j);
    Duree operator+(const Duree& other);

    void setH(float H );
    void setM(float M );
    void setS(float S );

    int getH() const;
    int getM() const;
    int getS() const;

    void affich_heure();
    int to_sec();
    void add_sec(int sec);



};



#endif //ILYASSE_CPP_PROJECTS_DUREE_H
