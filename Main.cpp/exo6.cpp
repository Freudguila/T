#include <iostream>
using namespace std;

int main() {
    int x, min;

    cout << "Entrez 5 entiers :" << endl;

    cin >> x;       // Premier entier saisi
    min = x;        // On suppose que c'est le plus petit au départ

    for (int i = 1; i < 5; i++) {  // Il reste 4 entiers à saisir
        cin >> x;
        if (x < min) {
            min = x;  // Mise à jour si on trouve plus petit
        }
    }

    cout << "Le plus petit entier est : " << min << endl;

    return 0;
}
