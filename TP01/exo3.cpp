#include <iostream>

int main() {
    // on declare un entier et on l'initialise avec la valeur entrée avec la console
    int input;
    std::cout << "entrez un entier" << std::endl;
    std::cin >> input;

    // si l'entier est entre 56 et 78 (inclus), on affiche "GAGNEZ", sinon on affiche "PERDU"
    if ((input >= 56) && (input <= 78)) {
        std::cout << "GAGNEZ" << std::endl;
    } else {
        std::cout << "PERDU" << std::endl;
    }

    // On aurait aussi pu utiliser des variables intermédiaires pour stocker les conditions
    // quelque chose comme :
    if (false) {  // mettre true pour executer ce code

        bool bound_low, bound_high, win;
        bound_low = (input >= 56);
        bound_high = (input <= 78);
        win = bound_low && bound_high;

        if (win) {
            std::cout << "GAGNEZ" << std::endl;
        } else {
            std::cout << "PERDU" << std::endl;
        }
    }
    return 0;
}