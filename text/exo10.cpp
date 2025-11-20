// ...existing code...
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;

char* zorglangue(char* s) {
    if (!s) return nullptr;
    size_t len = std::strlen(s);
    char* result = (char*)malloc(len + 1); // allocation C
    if (!result) return nullptr;

    size_t start = 0, end = 0, pos = 0;

    while (s[start] != '\0') {
        end = start;
        // Trouver fin du mot
        while (s[end] != ' ' && s[end] != '\0') end++;

        // Copier le mot à l’envers
        for (size_t j = end; j > start; --j) {
            result[pos++] = s[j - 1];
        }

        // Ajouter l’espace s’il y en a un
        if (s[end] == ' ') {
            result[pos++] = ' ';
            start = end + 1;
        } else {
            start = end;
        }
    }

    result[pos] = '\0';
    return result;
}

int main() {
    char phrase[] = "je suis  zorglub "; // double espace et espace final testés
    char* trad = zorglangue(phrase);
    if (!trad) return 1;
    printf("Original : \"%s\"\n", phrase);
    printf("Zorglangue: \"%s\"\n", trad); // ej sius  bulgroz 
    free(trad);
    return 0;
}
// ...existing code...