/*
3. Construa uma estrutura aluno com nome, número de matrícula e curso. 
Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[51];
    int matricula;
    char curso[51];
} Aluno;


int main () {
    setlocale(LC_CTYPE,".UTF8");

    Aluno aluno[5];
    Aluno *ptr = &aluno[0];

    printf("--- CADASTRO DE ALUNOS ---\n");

    for (int i = 0; i < 5; i++) {
        
        printf("\n=====================\n");

        printf("Nome: ");
        scanf(" %50[^\n]", ptr->nome);

        printf("Matricula: ");
        scanf("%d", &ptr->matricula);
        
        printf("Curso: ");
        scanf(" %50[^\n]", ptr->curso);

        printf("\n=====================\n");

        ptr++;
    }

    ptr = &aluno[0];

    printf("\n\n--- ALUNOS REGISTRADOS ---\n");
    for (int i = 0; i < 5; i++) {

        printf("\n==== ALUNO %d ====\n", i + 1);

        printf("\nNome: %s\n", ptr->nome);
        printf("Matricula: %d\n", ptr->matricula);
        printf("Curso: %s\n", ptr->curso);

        printf("\n=====================\n");

        ptr++;
    }

    return 0;
}
