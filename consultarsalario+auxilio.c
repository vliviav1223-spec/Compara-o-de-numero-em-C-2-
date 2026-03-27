#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double salario, reajuste, totalsalario, auxilio;
    int continuar;

    do
    {
        printf ("----------------------------------\n");
        printf("CONSULTE O AUMENTO DO SEU SALARIO\n");
        printf ("----------------------------------\n");

        printf("Digite seu salario;\n");
        scanf("%lf", &salario);

        if (salario <500)
        {
            reajuste = salario * 0.05;
        }
        else if (salario <= 1200.00)
        {
            reajuste = salario * 0.12;
        }
        else{
            reajuste = 0;
            printf("Seu salario eh muito acima, nao recebe bonificação\n");
        }
        //auxilio
        if (salario <=600)
        {
            auxilio = 150;
        }
        else{
            auxilio = 100;
        }
        
        totalsalario = salario + reajuste + auxilio;

        printf("Seu salario atual eh:%.2lf reais\n", salario);
        printf("Sua bonificacao: %.2lf reais\n", reajuste);
        printf("Valor auxilio escola: %.2lf reais\n", auxilio);
        printf("Total: %.2lf reais", totalsalario);

        printf("Digite 01 para continuar:\n");
        scanf("%d", &continuar);
        
    } while (continuar == 1);
}      