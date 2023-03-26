#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n1, n2;
char operacao;
int main()
{
    setlocale(LC_ALL, "portuguese");
    printf("\n\nDigite os n�meros que deseja realizar a opera��o: ");
    scanf("%f, %f", &n1, &n2);
    printf("\nDigite qual opera��o deseja realizar: ");
    operacao = getchar();

    
        switch (operacao)
        {
        case '+':
            printf("O resultado de %.2f + %.2f = ", n1, n2, (n1 + n2));
            break;

        case '-':
            printf("O resultado de %.2f - %.2f = ", n1, n2, (n1 - n2));
            break;

        case '*':
            printf("O resultado de %.2f * %.2f = ", n1, n2, (n1 * n2));
            break;

        case '/':
            printf("O resultado de %.2f / %.2f = ", n1, n2, (n1 / n2));
            break;

        default:
            printf("Opera��o inv�lida!");
            break;
        }
    return 0;
}