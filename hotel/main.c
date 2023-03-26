#include <stdio.h>
float diaria = 95;
int dias;
float serv;
int servv;
float valorTotal;
void main()
{
    printf("\nInforme o numero de dias de permanencia: ");
    scanf("%d", &dias);
    if (dias < 10)
    {
        serv = diaria + diaria * 100 / 15;
        servv = 15;
    }
    else if (dias == 10)
    {
        serv = diaria + diaria * 100 / 10;
        servv = 10;
    }
    else
    {
        serv = diaria + diaria * 100 / 5;
        servv = 5;
    }
    valorTotal = (dias * diaria) + serv;
    printf("\nNumero de dias: %d\nValor da diaria: R$ %.2f\ntaxa de servico: %d%%\nValor total: R$ %.2f", dias, diaria, servv, valorTotal);

    return 0;
}