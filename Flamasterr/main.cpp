#include <iostream>

using namespace std;

string del2(string s)
{
	int i=0;
	while(s[i]!=0)
	{
		if(s[i]=='2')
			s[i]=s[i-1];
		i++;
	}
	return s;
}
string intToStr(int n)
{
     string tmp, ret;
     do {
      tmp += n % 10 + 48;
      n -= n % 10;
     }
     while(n /= 10);
     for(int i = tmp.size()-1; i >= 0; i--)
      ret += tmp[i];
     return ret;
}

int main()
{
    int counter = 0;
    int i=0;
	int n;
	cin >> n;
    string res[n];
    string s;
    for(int j=0; j<n; j++)
    {
        cin >> s;
        i=0;
        while(s[i]!=0)
        {
            if(s[i]==s[i+1])
            {
                counter++;
            }
            else
            {
                if(counter == 0)
                    res[j]=res[j]+s[i];
                else
                    res[j]=res[j]+s[i]+intToStr(counter+1);
                counter = 0;
            }
            i++;
        }
    }
    for(int i=0; i<n; i++)
	{
		cout << del2(res[i]) << endl;
	}

    return 0;
}
