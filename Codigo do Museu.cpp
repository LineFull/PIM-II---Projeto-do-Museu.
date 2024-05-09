#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int ler_numero(int *num) {
    char entrada[100];
    fgets(entrada, 100, stdin);  // Ler a entrada como string

    // Verificar se a entrada pode ser convertida em um número
    char *end;
    long valor = strtol(entrada, &end, 10);
    if (end == entrada || *end != '\n' || valor < 1 || valor > 5) {
        return -1;  // Retornar erro se a entrada não for um número
    }

    *num = valor;
    return 0;
}

int main() {
    int resposta;
    int opcao, modalidade, forma_pagamento;
    float valor_ticket = 16.00, total, meia_entrada = 8.00, isento = 0.00;
    int num;
    int escolha_anterior = 0;

    do {
        // Interface principal
        printf("\n");
        printf("Seja bem-vindo ao museu multitematico\n\n");
        printf("Obras em exposicao\n\n");
        printf("Por favor, informe qual ticket voce ira comprar\n\n");
        printf("[1] 100 anos da arte moderna\n");
        printf("[2] 150 anos Santos Dumont\n");
        printf("[3] Jogos olimpicos de Paris 2024\n");
        printf("[4] Evolucao da computacao\n");
        printf("[5] Sair\n\n");
        printf("Escolha uma das opcoes: ");
        if (ler_numero(&opcao) != 0) {
            printf("Entrada invalida. Por favor, digite um numero.\n");
            continue;
        }

        switch (opcao) {
            case 5:
                // Sair do programa
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opcao invalida. Tente novamente.\n\n");
                break;
            case 1:
            case 2:
            case 3:
            case 4:
                printf("\nEscolha a modalidade de ticket: ");
                printf("\n\n[1] Inteiro\n[2] Meia Entrada\n[3] Isento\n: ");
                if (ler_numero(&modalidade) != 0) {
                    printf("Entrada invalida. Por favor, digite um numero.\n");
                    continue;
                }

                if (modalidade == 1) {
                    total = valor_ticket;
                    printf("\nValor total: R$ %.2f\n\n", total);
                } else if (modalidade == 2) {
                    total = meia_entrada;
                    printf("\nValor total: R$ %.2f\n\n", total);
                } else if (modalidade == 3) {
                    total = isento;
                    printf("\nValor total: R$ %.2f\n\n", total);
                    printf("Gerando Ticket aguarde...\n");
                }
                
                // Gera e imprime 1 número aleatório
                srand(time(NULL));
                int numero_aleatorio = rand();
                
                // Itens do ticket
                // Gera o nome do arquivo com a data atual
                time_t t = time(NULL);
                struct tm tm = *localtime(&t);
                char nome_arquivo[100];
                sprintf(nome_arquivo, "arqv_%04d-%02d-%02d.csv", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

                // Abre o arquivo CSV para escrita
                FILE *fptr = fopen(nome_arquivo, "a");
                if (fptr == NULL) {
                    printf("Erro ao abrir o arquivo CSV.\n");
                    return 1;
                }

                fprintf(fptr, "Seu ticket: %d\n", numero_aleatorio);
                printf("seu ticket: %d\n", numero_aleatorio);
                printf("\n");
                if (opcao >= 1 && opcao <= 4)
                    fprintf(fptr, "Tema escolhido: %d\n", opcao);

                fclose(fptr);  // Fecha o arquivo CSV
        }

        resposta = 1;  // Inicializa resposta para evitar loops infinitos

        // Menu de forma de pagamento
        do {
            printf("Escolha a forma de pagamento\n\n");
            printf("[1] Debito\n");
            printf("[2] Credito\n");
            printf("[3] Dinheiro\n");
            printf("[4] Voltar\n\n");
            printf("Digite a opcao desejada: ");
            if (ler_numero(&num) != 0) {
                printf("Entrada invalida. Por favor, digite um numero.\n");
                continue;
            }
            printf("\n");
            
            switch (num) {
                case 1:
                    printf("Voce escolheu Debito.\n\n");
                    break;
                case 2:
                    printf("Voce escolheu Credito.\n\n");
                    break;
                case 3:
                    printf("Voce escolheu Dinheiro.\n\n");
                    break;
                case 4:
                    printf("Continuando sem voltar ao menu anterior...\n\n");
                    resposta = 1;  // Continuar sem voltar
                    break;
                default:
                    printf("Opcao invalida. Tente novamente.\n\n");
                    break;
            }

            if (num != 4 && num != 5) {
                escolha_anterior = num;  // Atualiza a escolha anterior
                printf("Confirmar pagamento\n\n");
                printf("1 = Confirmar | 2 = Cancelar\n\n--> ");
                if (ler_numero(&resposta) != 0) {
                    printf("Entrada invalida. Por favor, digite um numero.\n");
                    continue;
                }
                printf("\n");
            }

        } while (resposta != 1);

    } while (opcao != 5);

    return 0;
}
