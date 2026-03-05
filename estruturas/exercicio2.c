/*
2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura. 
Não divida o endereço em componentes.
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[51];
    int idade;
    char endereco[51];
} Pessoa;

int main () {
    setlocale(LC_CTYPE,".UTF8");

    Pessoa pessoa[1];
    Pessoa *ptr = &pessoa[0];

    printf("--- CADASTRO ---\n");
    
    printf("Nome: ");
    scanf(" %50[^\n]", ptr->nome);

    printf("Idade: ");
    scanf("%d", &ptr->idade);
    
    printf("Endereco: ");
    scanf(" %50[^\n]", ptr->endereco);

     // Exibindo dados cadastrados
    printf("\n--- CADASTRO REALIZADO ---\n");
    printf("Nome: %s\n", ptr->nome);
    printf("Idade: %d\n", ptr->idade);
    printf("Endereco: %s\n", ptr->endereco);
    
    return 0;
}
