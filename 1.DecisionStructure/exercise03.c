#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vpais=0;
    printf("Esse programa serve para verificar se o n�mero inserido corresponde a um dos 5 pa�ses: \n\n 1 - Brasil \n 2 - EUA \n 3 - Jap�o \n 4 - Alemanha \n 5 - It�lia \n\n");
    printf("\n\n entre com o n�mero:");
    scanf("%i", &vpais);
    switch (vpais) {
        case 1:
            printf("\n Pa�s: Brasil \n\n");
            break;
        case 2:
            printf("\n Pa�s: EUA \n\n");
            break;
        case 3:
            printf("\n Pa�s: Jap�o \n\n");
            break;
        case 4:
            printf("\n Pa�s: Alemanha \n\n");
            break;
        case 5:
            printf("\n Pa�s: It�lia \n\n");
            break;
        default:
            printf("\n Outros pa�ses \n\n");
    }
    return 0;
}


