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
    if (end == entrada || *end != '\n' || valor < 1 || valor > 4) {
        return -1;  // Retornar erro se a entrada não for um número ou estiver fora do intervalo
    }
    *num = valor;
    return 0;
}
int main() {
	int resposta = 1;
    int opcao, modalidade;
    int num;
    int escolha_anterior= 0;
    int modalidade1, modalidade2, modalidade3, modalidade4, modalidade5;
    int modalidade6, modalidade7, modalidade8, modalidade9, modalidade10;   
do{
        // Interface principal
        printf("Seja bem-vindo ao questionario\n\n");
        printf("Aperte [1] para continuar\n\n");
        if (ler_numero(&modalidade) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
        printf("\n");
  switch (modalidade){              
case 1:
if (modalidade2){
        printf("pergunta 1\n");
        printf("Quando e onde Alberto Santos-Dumont nasceu?\n ");
        printf("[1] 20 de julho de 1873, Paris, Franca\n");
        printf("[2] 15 de agosto de 1888, Rio de Janeiro, Brasil\n");
        printf("[3] 30 de junho de 1869, Lisboa, Portugal\n");
        printf("[4] 25 de dezembro de 1903, Kitty Hawk, EUA\n");
        if (ler_numero(&modalidade1) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
}
case 2:	
if (modalidade1 ){
        printf("pergunta 2\n");
        printf("Qual foi a primeira aeronave bem-sucedida de Santos-Dumont?\n ");
        printf("[1] 14-bis\n");
        printf("[2] Spirit of St. Louis\n");
        printf("[3] Wright Flyer\n");
        printf("[4] Bleriot XI\n");
        if (ler_numero(&modalidade2) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }              
}
case 3:	
if (modalidade4 ){
        printf("pergunta 3\n");
        printf("Em que ano Santos-Dumont voou o 14-bis no primeiro voo homologado do mundo?\n: ");
        printf("[1] 1903\n");
        printf("[2] 1906\n");
        printf("[3] 1907\n");
        printf("[4] 1910\n");
        if (ler_numero(&modalidade3) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
}
case 4:	
if (modalidade3){
        printf("pergunta 4\n");
        printf("Qual foi o premio que Santos-Dumont ganhou ao completar o primeiro voo publico bem-sucedido em Paris?\n: ");
        printf("[1] Premio Pulitzer\n");
        printf("[2] Premio Nobel da Fisica\n");
        printf("[3] Premio Deutsch de la Meurthe\n");
        printf("[4] Premio da Academia de Ciencias da Franca\n");
        if (ler_numero(&modalidade4) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
}
case 5:	
if (modalidade10){
		printf("pergunta 5\n");
        printf("Qual foi o apelido dado a Santos-Dumont pelos franceses apos seu sucesso na aviacao?\n: ");
        printf("[1]  O Magico dos Ceus\n");
        printf("[2]  O Pai da Aviacao\n");
        printf("[3]  O Poeta dos Ares\n");
        printf("[4]  O Rei das Alturas\n");
        if (ler_numero(&modalidade5) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        } 
}
case 6:	
if (modalidade5){
        printf("pergunta 6\n");
        printf("Qual aeronave foi a primeira a decolar, voar por uma distancia determinada e pousar sem ajuda externa, de acordo com os padroes da Federacao Aeronautica Internacional?\n\n");
        printf("[1] 14-bis\n");           
        printf("[2] Wright Flyer\n");       
        printf("[3] Bleriot XI\n");        
        printf("[4] Spirit of St. Louis\n");
        if (ler_numero(&modalidade6) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
     }            
case 7:	
if (modalidade6){
        printf("pergunta 7\n");
        printf("O que levou Santos-Dumont a abandonar a aviacao?\n\n");
        printf("[1] O medo de que suas invencoes fossem usadas para fins de guerra\n");           
        printf("[2] Problemas de saude\n");       
        printf("[3] Falta de recursos financeiros\n");        
        printf("[4] Conflitos com outros pioneiros da aviacao\n");
        if (ler_numero(&modalidade7) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
  }           
case 8:	
if (modalidade7){
        printf("pergunta 8\n");
        printf("O que Santos-Dumont afirmou ser mais importante do que a invencao do aviao?\n\n");
        printf("[1] O desenvolvimento do dirigivel\n");           
        printf("[2] A conquista do espaco\n");       
        printf("[3]  A paz mundial\n");        
        printf("[4] O desenvolvimento do helicoptero\n");
        if (ler_numero(&modalidade8) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
   } 
case 9:	
if (modalidade8){
        printf("pergunta 9\n");
        printf("Qual cidade brasileira abriga o Museu Casa de Santos Dumont, onde muitos de seus objetos pessoais e experimentos estao em exposicao?\n\n");
        printf("[1] Belo Horizonte\n");           
        printf("[2] Sao Paulo\n");       
        printf("[3] Petropolis\n");        
        printf("[4] Brasilia\n");
        if (ler_numero(&modalidade9) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
    } 			
case 10:	
if (modalidade9){
        printf("pergunta 10\n");
        printf("Como Santos-Dumont e lembrado atualmente no Brasil e em outros lugares do mundo?\n\n");
        printf("[1] Como um pioneiro da aviacao internacionalmente reconhecido\n");           
        printf("[2] Como um politico de destaque\n");       
        printf("[3] Como um autor renomado\n");        
        printf("[4] Como um renomado cientista de foguetes\n");
        scanf("%d", &modalidade10);    
	} 						           
 }
                 {
                printf("muito obrigado\n");
                if (modalidade)
                printf("\nsua resposta pergunta 1\n""%d", modalidade1);
                printf("\nsua resposta pergunta 2\n""%d", modalidade2);
                printf("\nsua resposta pergunta 3\n""%d", modalidade3);
                printf("\nsua resposta pergunta 4\n""%d", modalidade4);
                printf("\nsua resposta pergunta 5\n""%d", modalidade5);
                printf("\nsua resposta pergunta 6\n""%d", modalidade6);
                printf("\nsua resposta pergunta 7\n""%d", modalidade7);
                printf("\nsua resposta pergunta 8\n""%d", modalidade8);
                printf("\nsua resposta pergunta 9\n""%d", modalidade9);
                printf("\nsua resposta pergunta 10\n""%d", modalidade10);
                 printf ("\n");
                }
                {
                        {                            
                            printf("Avaliacao do Museu\n\n");
                            printf("[1]Muito boa \n");
                            printf("[2]Boa \n");
                            printf("[3]Media \n");
                            printf("[4]Baixa \n");
                            printf("[5]Sair\n\n");
                            printf("Escolha uma das opcoes: ");
                            scanf("%d", &opcao);
                            printf("\n");
                            switch(opcao){
                            case 5:
                            printf("Muito obrigado, tenha um bom dia.\n");
                            return 0;
                            default:
                            printf("Opcao invalida, Tente novamente.\n\n");
                            break;
                            case 1:
                             if (opcao == 1){
                            printf("[%d]""---sua avaliacao sobre a obra e muito boa!!!  ", opcao);
                            printf ("\n");
                            printf("Muito obrigado, tenha um bom dia.");}
                            case 2:
                             if (opcao == 2){
                            printf("[%d]""---sua avaliacao sobre a obra e boa!  ", opcao);
                            printf ("\n");
                            printf("Muito obrigado, tenha um bom dia.");}
                            case 3:
                             if (opcao == 3){
                            printf("[%d]""---sua avaliacao sobre a obra e media.  ", opcao);
                            printf ("\n");
                            printf("Muito obrigado, tenha um bom dia.");}
                            case 4:
                             if (opcao == 4){
                            printf("[%d]""---sua avaliacao sobre a obra foi ruim. ", opcao);
                            printf ("\n");
                            printf("Muito obrigado, tenha um bom dia.");}

                               // Arquivo CSV avaliação
                               FILE *fptr; // Declaração do ponteiro de arquivo

                               // Abre o arquivo CSV para escrita
                               fptr = fopen("avaliacao.csv", "a");
                               if (fptr == NULL) {
                               printf("Erro ao abrir o arquivo CSV.\n");
                               return 1;
                               }
                               // Escreve os resultados no arquivo CSV
                               fprintf(fptr, "resposta avaliacao:  %d\n", opcao);
                               fclose(fptr); // Fecha o arquivo
}                                 
}
                }
      if (num != 4 && num != 5) {              
                escolha_anterior = num; // Atualize a escolha anterior
                printf("\n\n");
                printf("1 = Confirmar \n\n--> ");
                scanf("%d", &resposta);
                printf("\n");         
            }           
        } while (modalidade != 0); 
    return 0;
}