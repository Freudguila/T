

#include <iostream>

void version0() {
    // version avec une variable pour chaque entier
    int v1, v2, v3, v4, v5;
    std::cout << "entrer 5 variables" << std::endl;

    std::cin >> v1;
    std::cin >> v2;
    std::cin >> v3;
    std::cin >> v4;
    std::cin >> v5;

    double mean;  // on declare une variable pour stocker la moyenne. ATTENTION : ce n'est pas un entier !

    // mean = (v1 + v2 + v3 + v4 + v5) / 5;
    // ATTENTION : on fait ici une division entière car les deux opérandes (i.e. (v1 + v2 + v3 + v4 + v5) et 5) sont des entiers.
    // pour avoir une division de flottant, il faut que l'une des deux opérandes soit un flottant !

    // on peut par exemple écrire 5.0 (ou 5.) au lieu de 5
    // mean = (v1 + v2 + v3 + v4 + v5) / 5.0;

    // on peut également promouvoir (ou caster en anglais) la somme en flottant
    // mean = (double) (v1 + v2 + v3 + v4 + v5) / 5;

    // on peut aussi faire les deux
    mean = (double)(v1 + v2 + v3 + v4 + v5) / 5.0;

    // on affiche le résultat
    std::cout << "moyenne : " << mean << std::endl;
}

void version1() {
    // version avec une boucle
    int v;        // variable temporaire pour stocker l'entier entrée
    int sum = 0;  // variable pour stocker la somme des entiers (c'est tout ce dont on a besoin pour calculer la moyenne)

    std::cout << "entrer 5 entiers" << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cin >> v;
        sum += v;
    }

    double mean = (double)sum / 5;  // comme dans la version0 on fait attention a bien faire une division de flottants

    std::cout << "moyenne : " << mean << std::endl;
}

int main() {
    // version0();
    version1();

    return 0;
}
