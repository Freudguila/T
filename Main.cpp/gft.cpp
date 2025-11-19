#include <iostream>
using namespace std;

void afficherMenu() {
    cout << "\n=== Menu ===\n";
    cout << "1. Ajouter un entier dans la liste\n";
    cout << "2. Afficher la liste\n";
    cout << "3. Afficher la moyenne des elements de la liste\n";
    cout << "4. Supprimer tous les entiers ayant une valeur donnee\n";
    cout << "0. Quitter\n";
    cout << "Votre choix : ";
}

int main() {
    const int TAILLE = 10;
    int liste[TAILLE] = {0}; // tableau de 10 entiers initialises à 0
    int choix;

    do {
        afficherMenu();
        cin >> choix;

        if (choix == 1) {
            int valeur;
            cout << "Entrez un entier a ajouter : ";
            cin >> valeur;

            bool insere = false;
            for (int i = 0; i < TAILLE; i++) {
                if (liste[i] == 0) {  // première case libre
                    liste[i] = valeur;
                    cout << valeur << " ajoute dans la liste." << endl;
                    insere = true;
                    break;
                }
            }
            if (!insere) {
                cout << "La liste est pleine, impossible d’ajouter." << endl;
            }

        } else if (choix == 2) {
            cout << "Liste : ";
            for (int i = 0; i < TAILLE; i++) {
                cout << liste[i] << " ";
            }
            cout << endl;

        } else if (choix == 3) {
            int somme = 0, compteur = 0;
            for (int i = 0; i < TAILLE; i++) {
                if (liste[i] != 0) {
                    somme += liste[i];
                    compteur++;
                }
            }
            if (compteur > 0) {
                double moyenne = (double) somme / compteur;
                cout << "Moyenne des elements : " << moyenne << endl;
            } else {
                cout << "La liste est vide, impossible de calculer une moyenne." << endl;
            }

        } else if (choix == 4) {
            int valeur;
            cout << "Entrez la valeur a supprimer : ";
            cin >> valeur;

            bool supprime = false;
            for (int i = 0; i < TAILLE; i++) {
                if (liste[i] == valeur) {
                    liste[i] = 0; // on remplace par 0
                    supprime = true;
                }
            }
            if (supprime) {
                cout << "Toutes les occurrences de " << valeur << " ont ete supprimees." << endl;
            } else {
                cout << "Valeur non trouvee dans la liste." << endl;
            }

        } else if (choix == 0) {
            cout << "Programme termine." << endl;

        } else {
            cout << "Choix invalide. Essayez encore." << endl;
        }

    } while (choix != 0);

    return 0;
}
