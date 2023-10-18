#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A , B , Max;
    printf("Veuillez entrer la valeur de A : ");
    scanf("%f",&A);
    printf("Veullez enrer la valeur de B : ");
    scanf("%f",&B);
    Max = A ;
    if ( B > Max ){ 
        Max = B ;
    }
    printf("le maximum est : %.2f", Max);
    return 0;
}
