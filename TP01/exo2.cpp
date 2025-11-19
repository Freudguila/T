#include <iostream>

int main() {
    int A, B;  // on declare deux entiers

    // on initialise A et B avec les valeurs entrées avec la console
    std::cout << "entrer A" << std::endl;
    std::cin >> A;

    std::cout << "entrer B" << std::endl;
    std::cin >> B;

    // on echange A et B
    int temp;
    temp = A;  // on retient la valeur A
    A = B;     // on remplace la valeur de A par B
    B = temp;  // on remplace la valeur de B par la valeur originale de A

    // on affiche A et B
    std::cout << "A = " << A << ", B = " << B << std::endl;
}