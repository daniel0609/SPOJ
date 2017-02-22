#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int size=0;
	cin >> size;
	int v1[size];
	int v2[size];
	for(int i=0; i<size;i++)
	{
		cin >> v1[i] >> v2[i];
	}
	for(int i=0; i<size; i++)
	{
		cout <<(2*v1[i]*v2[i])/(v1[i]+v2[i])<<endl;
	}
	
	
	return 0;
}
