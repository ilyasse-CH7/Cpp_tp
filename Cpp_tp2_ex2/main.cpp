#include <iostream>
#include "Duree.h"

int main() {
    Duree d1(2, 45, 30);
    Duree d2(1, 20, 50);

    Duree d3 = d1 + d2;
    std::cout << d1 << " + " << d2 << " = " << d3 << '\n';

    Duree d4 = d1 - d2;
    std::cout << d1 << " - " << d2 << " = " << d4 << '\n';

    d1 += d2;
    std::cout << "apres += : " << d1 << '\n';

    if (d1 == d3)
        std::cout << "d1 == d3\n";
    else
        std::cout << "d1 != d3\n";

    if (d2 < d1)
        std::cout << "d2 < d1\n";
    else
        std::cout << "d2 >= d1\n";

    Duree d5;
    std::cout << "entrer une duree (H M S) : ";
    std::cin >> d5;
    std::cout << "lu : " << d5 << '\n';

    return 0;
}