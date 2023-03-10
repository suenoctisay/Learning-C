#include<stdio.h>

int main()
{
char sexo = 0,sexo_menorsalario = 0;
int idade,maior,menor,idade_menorsalario,qtd_mulheres,qtidadehabitantes;
double salario,menorsalario=1,soma_salario;

idade = 0;
qtidadehabitantes = 0;
qtd_mulheres= 0;
maior = 0;
menor = 200;
idade_menorsalario = 9999;
salario = 0;
soma_salario =0;

while(idade >=0)
    {
       printf(" \n * Informe a idade do entrevistado: ");
       scanf("%d",&idade);

      if(idade < 0)
       {
        break; /*Se a idade for menor que zero, o comando while finaliza a entrada de dados */
       }
      printf("\n Sexo <M/F>: "); /*As letras M e F devem ser maiúsculas*/
      scanf("%s",&sexo);

      printf("\n Informe o Salario: R$");
      scanf("%d",&salario);

      if(sexo =='F')
       {
         qtd_mulheres =qtd_mulheres+ 1;
       }

      if(salario >= 0 )
       {
         soma_salario = soma_salario + salario;
         qtidadehabitantes = qtidadehabitantes +1;
        }

        if(idade > maior)
        {
          maior =idade;
         }

      if(idade < menor)
       {
        menor = idade;
       }

      if(salario < menorsalario)
       {
         menorsalario=salario;
         idade_menorsalario = idade;
         sexo_menorsalario = sexo;
       }

 } /*  fim do while */
     printf("\n\t Fim programa \n");

     printf("\n Media dos salarios do grupo: R$ %d \n",soma_salario/qtidadehabitantes);
     printf(" Menor idade: %d anos \n",menor);
     printf(" Maior idade: %d anos \n",maior);
     printf("\n A quantidade de mulheres na regiao = %d ",qtd_mulheres);
     printf("\n A idade da pessoa e o sexo do que possui o menor salario, foi : %d anos , do sexo :%c \n",idade_menorsalario,sexo_menorsalario);

return 0;
}
