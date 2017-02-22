#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1=0;
    int l2=0;
    int l3=0;
    int d=0;
    int n=0;
    int i=0;
    scanf("%d", &n);
    int tab[n];
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d", &l1, &l2, &l3);
        d=(l1+l2-l2*l3)*12/(l3-1);
        d=d*-1;
        tab[i]=d;
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n", tab[i]);
    }

    return 0;
}
