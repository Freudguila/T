#include <iostream>
using namespace std;

int main() {
    cout << "Nombres de 8 à 23 :" << endl;
    for (int i = 8; i <= 23; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Nombres pairs de 8 à 23 :" << endl;
    for (int i = 8; i <= 23; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int i = 8;
    cout << "Nombres de 8 à 23 :" << endl;
    while (i <= 23) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    cout << "Nombres pairs de 8 à 23 :" << endl;
    i = 8; // réinitialisation
    while (i <= 23) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;

    return 0;
}
