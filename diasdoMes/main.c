#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int mes;
int ano = 2022;
int g1 = 30;
int g2 = 31;
char *meses[12] = {
    "Janeiro",
    "Fevereiro",
    "Março",
    "Abril",
    "Maio",
    "Junho",
    "Julho",
    "Agosto",
    "setembro",
    "Outubro",
    "Novembro",
    "Dezembro"};
int main()
{
    setlocale(LC_ALL, "portuguese");
    printf("\nDigite um número de 1 a 12 referente ao mês do ano: ");
    scanf("%d", &mes);
    if (mes < 1 || mes > 12)
    {
        printf("Mês inválido tente novamente\n \n");
        main();
    }
    else
    {
        switch (mes)
        {
        case 1:
            printf("O mês de %s possui %d dias", meses[mes - 1], g2);
            break;

        case 2:
            if ((ano % 400) == 0)
            {
                printf("O mês %s possui 29 dias", meses[mes - 1]);
            }
            else
            {
                printf("O mês %s possui 28 dias", meses[mes - 1]);
            }

            break;

        case 3:
            printf("O mês de %s possui %d dias", meses[mes - 1], g2);
            break;

        case 4:

            printf("O mês de %s possui %d dias", meses[mes - 1], g1);
            break;

        case 5:
            printf("O mês de %s possui %d dias", meses[mes - 1], g2);
            break;

        case 6:
            printf("O mês de %s possui %d dias", meses[mes - 1], g1);
            break;

        case 7:
            printf("O mês de %s possui %d dias", meses[mes - 1], g2);
            break;

        case 8:
            printf("O mês de %s possui %d dias", meses[mes - 1], g2);
            break;

        case 9:
            printf("O mês de %s possui %d dias", meses[mes - 1], g1);
            break;

        case 10:
            printf("O mês de %s possui %d dias", meses[mes - 1], g2);
            break;

        case 11:
            printf("O mês de %s possui %d dias", meses[mes - 1], g1);
            break;

        case 12:
            printf("O mês de %s possui %d dias", meses[mes - 1], g2);
            break;

        default:
            break;
        }
        main();
    }
    return 0;
}