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
        printf("pergunta 1\n\n");
        printf("Onde serao realizados os Jogos Olimpicos de Verao de 2024?\n\n");
        printf("[1] Paris, Franca\n");
        printf("[2] Rio de Janeiro, Brasil\n");
        printf("[3] Toquio, Japao\n");
        printf("[4] Los Angeles, EUA\n");
        if (ler_numero(&modalidade1) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
}
case 2:	
if (modalidade1 ){
        printf("pergunta 2\n\n");
        printf("Qual e o nome oficial do evento esportivo que incluira os Jogos Olimpicos de 2024?\n\n");
        printf("[1] Jogos Olimpicos de Verao 2024\n");
        printf("[2] Jogos Olimpicos Paris 2024\n");
        printf("[3] Paris 2024: Celebracao Esportiva\n");
        printf("[4] Olimpiadas de Paris\n");
        if (ler_numero(&modalidade2) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }              
}
case 3:	
if (modalidade4 ){
        printf("pergunta 3\n\n");
        printf("Em que ano Paris havia sediado os Jogos Olimpicos de Verao anteriormente?\n\n");
        printf("[1] 1968\n");
        printf("[2] 1976\n");
        printf("[3] 1988\n");
        printf("[4] 2000\n");
        if (ler_numero(&modalidade3) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
}
case 4:	
if (modalidade3){
        printf("pergunta 4\n\n");
        printf("Qual e o lema oficial dos Jogos Olimpicos de Paris 2024?\n\n");
        printf("[1] Unidos Pelo Esporte\n");
        printf("[2] Mais Rapido, Mais Alto, Mais Forte\n");
        printf("[3] Amizade, Respeito, Excelencia\n");
		printf("[4] Legado Olimpico\n");
        if (ler_numero(&modalidade4) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
}
case 5:	
if (modalidade10){
		printf("pergunta 5\n\n");
        printf("Quantos esportes diferentes estao programados para serem disputados nos Jogos Olimpicos de 2024?\n\n");
        printf("[1]  28\n");
        printf("[2]  32\n");
        printf("[3]  36\n");
        printf("[4]  40\n");
        if (ler_numero(&modalidade5) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        } 
}
case 6:	
if (modalidade5){
        printf("pergunta 6\n\n");
        printf("Alem de Paris, em que outra cidade francesa alguns eventos olimpicos serao realizados?\n\n");
        printf("[1] LYON\n");           
        printf("[2] Bordeaux\n");       
        printf("[3] Marselha\n");        
        printf("[4] Cannes\n");
        if (ler_numero(&modalidade6) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
     }            
case 7:	
if (modalidade6){
        printf("pergunta 7\n\n");
        printf("Quem sera o país anfitriao dos Jogos Olimpicos de Inverno de 2024?\n\n");
        printf("[1] Suiça\n");           
        printf("[2] Italia\n");       
        printf("[3] Franca\n");        
        printf("[4] Austria\n");
        if (ler_numero(&modalidade7) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
  }           
case 8:	
if (modalidade7){
        printf("pergunta 8\n\n");
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
        printf("pergunta 9\n\n");
        printf("Qual e o local iconico que sera usado como plano de fundo para as competicoes de triatlo nos Jogos de Paris 2024?\n\n");
        printf("[1] A Torre Eiffel\n");           
        printf("[2] O Museu do Louvre\n");       
        printf("[3] O Rio Sena\n");        
        printf("[4] O Palacio de Versalhes\n");
        if (ler_numero(&modalidade9) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
    } 			
case 10:	
if (modalidade9){
        printf("pergunta 10\n");
        printf("Qual esporte fara sua estreia olimpica nos Jogos de Paris 2024?\n\n");
        printf("[1] Escalada esportiva\n");           
        printf("[2] Skate\n");       
        printf("[3] Softbol\n");        
        printf("[4] Futebol de areia\n");        
        printf("[4] A ultima Ceia de Michelangelo\n");
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