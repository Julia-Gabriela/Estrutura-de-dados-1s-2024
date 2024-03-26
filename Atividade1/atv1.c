#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        printf("ERRO!!!\n Nenhum numero informado.");
        return 1;
    }

    int numQuant = argc - 1;
    int soma = 0;
    int menorNum = atoi(argv[1]);
    int maiorNum = atoi(argv[1]);
    int *numeros = (int *)malloc(numQuant * sizeof(int));

    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        soma += num;
        numeros[i - 1] = num;
        if (num < menorNum)
            menorNum = num;
        if (num > maiorNum)
            maiorNum = num;
    }

    double media = (double)soma / numQuant;

    qsort(numeros, numQuant, sizeof(int), compare);

    printf("Quantidade de numeros recebidos: %d\n", numQuant);
    printf("Media dos numeros: %.1f\n", media);
    printf("Menor numero: %d\n", menorNum);
    printf("Maior numero: %d\n", maiorNum);
    printf("Numeros em ordem crescente:");
    for (int i = 0; i < numQuant; i++) {
        printf(" %d", numeros[i]);              
    }
    printf("\n");

    
    return 0;
}