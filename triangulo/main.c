#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int A, B, C;
int main()
{
    setlocale(LC_ALL, "portuguese");
    printf("Digite tr�s valores para A, B e C: ");
    scanf("%d, %d, %d", &A, &B, &C);
    if (A > B + C || B > A + C || C > A + B)
    {
        printf("N�o � um tri�ngulo");
    }
    else if (A == B && B == C && C == A)
    {
        printf("Tri�mgulo equil�tero");
    }
    else if (A == B || B == C || C == A)
    {
        printf("Tri�mgulo is�sceles");
    }
    else if (A != B && B != C)
    {
        printf("Tri�mgulo escaleno");
    }
    return 0;
}