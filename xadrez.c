#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int torre=0, rainha=0, bispo, cavalo;
    int andarCasas,aux1,aux2;
    do{
        printf("\n*********************************");
        printf("\nEscolha qual peca vai mexer\n");
        printf("1-Rainha\n");
        printf("2-Torre\n");
        printf("3-Bispo\n");
        printf("4-Cavalo\n");
        printf("0-Sair\n");
        printf("*********************************\n");
        printf("Digite sua Escolha: ");
        scanf("%d",&aux1);
        //Switch para o menu de escolha
        int movimentoCavalo=1;
        switch (aux1){
            case 1://Movimentos da Rainha
                printf("\nQuer movimentar a Rainha para qual direcao?\n");
                printf("1- Cima\n");
                printf("2- Baixo\n");
                printf("3- Direita\n");
                printf("4- Esquerda\n");
                printf("5- Diagonal Direta\n");
                printf("6- Diagonal Esquerda\n");
                printf("Digite sua Escolha: ");
                scanf("%d",&aux2);
                switch (aux2){
                    case 1:
                        printf("Digite quantas casas andar para Cima: ");
                        scanf("%d",&andarCasas);
                        printf("\n*********************************");   
                        printf("\n");
                        //IF para evitar movimentação impossivel no xadrez
                        if(andarCasas<0 ||andarCasas>7){
                            printf("Movimento impossivel no tabuleiro de Xadrez!");
                            break;
                        }
                        while (rainha <andarCasas){
                            printf("Cima\n");
                            rainha++;
                        }
                        break;
                    case 2:
                        printf("Digite quantas casas andar para Baixo: ");
                        scanf("%d",&andarCasas);
                        printf("\n*********************************");   
                        printf("\n");
                        if(andarCasas<0 ||andarCasas>7){
                            printf("Movimento impossivel no tabuleiro de Xadrez!!!");
                            break;
                        }
                        while (rainha <andarCasas){
                            printf("Cima\n");
                            rainha++;
                        }
                        break;
                    case 3:
                        printf("Digite quantas casas andar para Direita: ");
                        scanf("%d",&andarCasas); 
                        printf("\n*********************************");  
                        printf("\n");
                        if(andarCasas<0 ||andarCasas>7){
                            printf("Movimento impossivel no tabuleiro de Xadrez!!!");
                            break;
                        }
                        while (rainha <andarCasas){
                            printf("Direita\n");
                            rainha++;
                        }
                        break;
                    case 4:
                        printf("Digite quantas casas andar para Esquerda: ");
                        scanf("%d",&andarCasas); 
                        printf("\n*********************************");  
                        printf("\n");
                        if(andarCasas<0 ||andarCasas>7){
                            printf("Movimento impossivel no tabuleiro de Xadrez!!!");
                            break;
                        }
                        while (rainha <andarCasas){
                            printf("Esquerda\n");
                            rainha++;
                        }
                        break;
                    case 5:
                        printf("Digite quantas casas andar para Diagonal Direita: ");
                        scanf("%d",&andarCasas);
                        printf("\n*********************************");   
                        printf("\n");
                        if(andarCasas<0 ||andarCasas>7){
                            printf("Movimento impossivel no tabuleiro de Xadrez!!!");
                            break;
                        }
                        while (rainha <andarCasas){
                            printf("Cima Direita\n");
                            rainha++;
                        }
                        break;
                    case 6:
                        printf("Digite quantas casas andar para Diagonal Esquerda: ");
                        scanf("%d",&andarCasas);
                        printf("\n*********************************");   
                        printf("\n");
                        if(andarCasas<0 ||andarCasas>7){
                            printf("Movimento impossivel no tabuleiro de Xadrez!!!");
                            break;
                        }
                        while (rainha <andarCasas){
                            printf("Cima Esquerda\n");
                            rainha++;
                        }
                        break;
                    default:
                        printf("Opcao Invalida\n");
                        break;
                }
                rainha=0;
                break;

            case 2://Movimentos da Torre
                printf("\nQuer movimentar a Torre para qual direcao?\n");
                printf("1- Esquerda\n");
                printf("2- Direita\n");
                printf("3- Cima\n");
                printf("4- Baixo\n");
                printf("Digite sua Escolha: ");
                scanf("%d",&aux2);
                switch (aux2){
                    case 1:
                        printf("Digite quantas casas andar para Esquerda: ");
                        scanf("%d",&andarCasas); 
                        printf("\n*********************************");  
                        printf("\n");
                        if(andarCasas<0 ||andarCasas>7){
                            printf("Movimento impossivel no tabuleiro de Xadrez!");
                            break;
                        }
                        do{
                            printf("Esquerda\n");
                            torre++;
                        }while(torre<andarCasas);
                        break;
                    case 2:
                        printf("Digite quantas casas andar para direita: ");
                        scanf("%d",&andarCasas);
                        printf("\n*********************************");   
                        printf("\n");
                        if(andarCasas<0 ||andarCasas>7){
                            printf("Movimento impossivel no tabuleiro de Xadrez!!!");
                            break;
                        }
                        do{
                            printf("Direita\n");
                            torre++;
                        }while(torre<andarCasas);
                        break;
                    case 3:
                        printf("Digite quantas casas andar para Cima: ");
                        scanf("%d",&andarCasas);
                        printf("\n*********************************");   
                        printf("\n");
                        if(andarCasas<0 ||andarCasas>7){
                            printf("Movimento impossivel no tabuleiro de Xadrez!!!");
                            break;
                        }
                        do{
                            printf("Cima\n");
                            torre++;
                        }while(torre<andarCasas);
                        break;
                    case 4:
                        printf("Digite quantas casas andar para Baixo: ");
                        scanf("%d",&andarCasas); 
                        printf("\n*********************************");  
                        printf("\n");
                        if(andarCasas<0 ||andarCasas>7){
                            printf("Movimento impossivel no tabuleiro de Xadrez!!!");
                            break;
                        }
                        do{
                            printf("Baixo\n");
                            torre++;
                        }while(torre<andarCasas);
                        break;
                    default:
                        printf("Opcao Invalida\n");
                        break;
                }
                torre=0;
                break;
            case 3://Movimentos da Bispo
                printf("\nQuer movimentar a Rainha para qual direcao?\n");
                printf("1- Diagonal Direta\n");
                printf("2- Diagonal Esquerda\n");
                printf("Digite sua Escolha: ");
                scanf("%d",&aux2);
                switch (aux2){
                    case 1:
                        printf("Digite quantas casas andar para Diagonal Direta: ");
                        scanf("%d",&andarCasas);
                        printf("\n*********************************");
                        printf("\n");
                        if(andarCasas<0 ||andarCasas>7){
                            printf("Movimento impossivel no tabuleiro de Xadrez!!");
                            break;
                        }
                        for (bispo = 0; bispo < andarCasas; bispo++){
                         printf("Cima Direta\n");
                        }
                        break;
                    case 2:
                        printf("Digite quantas casas andar para Diagonal Esquerda: ");
                        scanf("%d",&andarCasas);
                        printf("\n*********************************");
                        printf("\n");
                        if(andarCasas<0 ||andarCasas>7){
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
                break;
             // Nível Aventureiro - Movimentação do Cavalo
            case 4://Movimentos do cavalo
                printf("\nQuer movimentar a Rainha para qual direcao?\n");
                printf("1- L para Baixo Direta\n");
                printf("2- L para Baixo Esquerda\n");
                printf("3- L para Cima Direta\n");
                printf("4- L para Cima Esquerda\n");
                printf("Digite sua Escolha: ");
                scanf("%d",&aux2);
                switch (aux2){
                    case 1:
                        while(movimentoCavalo!=0){
                            for(cavalo=0;cavalo<2;cavalo++){
                                printf("Baixo\n");
                            }
                            printf("Direta\n");
                            movimentoCavalo--;
                        }
                        break;
                    case 2:
                        while(movimentoCavalo!=0){
                            for(cavalo=0;cavalo<2;cavalo++){
                                printf("Baixo\n");
                            }
                            printf("Esqueda\n");
                            movimentoCavalo--;
                        }
                        break;
                    case 3:
                        while(movimentoCavalo!=0){
                            for(cavalo=0;cavalo<2;cavalo++){
                                printf("Cima\n");
                            }
                            printf("Direta\n");
                            movimentoCavalo--;
                        }
                        break;
                    case 4:
                        while(movimentoCavalo!=0){
                            for(cavalo=0;cavalo<2;cavalo++){
                                printf("Cima\n");
                            }
                            printf("Esqueda\n");
                            movimentoCavalo--;
                        }
                        break;
                    default:
                        break;
                }
            default:
                break;
        }
    }while(aux1!=0);
}
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.