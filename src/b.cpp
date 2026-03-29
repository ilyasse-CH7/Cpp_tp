#include <print>
#include <expected>
#include <string_view>
#include <vector>

// Utilisation de std::expected (C++23) pour gérer les erreurs proprement
std::expected<double, std::string_view> calculer_moyenne(const std::vector<int>& notes) {
    if (notes.empty()) {
        return std::unexpected("Erreur : La liste est vide !");
    }

    double somme = 0;
    for (int n : notes) somme += n;
    return somme / notes.size();
}

int main() {
    // Utilisation de std::print (C++23) - plus rapide et plus simple que std::cout
    std::print("--- Test C++23 sur Fedora ---\n");

    std::vector<int> mes_notes = {16, 18, 15, 17};

    auto resultat = calculer_moyenne(mes_notes);

    if (resultat) {
        std::print("La moyenne est de : {:.2f}\n", *resultat);
    } else {
        std::print("{}\n", resultat.error());
    }

    return 0;
}