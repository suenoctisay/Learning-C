#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");
    float  vpercentageblank=0.0, vpercentagenull=0.0, vpercentagevalid=0.0, vblank=0.0, vnull=0.0, vvalid=0.0, vvoter=0.0;
    printf("qual a quantidade de votos nulos?\n");
        scanf("%f", &vnull);
        printf("\n\n");
    printf("qual a quantidade de votos brancos?\n");
        scanf("%f", &vblank);
        printf("\n\n");
    printf("quantas pessoas votaram?\n");
        scanf("%f", &vvoter);
        printf("\n\n");
    vvalid=vvoter-(vnull+vblank);
    vpercentageblank=(vblank*100)/vvoter;
    vpercentagenull=(vnull*100)/vvoter;
    vpercentagevalid=(vvalid*100)/vvoter;
        printf("\n\n");
    printf("a porcentagem de votos nulos é: %.2f", vpercentagenull);
        printf("\n");
    printf("a porcentagem de votos brancos é: %.2f", vpercentageblank);
        printf("\n");
    printf("a porcentagem de votos válidos é: %.2f", vpercentagevalid);
        printf("\n\n");

    return 0;
}

