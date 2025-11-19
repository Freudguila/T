#include <iostream>
using namespace std;

int main() {
    int tab[5];
    int V;
    bool trouve = false;  // Indique si V est trouvé

    cout << "Entrez 5 entiers :" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> tab[i];
    }

    cout << "Entrez un entier V à rechercher : ";
    cin >> V;

    for (int i = 0; i < 5; i++) {
        if (tab[i] == V) {
            trouve = true;
            break;  // On peut arrêter la recherche dès que V est trouvé
        }
    }

    if (trouve) {
        cout << V << " se trouve dans le tableau" << endl;
    } else {
        cout << V << " ne se trouve pas dans le tableau" << endl;
    }

    return 0;
}
