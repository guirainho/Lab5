#include <stdio.h>
#include <stdbool.h>

bool contem(int v[], int n, int e) {
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            return true;
        }
    }
    return false; 
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("V[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    int elemento;
    printf("Digite o elemento a ser procurado: ");
    scanf("%d", &elemento);

    if (contem(vetor, tamanho, elemento)) {
        printf("O elemento %d está no vetor.\n", elemento);
    } else {
        printf("O elemento %d não está no vetor.\n", elemento);
    }

    return 0;
}
