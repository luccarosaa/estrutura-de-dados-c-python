/*
3. Escreva um programa que receba um argumento na linha de
comando e o imprima invertido.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // Verifica se recebeu o argumento correto
    if(argc != 2) {
        printf("Erro! Use: %s texto\n", argv[0]);
        return 1;
    }

    // Inverte e imprime o texto
    char *texto = argv[1];
    int len = strlen(texto);
    for(int i = len - 1; i >= 0; i--) {
        putchar(texto[i]);
    }
    putchar('\n');

    return 0;
}
