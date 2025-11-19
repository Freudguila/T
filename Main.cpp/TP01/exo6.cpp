

#include <iostream>

int main() {
    int val;  // variable pour stocker la valeur entrée par l'utilisateur
    int min;  // le minimum des valeurs entrées par l'utilisateur

    // il nous faut initialiser le minimum...
    // deux options :
    //    - choisir un très grand nombre (e.g. 1000000, ou encore mieux 2^31-1 car un int est codé sur 32 bits dont 1 bit de signe, donc peut représenter les entiers entre -2^31 et 2^31-1 inclus)
    //    - initialiser le min avec la première valeur entrée par l'utilisateur

    // version 1 : initialiser min avec un grand nombre
    if (false) {
        
        min = 2147483647;  // on initialise min

        for (int i = 0; i < 5; i++) {
            // on demande un entier à l'utilisateur
            std::cout << "Entrez un entier : ";
            std::cin >> val;

            // si la valeur est plus petite que le minimum on met à jour le minimum
            if (val < min) {
                min = val;
            }
        }
    } 
    
    // version 2 : initialiser min avec la première valeur entrée par l'utilisateur
    else {
        for (int i = 0; i < 5; i++) {
            std::cout << "Entrez un entier : ";
            std::cin >> val;

            if (i == 0) {  // si c'est la première valeur entrée par l'utilisateur (i == 0), on initialise min avec cette valeur
                min = val;
            } else {  // sinon on fait notre test habituel
                if (val < min) {
                    min = val;
                }
            }

            // de maniere compacte on aurait pu écrire
            // if (i == 0 || val < min) {
            //     min = val;
            // }
        }
    }
    std::cout << "minimum : " << min << std::endl;
}