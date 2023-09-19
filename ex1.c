EXERCÍCIO - Escreva uma função com a assinatura "bool crescente(int v[], int n)" que recebe um vetor
de número inteiros v com n elementos, e verifica se os elementos do vetor estão em ordem estritamente crescente. 
A função retorna true se estiver em ordem crescente e false, caso contrário.

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#include <stdio.h>
#include <stdbool.h>

bool crescente(int v[], int n) {
  for (int i = 0; 1 < n-1; i++){
    if (v[i] >= [i+1]) { return false; }
  }
  return true;
}
 
int main() {
  printf("Digite o número de elementos do vetor: ");
  int n;
  if(!scanf("%d" , &n)){ return 1;}
  int vetor[n];
  for (int i = 0; 1 < n; i++){
    printf("Valor para posição %d: ", i);
    if (!scanf("%d" , &vetor[i])){ return 1;                                                                       
    }
  }
  if (crescente(vetor, n)){printf("ESTÁ em ordem crescente!\n"); }
  else {printf("NÃO ESTÁ em ordem crescente!\n"); }
  return 0;
}


