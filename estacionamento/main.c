#include <stdio.h>
int calculaHora(a, b) {
  int c = b - a;
  return c;
}
float valorTot;
int horaEntrada, horaSaida, horaTot;
int main(void) {
  printf("Digite a hora de entrada: ");
  scanf("%d", &horaEntrada);
  printf("Digite a hora de saida: ");
  scanf("%d", &horaSaida);
  if (horaEntrada < 8 || horaSaida > 18) {
    printf("Fora do horario de funcionamento\n \n");
    main();
  } else {
    horaTot = calculaHora(horaEntrada, horaSaida);
    if (horaTot >= 1 && horaTot < 2) {
      valorTot = 8;
    }  else if (horaTot >=2 && horaTot < 3 ) {
      valorTot = 15;
    } else if (horaTot >= 3){
      valorTot = 15 + ((horaTot - 2) * 5);
    }
    printf("Valor a pagar: R$ %.2f", valorTot);
  }
  return 0;
}