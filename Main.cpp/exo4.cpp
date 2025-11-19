#include <iostream>
using namespace std;

int main() {
    int x;          // Pour stocker chaque entier saisi
    int somme = 0;  // Pour accumuler la somme

    cout << "Entrez 5 entiers :" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> x;
        somme += x;  // Ajout à la somme
    }

    cout << "La moyenne est : " << (somme / 5.0) << endl;

    return 0;
}
