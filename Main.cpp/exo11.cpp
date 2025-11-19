#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15;
    int *p_1, *p_2;

    p_1 = &a;        // p_1 pointe sur a
    p_2 = &b;        // p_2 pointe sur b

    cout << "*p_1 = " << *p_1 << endl;  // valeur pointée par p_1 (a)
    cout << "*p_2 = " << *p_2 << endl;  // valeur pointée par p_2 (b)

    *p_1 = *p_2;     // a prend la valeur de b
    cout << "a = " << a << endl;

    p_2 = &c;        // p_2 pointe maintenant sur c
    *p_2 = *p_1 + *p_2; // c = a + c
    cout << "c = " << c << endl;

    return 0;
}
