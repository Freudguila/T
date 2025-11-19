#include <iostream>
using namespace std;

int main() {
    int tab[5];
    int max, count = 0;

    std::cout << "Entrez 5 entiers :" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> tab[i];
    }

    max = tab[0];

    // Trouver le maximum
    for (int i = 1; i < 5; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    // Compter les occurrences du maximum
    for (int i = 0; i < 5; i++) {
        if (tab[i] == max) {
            count++;
        }
    }

    std::cout << "Le plus grand élément est : " << max << std::endl;
    std::cout << "Il apparaît " << count << " fois" << std::endl;

    return 0;
}
