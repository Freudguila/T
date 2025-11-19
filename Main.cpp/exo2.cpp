#include <iostream>
using namespace std;

int main() {
    int A, B;

    cout << "Entrez le premier entier A : ";
    cin >> A;
    cout << "Entrez le deuxieme entier B : ";
    cin >> B;

    cout << "Avant echange : A = " << A << "  B = " << B << endl;

    // échange avec une variable temporaire
    int temp = A;
    A = B;
    B = temp;

    cout << "Apres echange : A = " << A << "  B = " << B << endl;

    return 0;
}
