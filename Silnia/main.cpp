#include <iostream>

using namespace std;

int silnia(int liczba)
{
	if(liczba==0)return 1;
	else return(silnia(liczba-1)*liczba);
}

int main() {
		
	int t;
	int a;
	
	cin >>t;
	int tab[t][2];
	
	for(int i=0; i<t; i++)
	{
		cin >> a;
		if(a<10)
		{
			tab[i][0]=silnia(a)%10;
			tab[i][1]=(silnia(a)/10)%10;
		}	
		else
		{
			tab[i][0] = 0;
			tab[i][1] = 0;
		}
	}
	
	for(int i=0; i<t; i++)
	{
		cout << tab[i][1] << ' ' << tab[i][0] << endl;
	}
	return 0;
}


