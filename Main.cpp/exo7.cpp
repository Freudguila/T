#include <iostream>
using namespace std;

int main() {
    int tab[5];
    int count = 0;

    cout << "Entrez 5 entiers :" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> tab[i];
        if (tab[i] >= 10) {
            count++;  // Incrémente si l'élément est >= 10
        }
    }

    cout << "Nombre d'entiers >= 10 : " << count << endl;

    return 0;
}
