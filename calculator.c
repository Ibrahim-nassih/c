#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A , B, S , P , Df,Dv;
    printf("Veuillez la valeur de A : ");
    scanf("%f", &A);
    printf("Veuillez la valeur de B : ");
    scanf("%f", &B);
    S = A + B ;
    P = A * B ;
    Df = A - B ;
    Dv = A / B ;
    printf("La somme de A et B est : %.2f \n",S);
    printf("A - B = %.2f \n",Df);
    printf("A * B = %.2f \n",P);
    printf("A / B = %.2f \n",Dv);
    return 0;
}
