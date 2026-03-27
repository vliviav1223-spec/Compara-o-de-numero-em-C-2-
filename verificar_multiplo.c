#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double salario, reajuste, totalsalario;
    int continuar;

    do
   { 
        printf ("----------------------------------\n");
        printf("CONSULTE O AUMENTO DO SEU SALARIO\n");
        printf ("----------------------------------\n");

        printf("Digite seu salario;\n");
        scanf("%lf", &salario);

        if (salario < 500)
        {
            reajuste = salario * 0.05;
            totalsalario = salario + reajuste;
        }
        else if (salario <= 850.00)
        {
            reajuste = salario * 0.1;
            totalsalario = salario + reajuste;
        }
        else 
            {reajuste = salario * 0.15; 
            totalsalario = salario + reajuste;
            }

            printf("Voce teve um aumento de %.2lf reais\n", reajuste);
            printf ("E seu salario passa a ser %.2lf reais\n", totalsalario);
            printf("Deseja continuar? Pressione 1 pra continuar, ou 0 para encerrar:\n");
            scanf("%d", &continuar);

    } while (continuar == 1);
    
    return 0;
}    
