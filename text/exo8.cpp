// ...existing code...
#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) 
            return false;
    }
    return true;
}

int* tab_prime(int n) {
    if (n <= 0) return nullptr;
    int *tab = new int[n]; // allocation en C++
    int count = 0;
    int current = 2;

    while (count < n) {
        if (is_prime(current)) {
            tab[count++] = current; // stocker et incrémenter count
        }
        current++;
    }
    return tab;
}

int main(){
    int n = 10;
    int *t = tab_prime(n);
    if (!t) return 1;

    for (int i = 0; i < n; i++) {
        cout << t[i] << " ";
    }
    cout << endl;

    delete[] t; // libération correspondante à new[]
    return 0;
}
// ...existing code...