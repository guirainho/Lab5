Escreva uma função com a assinatura "int busca_primeiro(int v[], int n, int e)"	que retorna o índice da primeira ocorrência do elemento e no vetor v com n inteiros. Caso o elemento não seja encontrado, a função deve retornar o valor -1.
    
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#include <stdio.h>

int busca_primeiro(int v[], int n, int e) {
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento = 3;

    int indice = busca_primeiro(vetor, tamanho, elemento);

    if (indice != -1) {
        printf("O elemento %d foi encontrado na posição %d.\n", elemento, indice);
    } else {
        printf("O elemento %d não foi encontrado no vetor.\n", elemento);
    }

    return 0;
}
