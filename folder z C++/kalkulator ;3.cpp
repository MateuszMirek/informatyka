#include <iostream>
 
using namespace std;
 
int main() {
 
   char operacja;
 
   float liczba1, liczba2;
 
   cout << "Podaj dzialanie (+, -, *, /): ";
 
   cin >> operacja;
 
   cout << "Podaj dwie liczby: ";
 
   cin >> liczba1 >> liczba2;
 
   switch(operacja) {
 
       case '+':
 
           cout << liczba1 << " + " << liczba2 << " = " << liczba1 + liczba2;
 
           break;
 
       case '-':
 
           cout << liczba1 << " - " << liczba2 << " = " << liczba1 - liczba2;
 
           break;
 
       case '*':
 
           cout << liczba1 << " * " << liczba2 << " = " << liczba1 * liczba2;
 
           break;
 
       case '/':
 
           if (liczba2 != 0) {
 
               cout << liczba1 << " / " << liczba2 << " = " << liczba1 / liczba2;
 
           } else {
 
               cout << "Czarna dziura!!!";
 
           }
 
           break;
 
       default:
 
           cout << "";
 
   }
 
   return 0;
 
}
