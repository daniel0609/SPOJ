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


int main()
{
    int i=0;
    int n=0;
    scanf("%d", &n);
    int a = 0;
    int b = 0;
    for(i=0; i<n; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        printf("%d\n", euklides(a,b));
    }
    return 0;
}
