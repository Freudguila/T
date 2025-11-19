
#include <iostream>

int main() {
    // déclare un tableau de 5 entiers, l'initialise avec les valeurs entrées par l'utilisateur
    int N = 5;
    int tab[N];
    for (int i = 0; i < 5; i++) {
        std::cout << "Entrez le " << i + 1 << "eme entier" << std::endl;
        std::cin >> tab[i];
    }

    // initialise le max (et l'indice du max) avec la premiere valeur du tableau
    int idx_max = 0;
    int max = tab[0];

    // parcourt le tableau (a partir du 2eme element car on a deja initialise le max avec le 1er element)
    for (int i = 1; i < 5; i++) {
        if (tab[i] > max) { 
            // si tab[i] est plus grand que le max, on met a jour le max et l'indice du max
            max = tab[i];
            idx_max = i;
        }
    }

    // affiche le resultat
    std::cout << "le max est " << max << " a l'indice " << idx_max << std::endl;
    return 0;
}