#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A , B , C ;
    printf("Veullez entrer la valeur de A : ");
    scanf("%d",&A);
    printf("Veullez entree la valeur de B : ");
    scanf("%d",&B);
    C = A ;
    A = B ;
    B = C ;
    printf("La nouvelle valeur de A est : %d \n",A);
    printf("La noivelle valeur de B est : %d \n",B);
    return 0;
}
