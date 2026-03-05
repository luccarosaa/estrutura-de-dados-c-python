/*
Escreva uma função que procure numa strinf a primeira ocorrência
de qualquer caractere que não faz árte do código ASCII, ou seja, é
maior que 127. A função deve retornar um ponteiro para caractere,
que aponta para a ocorrência ou um ponteiro nulo, caso não haja 
caracteres fora do sófigo ASCII na string.
*/

#include <stdio.h>

char* encontrar_caractere_invalido(const char* str) {
    while(*str) {
        if(*str > 127) {
            return (char*)str;
        }
        str++;
    }
    return NULL;
}

int main() {
    const char* texto = "Texto com caractere inválido: \x80";
    char* resultado = encontrar_caractere_invalido(texto);
    if(resultado) {
        printf("Caractere inválido encontrado: %c\n", *resultado);
    } else {
        printf("Nenhum caractere inválido encontrado.\n");
    }
    return 0;
}