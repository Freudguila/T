
#include <iostream>

int main() {
    // NOTE : dans la suite le tableau n'est pas la liste en elle-même !!
    //        on se sert simplement de celui ci (et de longueur_list) pour représenter la dite liste (de taille maximum 10).

    // on déclare un tableau de 10 entiers et la longueur actuelle de la liste
    int tab[10];
    int longueur_list = 0;

    // on initialise le tableau a 0
    // ici on pourrait s'en passer mais c'est une bonne pratique de TOUJOURS initialiser ses variables
    for (int i = 0; i < 10; i++) {
        tab[i] = 0;
    }

    // un entier qui represente l'action choisie par l'utilisateur
    int action;

    std::cout << "Action possible :" << std::endl;
    std::cout << "  [1] ajouter un element a la liste" << std::endl;
    std::cout << "  [2] afficher la liste" << std::endl;
    std::cout << "  [3] calculer la moyenne" << std::endl;
    std::cout << "  [4] supprimer des occurences" << std::endl;
    std::cout << "  [5] nous quitter :(" << std::endl;

    // boucle infinie pour pouvoir effectuer plusieurs actions
    while (true) {
        // l'utilisateur choisit une action
        std::cout << "Choisissez une action (1-5) : ";
        std::cin >> action;

        // ajouter un element a la liste
        if (action == 1) {
            // on vérifie que l'on peut ajouter un element a la liste (i.e. que le tableau sous-jacent n'est pas plein)
            if (longueur_list < 10) {
                int val;  // la valeur a ajouter
                std::cout << "choissez une valeur : ";
                std::cin >> val;

                // on ajoute l'element a la (fin de la) liste
                tab[longueur_list] = val;
                longueur_list += 1;
            } else {
                // si la liste est pleine on ne peut pas ajouter d'element.
                std::cout << "liste pleine !!" << std::endl;
            }
        }

        // afficher la liste
        if (action == 2) {
            // on affiche les elements de la liste (i.e. les premiers 'longueur_list' elements du tableau)
            for (int i = 0; i < longueur_list; i++) {
                std::cout << tab[i] << " ";
            }
            std::cout << std::endl;
        }

        // calculer la moyenne
        if (action == 3) {
            // on calcul d'abord la somme des elements de la liste
            int sum = 0;
            for (int i = 0; i < longueur_list; i++) {
                sum += tab[i];
            }

            // on calcul (et affiche) la moyenne en faisant attention a bien faire une division flottante
            std::cout << "la moyenne est " << (double)sum / longueur_list
                      << std::endl;
        }

        // supprimer des occurences
        if (action == 4) {
            // la valeur que l'utilisateur veut supprimer
            int to_del;
            std::cout << "valeur a supprimer : ";
            std::cin >> to_del;

            // on crée une nouvelle "liste" dans laquelle on copie les elements de l'ancienne liste sauf ceux a supprimer
            int new_tab[10];
            int new_longueur_liste = 0;

            for (int i = 0; i < longueur_list; i++) {
                if (tab[i] != to_del) {
                    // si la valeur n'est pas celle a supprimer, on l'ajoute dans la nouvelle liste
                    // (c'est la meme chose que l'action 1, mais sur notre nouvelle liste)
                    new_tab[new_longueur_liste] = tab[i];
                    new_longueur_liste += 1;
                }
            }

            // on remplace l'ancienne liste par la nouvelle
            longueur_list = new_longueur_liste;
            for (int i = 0; i < longueur_list; i++) {
                tab[i] = new_tab[i];
            }
        }

        // quitter le programme
        if (action == 5) {
            // un break permet de sortir de la boucle la plus proche (ici while(true))
            std::cout << "bye bye" << std::endl;
            break;
        }
    }

    return 0;
}