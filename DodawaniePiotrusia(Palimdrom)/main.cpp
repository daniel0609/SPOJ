#include <iostream>

using namespace std;

int changeOrder(int number);
bool palimdrom(int liczba);

int main() {

	int n;
	int liczba;
	int comp=0;
	int count=0;
	cin >> n;
	int res[n][2];
	for (int i=0; i<n; i++)
	{
		cin >> liczba;
		if(palimdrom(liczba))
		{
			res[i][0] = liczba;
			res[i][1] = 0;
		}
		else
		{
			while(!palimdrom(liczba))
			{
				liczba = liczba + changeOrder(liczba);
				count++;
			}
			res[i][0] = liczba;
			res[i][1] = count;
			count = 0;
		}
	}
	for (int i=0; i<n; i++)
	{
		cout << res[i][0] << ' ' << res[i][1] << endl;
	}

	return 0;
}
int changeOrder(int number)
{
	int res=0;

	while(!(number==0))
	{
		res=(res+(number%10))*10;
		number/=10;
	}
	return res/10;
}
bool palimdrom(int number)
{
	if(number == changeOrder(number))
		return true;
	else
		return false;
}
