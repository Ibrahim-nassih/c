#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float Xa,Xb,Ya,Yb;
    float AB;
    printf("Veullez entrer la coordonnee X de A : ");
    scanf("%f",&Xa);
    printf("Veullez entrer la coodonnee Y de A : ");
    scanf("%f",&Ya);
    printf("Veullez entrer la coordonnee X de B : ");
    scanf("%f",&Xb);
    printf("Veullez entrer la coordonnee Y de B : ");
    scanf("%f",&Yb);
    AB = sqrt (pow((Xb-Xa),2) + pow((Yb-Ya),2));
    printf("La distance entre les deux points A es B est : %.2f",AB);
    return 0;
}

