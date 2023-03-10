#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float vnota1=0.0, vnota2=0.0, vnota3=0.0, vnota4=0.0, vaulas=0.0, vfrequencia=0.0, vmedia=0.0;
    printf("Este programa serve para verificar a nota de um aluno em que se a frequência for igual ou maior a 75 porcento, ele é aprovado, mas se a frequência for abaixo disso, é calculado a média desse aluno para saber se ele foi aprovado, se ficou de recuperação ou se reprovou. \n\n\n");
    printf("\n\n entre com a primeira nota: \n");
    scanf("%f", &vnota1);
    printf("\n\n entre com a segunda nota: \n");
    scanf("%f", &vnota2);
    printf("\n\n entre com a terceira nota: \n");
    scanf("%f", &vnota3);
    printf("\n\n entre com a quarta nota: \n");
    scanf("%f", &vnota4);
    printf("\n\n entre com a quantidade de aulas dadas: \n");
    scanf("%f", &vaulas);
    printf("\n\n entre com a frequência do aluno: \n");
    scanf("%f", &vfrequencia);
    if (vfrequencia<((vaulas*75)/100)) {
        printf("\n\n situação: aluno reprovado por faltas \n\n");
    }
    else {
        vmedia=(vnota1+vnota2+vnota3+vnota4)/4;
        if (vmedia>=7) {
            printf("\n\n situação: aluno aprovado \n\n");
        }
        else {
                if (vmedia>=5) {
                printf("\n\n situação: aluno em recuperação \n\n");
                }
                else {
                    printf("\n\n situação: aluno reprovado por nota \n\n");
                }
        }
    }
    return 0;
}

