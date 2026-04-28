#pragma once
#include <iostream>
#include <cmath>

class Duree {
private:
    int H;
    int M;
    int S;

public:
    Duree();
    Duree(int H, int M, int S);
    Duree(const Duree& j);

    void setH(float H);
    void setM(float M);
    void setS(float S);

    int getH() const;
    int getM() const;
    int getS() const;

    void affich_heure();
    int  to_sec()const;
    void add_sec(int sec);

    Duree  operator+(const Duree& other) const;
    Duree  operator-(const Duree& other) const;
    bool   operator==(const Duree& other) const;
    bool   operator<(const Duree& other) const;
    Duree& operator+=(const Duree& other);

    friend std::ostream& operator<<(std::ostream& os, const Duree& other);
    friend std::istream& operator>>(std::istream& is, Duree& other);
};