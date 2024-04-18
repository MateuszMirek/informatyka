#include<iostream>
using namespace std;

int main()
{
    char tablica[100];
    cout<<"Podaj imie i nazwisko: "; 
    cin.getline(tablica,100); //wykorzystanie metody getline()
    cout<<"Twoje dane osobowe: "<<tablica<<endl;
    string s1 = "ilosc lini ";
char cn[] = "";
string s = s1 + '-';
cout << s << endl;

cout << "Length string: " << s1.length() << endl;
cout << "Length tablica: " << sizeof(cn) << endl;

    return 0;
}