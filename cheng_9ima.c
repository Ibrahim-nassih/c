#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A , B ;
    printf("Veullez entrer la valeur de A : ");
    scanf("%d",&A);
    printf("Veullez entrer la valeur de B : ");
    scanf("%d",&B);
    A = A + B;
    B = A - B;
    A = A - B;
    printf("La nouvelle valeur de A est : %d \n",A);
    printf("La noivelle valeur de B est : %d \n",B);
    return 0;
}
