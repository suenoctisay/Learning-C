#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int vpais=0;
    printf("Esse programa serve para verificar se o número inserido corresponde a um dos 5 países: \n\n 1 - Brasil \n 2 - EUA \n 3 - Japão \n 4 - Alemanha \n 5 - Itália \n\n");
    printf("\n\n entre com o número:");
    scanf("%i", &vpais);
    switch (vpais) {
        case 1:
            printf("\n País: Brasil \n\n");
            break;
        case 2:
            printf("\n País: EUA \n\n");
            break;
        case 3:
            printf("\n País: Japão \n\n");
            break;
        case 4:
            printf("\n País: Alemanha \n\n");
            break;
        case 5:
            printf("\n País: Itália \n\n");
            break;
        default:
            printf("\n Outros países \n\n");
    }
    return 0;
}


