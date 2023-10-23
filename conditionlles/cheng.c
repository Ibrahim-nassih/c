#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A , B , C , D;
    printf("Veuillez entrer la valeur de A : ");
    scanf("%d",&A);
    printf("Veuillez entrer la valeur de B : ");
    scanf("%d",&B);
    if (A*B>0){
        C = A;
        A = B;
        B = C;
    }
    else{
        C = A + B ;
        D = A * B ;
        A = C ;
        B = D ;
        
    }
    printf("la nouvelle valeur de A est : %d \n",A);
    printf("La nouvelle valeur de B est : %d \n",B);
    return 0;
}
