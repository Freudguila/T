#include <iostream>
using namespace std;

int main() {
    int liste[10] = {0};  // initialisation à 0
    int choix, valeur;
    bool quitter = false;

    while (!quitter) {
        cout << "\nMenu:\n";
        cout << "1. Ajouter un entier\n";
        cout << "2. Afficher la liste\n";
        cout << "3. Afficher la moyenne\n";
        cout << "4. Supprimer toutes les occurrences d'un entier\n";
        cout << "5. Quitter\n";
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
            case 1: { // Ajouter un entier
                cout << "Entrez l'entier à ajouter : ";
                cin >> valeur;
                bool ajoute = false;
                for (int i = 0; i < 10; i++) {
                    if (liste[i] == 0) {  // première case vide
                        liste[i] = valeur;
                        ajoute = true;
                        break;
                    }
                }
                if (!ajoute) cout << "La liste est pleine !" << endl;
                break;
            }
            case 2: { // Afficher la liste
                cout << "Liste : ";
                for (int i = 0; i < 10; i++) cout << liste[i] << " ";
                cout << endl;
                break;
            }
            case 3: { // Moyenne
                int somme = 0;
                int count = 0;
                for (int i = 0; i < 10; i++) {
                    if (liste[i] != 0) {  // ne pas compter les zéros
                        somme += liste[i];
                        count++;
                    }
                }
                if (count == 0) cout << "La liste est vide." << endl;
                else cout << "Moyenne : " << (somme / (float)count) << endl;
                break;
            }
            case 4: { // Supprimer un entier
                cout << "Entrez l'entier à supprimer : ";
                cin >> valeur;
                for (int i = 0; i < 10; i++) {
                    if (liste[i] == valeur) {
                        // Décaler les éléments vers la gauche
                        for (int j = i; j < 9; j++) {
                            liste[j] = liste[j + 1];
                        }
                        liste[9] = 0; // dernière case vide
                        i--; // vérifier la nouvelle valeur à la position i
                    }
                }
                break;
            }
            case 5:
                quitter = true;
                break;
            default:
                cout << "Choix invalide !" << endl;
        }
    }

    return 0;
}
