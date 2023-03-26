#include <stdio.h>
#include <stdlib.h>
int num;
int main()
{
    printf("\nDigite um numero: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("\nEste numero e par\n \n");
    }
    else
    {
        printf("\nEste numero e impar\n \n");
    }
    return 0;
}