#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int m;
	int cookies;
	int sum;
	cin >> n;
	int result[n];
	for(int i=0; i<n ;i++)
	{
		sum = 0;
		cin >> m;
		cin >> cookies;
		int *tab;
		tab = new int[m];
		for(int j=0; j<m;j++)
		{
			cin >> tab[j];
			tab[j]=86400/tab[j];
			sum+=tab[j];
		}
		if(sum%cookies==0)
			result[i] = sum/cookies;
		else
			result[i] = sum/cookies+1;
		delete[] tab;
	}
	for(int i=0; i<n; i++)
	{
		cout << result[i] << endl;		
	}
	
	return 0;
}
