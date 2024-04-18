# include <iostream>
using namespace std;

int main()
{
	int tab[ 3 ][ 5 ];
	int x = 1;
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 5; j++){
				tab[ i ][ j ] = x;
				x++;	
			}		
		}
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 5; j++){
				if (tab[i][j] < 10)
					cout << " ";
				cout << tab[ i ][ j ] << " ";
			}
			cout << endl;
		}
	
	
	
}
