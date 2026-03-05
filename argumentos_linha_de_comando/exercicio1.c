/*
1. Escreva um programa que receba dois inteiros na linha de comando
e imprima seu produto.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Verifica se recebeu os argumentos corretos
    if(argc != 3) {
        printf("Erro! Use: %s numero1 numero2\n", argv[0]);
        return 1;
    }
    
    // Converte os argumentos para inteiros
    int num1 = strtol(argv[1], NULL, 10);
    int num2 = strtol(argv[2], NULL, 10);
    
    // Calcula e mostra o produto
    int produto = num1 * num2;
    printf("%d x %d = %d\n", num1, num2, produto);

    return 0;
}