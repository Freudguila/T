# include <iostream>


int main(){
    int tab[5]; // on déclare un tableau de 5 entiers

    for (int i = 0 ; i < 5 ; i++){
        // on demande un entier à l'utilisateur et on le stocke dans tab[i]
        std::cout << "Entrez le " << i+1 <<"eme entier" << std::endl;
        std::cin >> tab[i];
    }

    // on parcourt le tableau et on compte le nombre d'entiers superieur ou egal a 10
    int nb_sup_10 = 0;
    for (int i = 0 ; i < 5 ; i++){
        if (tab[i] >= 10){
            nb_sup_10 = nb_sup_10 + 1;
        }
    }
    std::cout << "nombre d'entier superieur ou egal a 10 est " << nb_sup_10 << std::endl;

    // on aurait bien sûr pu demander les entiers un par un plutot qu'avec une boucle :
    // std::cout << "Entrez le 1er entier" << std::endl;
    // std::cin >> tab[0];

    // std::cout << "Entrez le 2e entier" << std::endl;
    // std::cin >> tab[1];

    // etc.. 
    return 0;
}