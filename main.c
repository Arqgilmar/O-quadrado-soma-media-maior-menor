#include <stdio.h>

int main(void) {

  int i;
  float vet[10];
  float soma = 0;
  float media = 0;
  float nmaior = 0;
  float nmenor = 0;
  float quadrado[10];
  soma = 0;
  
  
  for(i = 0; i < 10; i++){
  printf("Digite um número:\n");
  scanf("%f", &vet[i]);

    if(i == 0){
      nmaior = vet[i];
      nmenor = vet[i];
    }
    if(vet[i] > nmaior){
      nmaior = vet[i];
    } 
    if(vet[i] < nmenor){
      nmenor = vet[i];
    }

    soma = vet[i] + soma;

    quadrado[i] = vet[i] * vet[i];
  }

  media = soma / 10;

  printf("=============================================\n");
  printf("==                 RELATÓRIO               ==\n");
  printf("=============================================\n");
  printf("Os números digitados e seus quadrados são\n");
    for(i = 0; i < 10; i++){
      printf("%.0f - %.0f\n", vet[i], quadrado[i]);
    }
  printf("=============================================\n");
  printf("A soma é: %.0f \n", soma);
  printf("A média é: %.2f \n", media);
  printf("O número maior é: %.0f \n", nmaior);
  printf("O número menor é: %.0f \n", nmenor);
  
  return 0;
}
