// ...existing code...
#include <iostream>
using namespace std;

#define SIZE 10 
void init_tab(int *tab){
    for(int i = 0; i < SIZE; i++){
        tab[i] = 0; 
    }
}

void set_tab(int *tab, int i, int v){
    if(i >= 0 && i < SIZE){
        tab[i] = v; 
    }
}

int get_size(int *tab) {
    for (int i = SIZE - 1; i >= 0; i--)
    {
        if (tab[i] != 0) {
            return i + 1;
        }
    }
    return 0;
}

void compress_tab(int * tab){
    int new_index = 0;
    for(int i = 0; i < SIZE; i++){
        if(tab[i] != 0){
            tab[new_index++] = tab[i];
        }
    }
    for(int i = new_index; i < SIZE; i++){
        tab[i] = 0; 
    }
}

void print_tab(int *tab){
    cout << "[";
    for(int i = 0; i < SIZE; i++){
        if(i) cout << " ";
        cout << tab[i];
    }
    cout << "]" << endl;
}

int main() {
    int tab[SIZE];
    init_tab(tab);
    set_tab(tab, 0, 5);
    set_tab(tab, 2, 10);
    set_tab(tab, 5, 15);
    print_tab(tab);
    cout << "Size: " << get_size(tab) << endl;
    compress_tab(tab);
    print_tab(tab);
    cout << "Size after compression: " << get_size(tab) << endl;
    return 0;
}
// ...existing code...