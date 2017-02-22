#include <stdio.h>
#include <stdlib.h>

int euk(int a, int b)
{
    if(b>a) //zamien a z b jezeli b jest wieksze od a
    {
        int buf;
        buf = a;
        a = b;
        b = buf;
    }
    if(a-b==0) return a+b;
    else return euk((a-b), b);
}

int main()
{
    int a=0;
    int b=0;
    int n=0;
    int i=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", euk(a,b));
    }
    return 0;
}
