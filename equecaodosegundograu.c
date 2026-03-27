#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

   float a, b, c, x, delta, x1, x2;
   int continuar;

    do
    {
        printf ("------------------------------\n");
        printf("EQUECACAO DO SEGUNDO GRAU\n");
        printf ("-------------------------------\n");

        printf("Digite o coeficiente a:\n");
        scanf("%f",&a);

        while (a == 0)
        {
            printf("Nao eh equacao do segundo grau. Digite novamente!\n");
            scanf("%f",&a);
        }

        printf("Agora digite o coeficiente b\n");
        scanf("%f",&b);

        printf("Digite o coeficiene c\n:");
        scanf("%f",&c);

        delta = pow(b,2) - 4*a*c;

        if (delta < 0)
        {
            printf("Nao existe raiz real\n");
        }
        else if (delta == 0)
        {
            x = (-b) / (2*a);
            printf("Resultado igual a: %f", x);
        }
        else
           { x1 = (-b + sqrt (delta))/(2*a);
            x2 = (-b - sqrt (delta))/(2*a);

            printf("Resultado de x1: %f\n", x1);
            printf("Resultado de x2: %f\n", x2);
            }
        printf("Deseja realizar mais uma conta? Pressione 01\n");
        scanf("%d", &continuar);

    } while (continuar == 1);

 return 0;
}      