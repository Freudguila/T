// ...existing code...
#include <iostream>
using namespace std;

bool* crible(int n) {
    if (n <= 0) return nullptr;
    bool* prime = new bool[n];
    for (int i = 0; i < n; ++i) prime[i] = true;
    if (n > 0) prime[0] = false;
    if (n > 1) prime[1] = false;

    for (int i = 2; i * i < n; ++i) {
        if (prime[i]) {
            for (int j = i * i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }
    return prime;
}

int main() {
    int n = 30;
    bool* tab = crible(n);
    if (!tab) return 1;

    cout << boolalpha; // affiche "true"/"false" au lieu de 1/0
    cout << "Tableau crible (index: valeur):" << endl;
    for (int i = 0; i < n; ++i) {
        cout << i << ": " << tab[i];
        if (i + 1 < n) cout << ", ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << endl;

    cout << "Nombres premiers < " << n << " : ";
    for (int i = 2; i < n; ++i) {
        if (tab[i]) cout << i << " ";
    }
    cout << endl;

    delete[] tab;
    return 0;
}
// ...existing code...