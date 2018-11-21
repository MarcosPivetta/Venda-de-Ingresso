#include <stdio.h>
#include <stdlib.h>

// Cabecalho
void cabechalho() {
    printf("=========================================\n");
    printf("SISTEMA DE VENDAS DE INGRESSOS DE TEATRO\n");
    printf("=========================================\n");
    printf("                 %s\n\n",__TIMESTAMP__);
}

// Cabecalho
void opcaoDesajada() {
    printf("Digite a opcao desejada \n");
    printf("-----------------------------------------\n");
}


void consultarPecas() {
    int voltar = 0;
    char filmes[][20] = {"Shrek", "Cinderela", "Galinha Pintadinha"};
    int tamanho2 = sizeof(filmes) / sizeof(filmes[0]);
    
    do {
        for (int i = 0 ; i < tamanho2; i++) {
            printf("Peca: %s\n", filmes[i]);
        }
        
        printf("\n\nHorario de apresentacao das Pecas:\n");
        printf("Sextas, Sabados e Domingos - Das 19:00 as 21:00\n\n");
        
        printf("Digite ' 0 '  para voltar para o menu principal.\n");
        printf(">>> ");
        scanf("%d", &voltar);
        
        switch (voltar) {
            case 0:
                system("cls");
                break;
                
            default:
                system("cls");
                cabechalho();
                printf("\nOpcao invalida, digite ' 0 '  para voltar para o menu principal.\n\n");
                break;
        }
    } while (voltar != 0);
    
}

void ticket() {
    
}


void vendaDeIngresso() {
    
    float ingresso, inteira, meiaEntrada, gratuidade, totalInteira, totalMeia, totalGratuidade, total;
    ingresso = 10.00;
    inteira = ingresso;
    meiaEntrada = ingresso / 2;
    gratuidade = ingresso / 100;
    
    
    printf("Informe a quantidade de ingressos \n");
    printf("-----------------------------------------\n");
    
    printf("\nPreco do ingresso: R$ %.2f\n\n", ingresso);
    
    printf("Inteira:\n");
    printf(">>> ");
    scanf("%f", &inteira);
    printf("\nMeia-Entrada: \n");
    printf("(Estudantes, criancas de 02 a 12 anos, adultos a partir de 60 anos e professores da rede publica de ensino)\n");
    printf(">>> ");
    scanf("%f", &meiaEntrada);
    printf("\nGratuidade:\n");
    printf("(Criancas carentes da rede publica de ensino as tercas-feiras)\n");
    printf(">>> ");
    scanf("%f", &gratuidade);
    
    system("cls");
    
    printf("\nResumo do Pedido \n");
    printf("-----------------------------------------\n");
    printf("Intera: ............... %.0f\n", inteira);
    printf("Meia Entrada: ......... %.0f\n", meiaEntrada);
    printf("Gratuidade: ........... %.0f\n", gratuidade);
    
    totalInteira = inteira * ingresso;
    totalMeia = (meiaEntrada * ingresso) / 2;
    totalGratuidade = gratuidade * ingresso;
    
    total = totalInteira + totalMeia;
    
    printf("\nTotal do Pedido \n");
    printf("-----------------------------------------\n");
    printf("Intera: ............... R$%.2f\n", totalInteira);
    printf("Meia Entrada: ......... R$%.2f\n", totalMeia);
    printf("Gratuidade: ........... R$%.2f\n", totalGratuidade);
    
    printf("\nValor total: .......... R$%.2f\n\n", total);
    
    system("PAUSE");
    system("cls");
    
}

void consultaCadeiras() {
    
}

void caixa() {
    
}

int main() {
    
    int opcao, opcao2, opcao3 = 0;
    
    do {
        cabechalho();
        opcaoDesajada();
        printf("1) Venda de Ingresso.\n");
        printf("2) Consultar Pecas.\n");
        printf("3) Consulta de Cadeiras disponiveis.\n");
        printf("4) Caixa.\n");
        printf("0) Sair.\n");
        printf(">>> ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                system("cls");
                cabechalho();
                vendaDeIngresso();
                break;
                
            case 2:
                system("cls");
                cabechalho();
                consultarPecas();
                break;
            case 3:
                system("cls");
                cabechalho();
                break;
            case 4:
                system("cls");
                cabechalho();
                break;
            case 0:
                break;
                
            default:
                system("cls");
                printf("Opcao inconsistente, escolha um opcao do menu.\n\n");
                break;
        }
        
    } while (opcao != 0);
    
    return 0;
    
}
