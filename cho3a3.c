#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float R , V ;
    const float pi = 3.14;
    printf("Veullez entrer le rayon de sphere : ");
    scanf("%f",&R);
    V = (4 * pi * pow(R,3) ) / 3 ;
    printf("La volume du sphere est : %.2f",V);
    return 0;
}
