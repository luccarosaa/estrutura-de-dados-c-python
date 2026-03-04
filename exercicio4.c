/*
4. Crie uma estrutura representando os alunos de um determinado curso. 
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
(a) Permita ao usuário entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior média geral.
(d) Encontre o aluno com menor média geral
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.
*/
#include <locale.h>
#include <stdio.h>
#include <string.h>

typedef struct {
        int matricula; 
        char nome[51];
        float n1;
        float n2;
        float n3;
    } Aluno;

int main () {
    setlocale(LC_CTYPE,".UTF8");
    
    Aluno aluno[5];
    Aluno *ptr = aluno;

    // (a) Permita ao usuário entrar com os dados de 5 alunos
    printf("--- CADASTRO DE NOTAS POR ALUNO ---\n");

    for (int i = 0; i < 5; i++) {
        
        printf("\n==== ALUNO %d ====\n", i + 1);

        printf("\nMatricula: ");
        scanf("%d", &ptr->matricula);

        printf("Nome: ");
        scanf(" %50[^\n]", ptr->nome);
        
        printf("Nota primeira prova: ");
        scanf(" %f", &ptr->n1);
        
        printf("Nota segunda prova: ");
        scanf(" %f", &ptr->n2);
        
        printf("Nota terceira prova: ");
        scanf(" %f", &ptr->n3);

        printf("\n=====================\n");

        ptr++;
    }

    ptr = aluno;
    
    // (b) Aluno com maior nota da primeira prova
    int indice_maior_n1 = 0;
    float maior_n1 = ptr->n1;
    
    for (int i = 1; i < 5; i++) {
        if ((ptr + i)->n1 > maior_n1) {
            maior_n1 = (ptr + i)->n1;
            indice_maior_n1 = i;
        }
    }
    
    printf("\n--- ALUNO COM MAIOR NOTA NA PRIMEIRA PROVA ---\n");
    printf("Nome: %s\n", (ptr + indice_maior_n1)->nome);
    printf("Matrícula: %d\n", (ptr + indice_maior_n1)->matricula);
    printf("Nota N1: %.2f\n", (ptr + indice_maior_n1)->n1);
    
    // (c) e (d) Aluno com maior e menor média geral
    int indice_maior_media = 0;
    int indice_menor_media = 0;
    float maior_media = (ptr->n1 + ptr->n2 + ptr->n3) / 3;
    float menor_media = (ptr->n1 + ptr->n2 + ptr->n3) / 3;
    
    for (int i = 1; i < 5; i++) {
        float media = ((ptr + i)->n1 + (ptr + i)->n2 + (ptr + i)->n3) / 3;
        
        if (media > maior_media) {
            maior_media = media;
            indice_maior_media = i;
        }
        
        if (media < menor_media) {
            menor_media = media;
            indice_menor_media = i;
        }
    }
    
    printf("\n--- ALUNO COM MAIOR MEDIA GERAL ---\n");
    printf("Nome: %s\n", (ptr + indice_maior_media)->nome);
    printf("Matrícula: %d\n", (ptr + indice_maior_media)->matricula);
    printf("Média: %.2f\n", maior_media);
    
    printf("\n--- ALUNO COM MENOR MEDIA GERAL ---\n");
    printf("Nome: %s\n", (ptr + indice_menor_media)->nome);
    printf("Matrícula: %d\n", (ptr + indice_menor_media)->matricula);
    printf("Média: %.2f\n", menor_media);
    
    // (e) Verificar aprovação de cada aluno
    printf("\n--- SITUACAO DOS ALUNOS ---\n");
    for (int i = 0; i < 5; i++) {
        float media = ((ptr + i)->n1 + (ptr + i)->n2 + (ptr + i)->n3) / 3;
        
        printf("\nAluno: %s\n", (ptr + i)->nome);
        printf("Matricula: %d\n", (ptr + i)->matricula);
        printf("Media: %.2f - ", media);
        
        if (media >= 6.0) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    }

    return 0;
}