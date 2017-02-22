#include <stdio.h>
#include <stdlib.h>
void reverse(int* tab, int len)
{
    int buf = 0;
    int *iter=tab;
    int j=0;
    for(j=0 ; j<len/2; j++) //odwracanie danych
    {
        iter = tab;
        iter = iter+j;
        buf = *iter;
        *iter = *(tab+len-1-j);
        iter = tab+len-1-j;
        *iter = buf;
    }
}
int main()
{
    int n=0;
    int i=0;
    int j=0;
    int *wsk=0;
    int *iter=0;
    scanf("%d", &n);
    int lenTests[n];
    for(i=0 ; i< n ; i++)
    {
        scanf("%d", &lenTests[i]);
        wsk = malloc(sizeof(int)*lenTests[i]);  // alokuje tablice na dane;
        iter = wsk;
        for(j=0 ; j<lenTests[i]; j++)   //wczytanie danych
        {
            scanf("%d", iter+j);
        }
        reverse(wsk, lenTests[i]);      // odwracanie danych
        iter = wsk;
        for(j=0 ; j<lenTests[i]; j++)   //wypisywanie danych
        {
            printf("%d ", *(iter+j));
        }
        printf("\n");
        free(wsk);  // zwolnienie pamieci;
    }

    return 0;
}
