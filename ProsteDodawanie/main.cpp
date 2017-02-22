#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	int lenTab=0;
	int comp=0;
	cin >> n;
	int result[n];
	for(int i=0; i<n; i++)
		result[i]=0;
	for(int i=0; i<n ;i++)
	{
		cin >> lenTab;
		for(int j=0; j<lenTab; j++)
		{
			cin >> comp;
			result[i]+=comp;
		}
	}
	for(int i=0; i<n ;i++)
	{
		cout << result[i] << endl;
	}
	
	
	return 0;
}
