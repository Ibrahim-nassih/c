#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int T , H , M , S , R;
    printf("Veullez entrer la duree en seconde : ");
    scanf("%d",&T);
    H = T / 3600;
    R = T % 3600;
    M = R / 60;
    S = R %60;
    printf("%dH %dm %ds",H,M,S);
    return 0;
    
}
