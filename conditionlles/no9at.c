#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1,N2,N3,Moyenne ;
    printf("Veuillez saisit les 3 notes : ");
    scanf("%f %f %f",&N1,&N2,&N3);
    Moyenne = (N1+N2+N3)/3;
    printf("La moyanne de l'etudiant est : %.2f \n",Moyenne);
    if (Moyenne<10)
       printf("La mention de l'etudiant est : Insuffissant");
    else if (Moyenne>=10 && Moyenne < 12)
       printf("La mention de l'etudiant est : Passable ");
    else if (Moyenne>=12 && Moyenne > 14)
       printf("La mention  de l'etudiant est : Assez bien ");
    else if (Moyenne>=14 && Moyenne < 16)
       printf("La mention de l'etudient est : Bien ");
    else if (Moyenne>=16)
       printf("La mention de l'etudiant est : Tres bien");
       
    return 0;
}
