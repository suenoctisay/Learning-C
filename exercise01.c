#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");
    float vsalary=0.0, vsellcars=0.0, vsellall=0.0, vfinalsalary=0.0;
    printf("qual o valor do salário?\n");
        scanf("%f", &vsalary);
        printf("\n\n");
    printf("quantos carros foram vendidos?\n");
        scanf("%f", &vsellcars);
        printf("\n\n");
    printf("qual o valor total de vendas desse mês?\n");
        scanf("%f", &vsellall);
        printf("\n\n");
    vfinalsalary=(vsalary*2)+(50*vsellcars)+((vsellall*5)/100);
    printf("o valor do seu salário esse mês é: %.2f", vfinalsalary);

    return 0;
}


