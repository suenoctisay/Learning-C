#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "portuguese");
    float vsalary=0.0, vpercentage=0.0, vdiscount=0.0, vfinalsalary=0.0;
    printf("qual o valor do sal�rio?\n");
        scanf("%f", &vsalary);
        printf("\n\n");
    printf("quanto � a porcentagem?\n");
        scanf("%f", &vpercentage);
        printf("\n\n");
    vdiscount=(vsalary*vpercentage)/100;
    vfinalsalary=vsalary-vdiscount;
        printf("\n\n");
    printf("o valor do desconto �: %.2f", vdiscount);
    printf("o valor do seu sal�rio �: %.2f", vfinalsalary);

    return 0;
}
