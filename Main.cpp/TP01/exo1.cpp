#include <iostream>  // inclut iostream permet d'utiliser `std::cout` et `std::cin` pour que le programme puisse intéragir avec la console

int main() {
    int longueur, largeur;  // on declare deux entiers

    // on initialise la longueur avec la valeur entrée avec la console
    std::cout << "entrez une longueur" << std::endl;
    std::cin >> longueur;

    // pareil avec la largeur
    std::cout << "entrez une largeur" << std::endl;
    std::cin >> largeur;

    int perimetre, surface;  // on declare un entier pour stocker la valeur du périmetre et de la surface

    // on initialise permietre et surface avec les valeurs appropriées.
    perimetre = 2 * (longueur + largeur);
    surface = longueur * largeur;

    // on affiche les résultats
    std::cout << "le perimetre du rectangle est " << perimetre;
    std::cout << " et sa surface est " << surface << "." << std::endl;

    return 0;
}
