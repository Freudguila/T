
#include <iostream>

int main() {
    // déclare un tableau de 5 entiers, l'initialise avec les valeurs entrées par l'utilisateur
    int N = 5;
    int tab[N];
    for (int i = 0; i < 5; i++) {
        std::cout << "Entrez le " << i + 1 << "eme entier" << std::endl;
        std::cin >> tab[i];
    }

    // demande a l'utilisateur une valeur a chercher dans le tableau
    int V;
    std::cout << "Entrez la valeur a chercher" << std::endl;
    std::cin >> V;

    // parcourt le tableau et on regarde si V est dans le tableau
    bool est_present = false;
    for (int i = 0; i < 5; i++) {
        if (tab[i] == V) {
            est_present = true;
            break;  // on a trouvé V, on peut arrêter la recherche (break sort de la boucle la plus proche, donc le for ici)
        }
    }

    // affiche le résultat
    if (est_present) {
        std::cout << V << " est dans le tableau" << std::endl;
    } else {
        std::cout << V << " est PAS dans le tableau" << std::endl;
    }
}