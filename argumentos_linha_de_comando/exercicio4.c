/*
4. (OPCIONAL) Escreva um programa que receba três parâmetros na
linha de comando, que são os coeficientes a, b e c de uma equação
do segundo grau ax2 + bx + c = 0, e imprime as duas raízes da
equação. Podem ser iguais se a raiz for uma só. Não precisa prever
se não houver raízes, mas precisa testar esse caso e contar num
comentário do programa o que acontece.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    // Verifica se recebeu os argumentos corretos
    if(argc != 4) {
        printf("Erro! Use: %s a b c\n", argv[0]);
        return 1;
    }

    // Converte os argumentos para float
    float a = strtof(argv[1], NULL);
    float b = strtof(argv[2], NULL);
    float c = strtof(argv[3], NULL);

    // Calcula o discriminante
    float delta = b*b - 4*a*c;

    // Verifica se o discriminante é negativo
    if(delta < 0) {
        printf("Delta negativo.\n");
    } else {
        // Calcula as raízes
        float raiz1 = (-b + sqrt(delta)) / (2*a);
        float raiz2 = (-b - sqrt(delta)) / (2*a);
        printf("x1 = %.2f e x2 = %.2f\n", raiz1, raiz2);
    }

    return 0;
}