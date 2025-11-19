#include <iostream>
using namespace std;

int main() {
    const int TAILLE = 10;
    int liste[TAILLE] = {0};  
    int val;

    // Ajouter des entiers
    cout << "Ajoutez 5 entiers :\n";
    for (int i = 0; i < 5; i++) {
        cin >> val;
        liste[i] = val;
    }

    // Afficher la liste
    cout << "Liste : ";
    for (int i = 0; i < TAILLE; i++) cout << liste[i] << " ";
    cout << endl;

    // Moyenne
    int somme = 0, c = 0;
    for (int i = 0; i < TAILLE; i++) {
        if (liste[i] != 0) { somme += liste[i]; c++; }
    }
    if (c > 0) cout << "Moyenne = " << (double)somme / c << endl;

    // Supprimer une valeur
    cout << "Entrez une valeur a supprimer : ";
    cin >> val;
    for (int i = 0; i < TAILLE; i++) {
        if (liste[i] == val) liste[i] = 0;
    }

    // Afficher la liste après suppression
    cout << "Liste apres suppression : ";
    for (int i = 0; i < TAILLE; i++) cout << liste[i] << " ";
    cout << endl;

    return 0;
}
