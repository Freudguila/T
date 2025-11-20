#include <iostream>
using namespace std;

int tab_max(int n, int *tab, int *index) {
    int max_val = tab[0];
    *index = 0;
    for (int i = 1; i < n; ++i) {
        if (tab[i] > max_val) {
            max_val = tab[i];
            *index = i;
        }
    }
    return max_val;
}
int main() {
    const int size = 5;
    int numbers[size] = {1, 3, 2, 5, 4};
    int max_index;
    int max_value = tab_max(size, numbers, &max_index);
    cout << "Maximum element in the array: " << max_value << " at index " << max_index << endl;
    return 0;
}