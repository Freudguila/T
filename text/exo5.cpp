// ...existing code...
#include <iostream>
using namespace std;

int tab_max(int n, int *tab, int *idmax, int *size_idmax) {
    int max = tab[0];
    *size_idmax = 1;
    idmax[0] = 0;

    for (int i = 1; i < n; ++i) {
        if (tab[i] > max) {
            max = tab[i];
            *size_idmax = 0;
            idmax[(*size_idmax)++] = i;
        } else if (tab[i] == max) {
            idmax[(*size_idmax)++] = i;
        }
    }
    return max;
}

int main() {
    const int size = 6;
    int numbers[size] = {1, 3, 5, 5, 2, 5};
    int max_index[6];
    int size_idmax = 0;
    int max_value = tab_max(size, numbers, max_index, &size_idmax);
    cout << "Maximum element in the array: " << max_value << " at indices ";
    for (int i = 0; i < size_idmax; ++i) {
        cout << max_index[i] << " ";
    }
    cout << endl;
    return 0;
}
// ...existing code...