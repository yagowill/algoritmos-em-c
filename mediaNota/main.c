#include <stdio.h>
#include <stdlib.h>
float n1, n2, n3, media;
int main()
{
    printf("\nDigite a primeira nota: ");
    scanf("%f", &n1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &n2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;
    media >= 7 ? printf("\nAprovado") : printf("\nReprovado");
    printf("\nSua media foi %.2f\n", media);

    return 0;
}