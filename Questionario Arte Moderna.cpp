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
        printf("Quem sao alguns dos artistas mais influentes da era da arte moderna e quais sao suas contribuicoes mais notaveis?\n\n");
        printf("[1] Leonardo da Vinci e sua Mona Lisa\n");
        printf("[2] Pablo Picasso e sua fundacao do cubismo\n");
        printf("[3] Vincent van Gogh e suas paisagens expressionistas\n");
        printf("[4] Michelangelo e sua Capela Sistina\n");
        if (ler_numero(&modalidade1) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
}
case 2:	
if (modalidade1 ){
        printf("pergunta 2\n");
        printf("Qual movimento artistico buscava explorar o subconsciente e o irracional por meio de imagens surrealistas?\n\n");
        printf("[1] Cubismo\n");
        printf("[2] Expressionismo\n");
        printf("[3] Surrealismo\n");
        printf("[4] Impressionismo\n");
        if (ler_numero(&modalidade2) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }              
}
case 3:	
if (modalidade4 ){
        printf("pergunta 3\n");
        printf("Como a arte moderna se diferencia da arte tradicional em termos de estilo, tecnica e temas?\n\n");
        printf("[1] Foco em retratar figuras religiosas\n");
        printf("[2] Uso extensivo de cores vivas e formas geometricas\n");
        printf("[3] enfase em retratar a nobreza\n");
        printf("[4] Uso predominante de escultura em vez de pintura\n");
        if (ler_numero(&modalidade3) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
}
case 4:	
if (modalidade3){
        printf("pergunta 4\n");
        printf("Qual foi o movimento artistico que se caracterizou pela representacao de objetos a partir de multiplos pontos de vista ao mesmo tempo?\n\n");
        printf("[1] Cubismo\n");
        printf("[2] Impressionismo\n");
        printf("[3] Surrealismo\n");
        printf("[4] Realismo\n");
        if (ler_numero(&modalidade4) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
}
case 5:	
if (modalidade10){
		printf("pergunta 5\n");
        printf("Como a Primeira Guerra Mundial influenciou a producao artistica e a expressao visual durante a era da arte moderna?\n\n");
        printf("[1]  Nao teve impacto na arte\n");
        printf("[2]  Levou a celebracao de temas gloriosos e patrioticos\n");
        printf("[3]  Resultou em uma expressao mais sombria e reflexiva\n");
        printf("[4]  Incentivou a representacao do classicismo\n");
        if (ler_numero(&modalidade5) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        } 
}
case 6:	
if (modalidade5){
        printf("pergunta 6\n");
        printf("Quais eventos historicos ou movimentos sociais influenciaram o surgimento da arte moderna no inicio do seculo XX?\n\n");
        printf("[1] Revolucao Industrial\n");           
        printf("[2] Renascimento\n");       
        printf("[3] Revolucao Francesa\n");        
        printf("[4] Imperio Romano\n");
        if (ler_numero(&modalidade6) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
     }            
case 7:	
if (modalidade6){
        printf("pergunta 7\n");
        printf("Quais foram as criticas e controversias enfrentadas pela arte moderna durante seu desenvolvimento?\n\n");
        printf("[1] Apreciacao generalizada e aceitacao unanime\n");           
        printf("[2] Resistencia de tradicionalistas e criticos\n");       
        printf("[3] Ausencia de criticas de qualquer tipo\n");        
        printf("[4] Popularidade instantanea em todo o mundo\n");
        if (ler_numero(&modalidade7) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
  }           
case 8:	
if (modalidade7){
        printf("pergunta 8\n");
        printf("Como a tecnologia e a inovacao tecnica, como a fotografia e a producao em massa, afetaram a arte moderna?\n\n");
        printf("[1] Nao tiveram impacto na arte moderna\n");           
        printf("[2] Tornaram a arte moderna inacessivel ao publico em geral\n");       
        printf("[3] Inspiraram novas formas de expressao artistica\n");        
        printf("[4] Diminuiram a importancia da pintura e escultura\n");
        if (ler_numero(&modalidade8) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
   } 
case 9:	
if (modalidade8){
        printf("pergunta 9\n");
        printf("Qual movimento artistico e conhecido por retratar a vida urbana e o cotidiano de maneira objetiva e sem idealizacao?\n\n");
        printf("[1] Cubismo\n");           
        printf("[2] Impressionismo\n");       
        printf("[3] Realismo\n");        
        printf("[4] Abstracionismo\n");
        if (ler_numero(&modalidade9) != 0) {
            printf("Entrada invalida. Por favor, digite um numero entre 1 e 4.\n");
            continue;
        }
    } 			
case 10:	
if (modalidade9){
        printf("pergunta 10\n");
        printf("Quais sao algumas obras de arte iconicas que simbolizam o movimento da arte moderna e ainda sao celebradas hoje?\n\n");
        printf("[1] A Mona Lisa de Leonardo da Vinci\n");           
        printf("[2] A Noite Estrelada de Vincent van Gogh\n");       
        printf("[3] O Nascimento de Venus de Sandro Botticelli\n");        
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