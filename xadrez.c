#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int torre=0, rainha=0, bispo;
    int andarCasas,aux1,aux2;
    do{
        printf("\n*********************************");
        printf("\nEscolha qual peca vai mexer\n");
        printf("1-Rainha\n");
        printf("2-Torre\n");
        printf("3-Bispo\n");
        printf("0-Sair\n");
        printf("*********************************\n");
        printf("Digite sua Escolha: ");
        scanf("%d",&aux1);
        //Switch para o menu de escolha
        switch (aux1){
            case 1://Rainha andando para Cima
                printf("Digite quantas casas andar: ");
                scanf("%d",&andarCasas);
                printf("\n");
                if(andarCasas<=0 ||andarCasas>7){
                    printf("Movimento impossivel no tabuleiro de Xadrez");
                }else{
                    while (rainha <andarCasas){
                        printf("Cima\n");
                        rainha++;
                    }
                }
                rainha=0;
                break;
            case 2://Movimento da Torre
                printf("\nQuer movimentar a Torre para qual direcao?\n");
                printf("1-Esquerda\n");
                printf("2-Direita\n");
                printf("Digite sua Escolha: ");
                scanf("%d",&aux2);
                switch (aux2){
                    case 1://Torre indo para esquerda
                        printf("Digite quantas casas andar para Esquerda: ");
                        scanf("%d",&andarCasas);   
                        printf("\n");
                        if(andarCasas<=0 ||andarCasas>7){
                            printf("Movimento impossivel no tabuleiro de Xadrez!");
                            break;
                        }
                        do{
                            printf("Esquerda\n");
                            torre++;
                        }while(torre<andarCasas);
                        break;
                    case 2://Torre indo para direita
                        printf("Digite quantas casas andar para direita: ");
                        scanf("%d",&andarCasas);   
                        printf("\n");
                        if(andarCasas<=0 ||andarCasas>7){
                            printf("Movimento impossivel no tabuleiro de Xadrez!!!");
                            break;
                        }
                        do{
                            printf("Direita\n");
                            torre++;
                        }while(torre<andarCasas);
                        break;
                    default:
                        printf("Opcao Invalida\n");
                        break;
                }
                torre=0;
                break;
            case 3://Bispo andando para Diagonal Esquerda
                printf("Digite quantas casas andar: ");
                scanf("%d",&andarCasas);
                printf("\n");
                if(andarCasas<=0 ||andarCasas>7){
                    printf("Movimento impossivel no tabuleiro de Xadrez!!");
                    break;
                }
                for (bispo = 0; bispo < andarCasas; bispo++){
                    printf("Cima Esquerda\n");
                }
                break;
            default:
                break;
        }
    }while(aux1!=0);
}
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.