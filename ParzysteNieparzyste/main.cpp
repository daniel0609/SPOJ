#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int t;
	int m;
	cin >> t;
	int tab[t][100];
	int col[t];
	for(int i =0 ; i<t; i++)
	{
		for(int j=0; j<100; j++)
			tab[i][j]=0;
	}
	for(int i=0; i<t; i++)
	{
		cin >> col[i];
		for(int j=0; j<col[i]; j++)
		{
			if(j%2==1)
				cin >> tab[i][j/2];
			if(j%2==0)
				cin >> tab[i][col[i]/2+j/2];
		}		
	}
	
	for(int i=0; i<t; i++)
	{
		for(int j=0; j<col[i] ; j++)
			cout << tab[i][j] << ' ';
		cout << endl;
	}
	
	return 0;
}
