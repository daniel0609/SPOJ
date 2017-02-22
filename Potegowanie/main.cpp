	#include <iostream>

	using namespace std;

	int pow(int p, int w)
	{
		if(w==0) return 1;
		else return pow(p,w-1)*p;
	}
	int lastDig(int p, int w, int rep)
	{
		w%=rep;
		if(w==0)
			w=rep;
		return pow(p,w)%10;
	}

	int main() {

		int n,p,w;
		n=0;
		cin >> n;
		int result[n];

		for (int i=0; i<n; i++)
		{
		cin >> p >> w;
			p%=10;
			if(w!=0)
			{
				switch(p)
				{
					case 0:
						result[i]=0;
						break;
					case 1:
						result[i]=1;
						break;
					case 2:
						result[i] = lastDig(p,w,4);
						break;
					case 3:
						result[i] = lastDig(p,w,4);
						break;
					case 4:
						result[i] = lastDig(p,w,2);
						break;
					case 5:
						result[i]=5;
						break;
					case 6:
						result[i]=6;
						break;
					case 7:
						result[i] = lastDig(p,w,4);
						break;
					case 8:
						result[i] = lastDig(p,w,4);
						break;
					case 9:
						result[i] = lastDig(p,w,2);
						break;
				}

			}
			else
				result[i]=1;
		}
		for(int i=0; i<n; i++)
			cout << result[i] << endl;
		return 0;
	}



