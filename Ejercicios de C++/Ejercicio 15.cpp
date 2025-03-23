#include <iostream>

int main() 
{
    struct Infraccion
    {
        int tipo; 
        int multa;
        char gravedad;
    };
    struct Infraccion infracciones[5];
    for (int i = 0; i < 5; i++)
    {
        struct Infraccion x;
        printf("\nIngrese el tipo: ");
        scanf("%d", &x.tipo );
        printf("\nIngrese el valor de la multa: ");
        scanf("%d", &x.multa );
        printf("\nIngrese la gravedad de la infracción: ");
        scanf("%s", &x.gravedad );
        infracciones[i] = x;
    }
    int total1 = 0, total2 = 0, total3 = 0, IG = 0;
    for (int i = 0; i < 5; i++)
    {
        if(infracciones[i].gravedad == 'G')
        {
            total1 += infracciones[i].multa;
            if (infracciones[i].tipo == 3 || infracciones[i].tipo == 4)
            {
                IG++;
            }
        }
        if(infracciones[i].gravedad == 'L')
        {
            total2 += infracciones[i].multa;
        }
        if(infracciones[i].gravedad == 'M')
        {
            total3 += infracciones[i].multa;
        }
    }
    printf("\nMulta de infracciones con gravedad tipo G: $%d", total1);
    printf("\nMulta de infracciones con gravedad tipo L: $%d", total2);
    printf("\nMulta de infracciones con gravedad tipo M: $%d", total3);
    if(IG > 3)
    {
        printf("Clausurar Fábrica.");
    }
}