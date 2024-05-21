#include <iostream>
using namespace std;

int main(){
 
int x;    
int tab[25] = {2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
int liczby[25];
int index = 0;

cout << "podaj szukane liczby: ";
cin >> x;

cout << "znajduje się na pozycjach: ";
    for(int i = 0; i < 25; i++ ){
        if (tab[i] == x){
            liczby[i] = index;
            cout << liczby[i] << ", ";
        }
        index = index + 1;
    }

    return 0;
}
