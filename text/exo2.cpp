#include  <iostream>
using namespace std;

int tab_add(int n, int *tab) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += tab[i];
    }
    return sum;
}
int main() {
    const int size = 5;
    int numbers[size] = {1, 2, 3, 4, 5};
    cout << "Sum of array elements: " << tab_add(size, numbers) << endl;
    return 0;
}