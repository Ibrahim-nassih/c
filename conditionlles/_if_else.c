#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A , B ;
    printf("Veuillez entrer la dividende : ");
    scanf("%f",&A);
    printf("Veuillez entrer le diviseur : ");
    scanf("%f",&B);
    if (B != 0)
        printf("le resultat est : %.2f ",A/B);
        else
        printf("La division par 0 est impossilible ");
        return 0;
}
