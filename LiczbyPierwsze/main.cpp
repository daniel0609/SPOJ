#include <iostream>
/*
2       ile danych
11      pierwsza liczba do sprawdzenia
7       druga liczba do sprawdzenia
TAK     czy 11 jest liczba pierwsza
TAK     czy 7 jest liczba pierwsza
*/
using namespace std;

int main(int argc, char** argv)
{

    int n=0;
    cin >> n;
    int liczba;
    bool result[n];
    for(int i=0 ; i<n ; i++)
        result[i]=true;


    for(int i=0 ; i<n ; i++)
    {
        cin >> liczba;
        if(liczba==0)
        {
            result[i] = false;
        }
        if(liczba==1)
        {
            result[i] = false;
        }
        for(int j=2; j<liczba; j++)
        {
            if(liczba%j==0)
            {
                result[i]=false;
                break;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        if(result[i] == false)
            cout << "NIE" <<endl;
        else
            cout << "TAK" << endl;
    }

    return 0;
}
