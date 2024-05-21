#include <iostream>
using namespace std;
struct Ksiegarnia_DDT //deklaracja struktury
{
    //opis struktury
    string tytul;
    string autor;
    int rok;
    string wydawnictwo;
    float cena;
};

int main()
{
	int rok;
    string wydawnictwo;
    float cena;
	
	int n;
    
	Ksiegarnia_DDT ksiazki[ 7 ] =
	{
	    { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
	    { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
	    { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
	    { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
	    { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
	    { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
	    { "Tytul7", "autor1", 1931, "Helion1", 29.54 },
	};
    
    cout << "Witaj w ksiegarnii" << endl << "Po jakiej kategorii bys chcial wyszukac ksiazke: " << endl;
    cout << "1. Rok wydania" << endl << "2. Cena" << endl << "3. Wydawnictwo" << endl << "0. Wyjscie" << endl;
    cin >> n;
	    if(n == 1){
	    	cout << "Od jakiego roku ksiazka: " << endl;
	    	cin >> rok;
			for(int i = 0; i < 7; i++){
				if(ksiazki[i].rok >= rok){
					cout << ksiazki[i].tytul << " " << ksiazki[i].autor << " " << ksiazki[i].rok << " " << ksiazki[i].wydawnictwo << " " << ksiazki[i].cena << endl;
				}
			}	    	
		}
		if(n == 2){
			cout << "Ponad jaka cene: " << endl;
			cin >> cena;
			for(int i = 0; i < 7; i++){
				if(ksiazki[i].cena >= cena){
					cout << ksiazki[i].tytul << " " << ksiazki[i].autor << " " << ksiazki[i].rok << " " << ksiazki[i].wydawnictwo << " " << ksiazki[i].cena << endl;
				}
			}
		}
		if(n == 3){
			cout << "Jakie wydawnictwo: " << endl;
			cin >> wydawnictwo;
			for(int i = 0; i < 7; i++){
				if(ksiazki[i].wydawnictwo == wydawnictwo){
					cout << ksiazki[i].tytul << " " << ksiazki[i].autor << " " << ksiazki[i].rok << " " << ksiazki[i].wydawnictwo << " " << ksiazki[i].cena << endl;
				}
			}
		}
	    if(n == 0){
	    	return 0;
		}

    return(0);
}
