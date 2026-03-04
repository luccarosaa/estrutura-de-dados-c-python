/*
1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
 Horário: composto de hora, minutos e segundos.
 Data: composto de dia, mês e ano, numéricos
 Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/

#include <locale.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data;
    Horario horario;
    char descricao[51];
} Compromisso;

int main() {
    setlocale(LC_CTYPE,".UTF8");

    // Declarando um vetor de compromissos (apenas 1 elemento)
    Compromisso agenda[1];
    
    // Criando um ponteiro para o primeiro elemento do vetor
    Compromisso *ptr = &agenda[0];  // ou apenas "ptr = agenda"
    
    // Preenchendo os dados usando o ponteiro
    printf("--- MARCAR COMPROMISSO ---\n");
    
    printf("Dia (dd): ");
    scanf("%d", &ptr->data.dia);
    
    printf("Mes (mm): ");
    scanf("%d", &ptr->data.mes);
    
    printf("Ano (aaaa): ");
    scanf("%d", &ptr->data.ano);
    
    printf("Hora: ");
    scanf("%d", &ptr->horario.hora);
    
    printf("Minutos: ");
    scanf("%d", &ptr->horario.minutos);
    
    printf("Segundos: ");
    scanf("%d", &ptr->horario.segundos);
    
    printf("Descrição: ");
    scanf(" %50[^\n]", ptr->descricao);
    
    // Exibindo o compromisso usando o ponteiro
    printf("\n--- COMPROMISSO MARCADO ---\n");
    printf("Data: %02d/%02d/%04d\n", ptr->data.dia, ptr->data.mes, ptr->data.ano);
    printf("Horario: %02d:%02d:%02d\n", ptr->horario.hora, ptr->horario.minutos, ptr->horario.segundos);
    printf("Descricao: %s\n", ptr->descricao);
    
    return 0;
}