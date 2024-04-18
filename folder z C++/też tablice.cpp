#include <iostream>
using namespace std;

int main()
{
    int liczby[ 3 ];
    cout << "Podaj liczbe 1:";
    cin >> liczby[  ];
    cout << "Podaj liczbe 2:";
    cin >> liczby[ 1 ];
    liczby[ 2 ] = 567;
    cout << "liczby[2] wynosi " << liczby[ 2 ] << endl;
    int suma = liczby[ 0 ] + liczby[ 1 ] + liczby[ 2 ];
    cout << "Suma trzech liczb wynosi:" << suma << endl;
   
    return 0;
}