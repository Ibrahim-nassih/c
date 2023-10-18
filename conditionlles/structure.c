#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    printf("Veuillez entrer la valeur de N : ");
    scanf("%d",&N);
    if (N>0)
       printf("Ce number est positif");
    else if (N<0)
        printf("Ce numbre est negatif");
    else
    printf("Ce number est nul");
        return 0;
}
