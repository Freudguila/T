#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez un entier : ";
    cin >> n;

    if (n >= 56 && n <= 78) {
        cout << "GAGNE" << endl;
    } else {
        cout << "PERDU" << endl;
    }

    return 0;
}
