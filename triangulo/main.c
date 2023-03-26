#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int A, B, C;
int main()
{
    setlocale(LC_ALL, "portuguese");
    printf("Digite três valores para A, B e C: ");
    scanf("%d, %d, %d", &A, &B, &C);
    if (A > B + C || B > A + C || C > A + B)
    {
        printf("Não é um triângulo");
    }
    else if (A == B && B == C && C == A)
    {
        printf("Triâmgulo equilátero");
    }
    else if (A == B || B == C || C == A)
    {
        printf("Triâmgulo isósceles");
    }
    else if (A != B && B != C)
    {
        printf("Triâmgulo escaleno");
    }
    return 0;
}