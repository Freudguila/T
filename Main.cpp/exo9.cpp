#include <iostream>
using namespace std;

int main() {
    int tab[5];
    int max, indiceMax;

    std::cout << "Entrez 5 entiers :" <<std::endl;
    for (int i = 0; i < 5; i++) {
        cin >> tab[i];
    }

    max = tab[0];
    indiceMax = 0;

    for (int i = 1; i < 5; i++) {
        if (tab[i] > max) {
            max = tab[i];
            indiceMax = i; // Sauvegarde l'indice du plus grand
        }
    }

    std::cout << "Le plus grand élément est : " << max << std::endl;
    std::cout << "Son indice est : " << indiceMax << std::endl;

    return 0;
}
