

#include <iostream>
/*
    // RAPPEL : boucles en c/c++

    for (initialisation; condition d'arret; incrementation){
        // code a repeter
    }

    while (condition d'arret){
        // code a repeter
    }

    // NOTE : une boucle for n'est qu'une notation déguisée d'une boucle while
    // en effet les deux boucles suivantes sont équivalentes

    initialisation;
    while (condition d'arret){
        // code a repeter
        incrementation;
    }

    for (initialisation; condition d'arret; incrementation) {
        // code a repeter
    }

*/


int main() {
    std::cout << "for all" << std::endl;
    // on boucle sur tous les entiers entre 8 et 23 (inclus)
    for (int i = 8; i <= 23; i++) {
        // on affiche
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "for even" << std::endl;
    for (int i = 8; i <= 23; i++) {
        if ((i % 2) == 0) {  // on affiche seulement si l'entier est pair
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "for even v2" << std::endl;
    // on aurait aussi pu modifier notre boucle pour ne parcourir que les entiers pairs
    for (int i = 8; i <= 23; i += 2) {
        //                     ^^^^
        // on incrémente de 2 !! Comme on commence avec 8 (pair), on ne parcours que les entiers pairs
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "while all" << std::endl;
    // une boucle for n'est qu'une boucle while déguisée :)
    int i = 8;  // (déclaration et) initialisation
    while (i <= 23) {
        std::cout << i << " ";
        i += 1;  // incrementation
    }
    std::cout << std::endl;

    std::cout << "while even" << std::endl;
    i = 8;  // initialisation (on ne re-déclare pas i (i.e. int i;) car i est deja declaré à présent)
    while (i <= 23) {
        if ((i % 2) == 0) {  // on affiche seulement si i est pair
            std::cout << i << " ";
        }
        i += 1;
    }
    std::cout << std::endl;

    // comme pour la boucle for on peut modifier la boucle while pour ne parcourir que les entiers pairs
    std::cout << "while even v2" << std::endl;
    i = 8;
    while (i <= 23) {
        std::cout << i << " ";
        i += 2;  // on incrémente de 2 cette fois (comme on commence avec un pair, on parcours que les nombres pairs)
    }
    std::cout << std::endl;
}
