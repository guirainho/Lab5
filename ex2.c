Escreva uma função que recebe um vetor de TAM 5 e inverte seus valores. Para o vetor abaixo:
V = [ 4, 9, 10, 8, 6] 
o vetor V invertido é igual a [6, 8, 10, 9, 4]

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#include <stdio.h>

void inverterVetor(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho / 2; i++) {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

int main() {
    int V[5];
    int tamanho = sizeof(V) / sizeof(V[0]);

    printf("Digite os elementos do vetor (TAM 5):\n");
    for (int i = 0; i < tamanho; i++) {
        printf("V[%d]: ", i);
        scanf("%d", &V[i]);
    }

    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", V[i]);
    }

    inverterVetor(V, tamanho);

    printf("\nO vetor V invertido é igual a: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", V[i]);
    }

    return 0;
}
