#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A , B ;
    printf("Veuillez enrer la valeur de A : ");
    scanf("%d",&A);
    printf("Veuillez enrer la valeur de B : ");
    scanf("%d",&B);
    if (A*B>0)
       printf("A et B ont le meme signe");
       else
       printf("A et B ont deux signes defferents");
    return 0;
}
