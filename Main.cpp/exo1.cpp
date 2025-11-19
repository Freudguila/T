#include <iostream>


int main() {
    int largeur, longueur;

    std::cout << "Entrez la largeur du rectangle : " << std::endl;
    std::cin >> largeur;

    std::cout << "Entrez la longueur du rectangle : " << std::endl;
    std::cin >> longueur;

    int perimetre ;
    parametre = 2 * (largeur + longueur);
    std::cout<<"le perimetre du rectangle est :"<< perimetre<<std::endl;
    int surface;
    surface  = largeur * longueur;

   
   std::cout << "La surface du rectangle est : " << surface << std::endl;

    return 0;
}
