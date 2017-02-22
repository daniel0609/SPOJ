#include <stdio.h>
#include <stdlib.h>

int euklides(int a, int b)
{
    int c;
    if(a == 0 || b == 0)
        return 0;
    if(a<b)
    {
        c = a;
        a = b;
        b = c;
    }
    while(b!=0)
    {
        c=a-b;
        if(c>b)
        {
            a = c;
        }
        else
        {
            a = b;
            b = c;
        }
    }
    return a;
}
int nwd(int a, int b)
{
    int c;
    while(b!=0)
    {
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}
int nww(int a, int b)
{
    if(a == 0 && b == 0)
        return 0;
    else if(a == 0 && b!=0)
        return b;
    else if(a != 0 && b == 0)
        return a;

    return a*b/euklides(a,b);
}

int main()
{
    int i=0;
    int n=0;
    scanf("%d", &n);
    int tab[n];
    int a = 0;
    int b = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        tab[i] = nww(a,b);
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n", tab[i]);
    }

    return 0;
}

