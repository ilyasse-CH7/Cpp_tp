#include "Duree.h"
#include <cmath>
#include <print>

Duree::Duree() {
    H = 0;
    M = 0;
    S = 0;
}

Duree::Duree(int H, int M, int S) {
    H = std::abs(H);
    M = std::abs(M);
    S = std::abs(S);

    while (S >= 60) { M++; S -= 60; }
    while (M >= 60) { H++; M -= 60; }
    while (H >= 24) { H -= 24; }
    this->H = H;
    this->M = M;
    this->S = S;
}

Duree::Duree(const Duree& j) {
    this->H = j.H;
    this->M = j.M;
    this->S = j.S;
}

void Duree::setH(float H) {
    H = std::abs(H);
    if (H >= 24)
        std::println("erreur l'heure ne peux pas depasser 24!!");
    else
        this->H = H;
}

void Duree::setM(float M) {
    M = std::abs(M);
    if (M >= 60)
        std::println("erreur la minute ne peux pas depasser 60!!");
    else
        this->M = M;
}

void Duree::setS(float S) {
    S = std::abs(S);
    if (S >= 60)
        std::println("erreur la seconde ne peux pas depasser 60!!");
    else
        this->S = S;
}

int Duree::getH() const { return H; }
int Duree::getM() const { return M; }
int Duree::getS() const { return S; }

void Duree::affich_heure() {
    std::println("{}h{}m{}s", H, M, S);
}

int Duree::to_sec() const {
    return H * 3600 + M * 60 + S;
}

void Duree::add_sec(int sec) {
    sec = std::abs(sec);
    S += sec;
    while (S >= 60) { M++; S -= 60; }
    while (M >= 60) { H++; M -= 60; }
}

Duree Duree::operator+(const Duree& other) const {
    return Duree(H + other.H, M + other.M, S + other.S);
}

Duree Duree::operator-(const Duree& other) const {
    int total = to_sec() - other.to_sec();
    if (total < 0) total = 0;
    return Duree(total / 3600, (total % 3600) / 60, total % 60);
}

bool Duree::operator==(const Duree& other) const {
    return (H == other.H && M == other.M && S == other.S);
}

bool Duree::operator<(const Duree& other) const {
    return to_sec() < other.to_sec();
}

Duree& Duree::operator+=(const Duree& other) {
    H += other.H;
    M += other.M;
    S += other.S;
    while (S >= 60) { M++; S -= 60; }
    while (M >= 60) { H++; M -= 60; }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Duree& other) {
    os << other.H << "h" << other.M << "m" << other.S << "s";
    return os;
}

std::istream& operator>>(std::istream& is, Duree& other) {
    int h, m, s;
    is >> h >> m >> s;
    other = Duree(h, m, s);
    return is;
}