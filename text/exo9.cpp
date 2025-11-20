// ...existing code...
#include <iostream>
#include <cmath>
#include <new>

int* fast_tab_prime(int n) {
    if (n <= 0) return nullptr;

    size_t limit;
    if (n < 6) limit = 15;
    else limit = (size_t)(n * (std::log(n) + std::log(std::log(n)))) + 10;

    while (true) {
        bool* is_prime = new (std::nothrow) bool[limit];
        if (!is_prime) return nullptr;
        for (size_t i = 0; i < limit; ++i) is_prime[i] = false;
        for (size_t i = 2; i < limit; ++i) is_prime[i] = true;

        size_t r = (size_t)std::sqrt(limit) + 1;
        for (size_t p = 2; p <= r; ++p) {
            if (is_prime[p]) {
                for (size_t j = p * p; j < limit; j += p)
                    is_prime[j] = false;
            }
        }

        int* primes = new (std::nothrow) int[n];
        if (!primes) { delete[] is_prime; return nullptr; }

        int count = 0;
        for (size_t i = 2; i < limit && count < n; ++i) {
            if (is_prime[i]) primes[count++] = (int)i;
        }

        delete[] is_prime;
        if (count == n) return primes;

        delete[] primes;
        limit *= 2; // agrandir la limite et réessayer
    }
}
// ...existing code...

int main() {
    int n = 10;
    int* primes = fast_tab_prime(n);
    if (!primes) return 1;
    for (int i = 0; i < n; ++i) {
        std::cout << primes[i] << (i + 1 == n ? '\n' : ' ');
    }
    delete[] primes;
    return 0;
}