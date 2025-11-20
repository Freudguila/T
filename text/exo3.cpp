#include <iostream>
using namespace std;

int tab_max(int n, int *tab) {
    int max_val = tab[0];
    for (int i = 1; i < n; ++i) {
        if (tab[i] > max_val) {
            max_val = tab[i];
        }
    }
    return max_val;
}
int main() {
    const int size = 5;
    int numbers[size] = {1, 3, 2, 5, 4};
    cout << "Maximum element in the array: " << tab_max(size, numbers) << endl;
    return 0;
}