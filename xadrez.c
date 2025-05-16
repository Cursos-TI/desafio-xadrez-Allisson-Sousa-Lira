#include <stdio.h>
//Desafio Mestre -> Bispo mover 5 casas para diagonal Direita, Torre 5 casas para direita, Rainha 7 casas para esquerda , cavalo L para cima direita!!
//Nesse desafio mestre mudei muita coisa para deixar o codigo mais simples mesmo, no inicio dos desafio acabei me empolgando demais kkkkkk.

//função que faz a movimentação da torre
void moverTorre(int casas){
    if (casas>0){
        printf("Direita\n");
        printf(" \n");
        moverTorre(casas-1);
    }
}

//função que faz a movimentação da rainha
void moverRainha(int casas){
    if (casas>0){
        printf("Esquerda\n");
        printf(" \n");
        moverRainha(casas-1);
    }
       
}

//função que faz a movimentação do Bispo
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }
    // Loop externo — vertical (Cima ou Baixo)
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        // Loop interno — horizontal (Direita ou Esquerda)
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
            printf(" \n");
        }
    }
    moverBispo(casas - 1);
}

//função que faz a movimentação do cavalo
void moverCavalo(int movimentoCavalo){
    while (movimentoCavalo != 0) {
        for (int i = 0, j = 0; i < 2 || j < 1; ) {
            if (i < 2) {
                printf("Cima\n");
                i++;
                continue;
            }
            if (j < 1) {
                printf("Direita\n");
                j++;
            }
        }
        movimentoCavalo--;
    }
}

int main() {
    int bispo=5, rainha= 5,torre=5;
    int movimentoCavalo=1;
    int aux;
    do{
        printf("*********************************");
        printf("\nEscolha qual peca voce quer mexer?\n");
        printf("1-Torre\n");
        printf("2-Rainha\n");
        printf("3-Bispo\n");
        printf("4-Cavalo\n");
        printf("0-Sair\n");
        printf("*********************************\n");
        printf("Digite sua Escolha: ");
        scanf("%d",&aux);
        printf("*********************************\n");

        //Switch para o menu de escolha
        switch (aux){
            case 1://Movimentos da Torre
                moverTorre(torre);
                break;
            case 2://Movimentos da Rainha 
                moverRainha(rainha);
                break;
            case 3://Movimentos da Bispo
                moverBispo(bispo);
                break;
            case 4://Movimentos do cavalo
                printf("Movimento do cavalo L para Cima Direta\n");
                moverCavalo(movimentoCavalo);
                break;
            default:
                break;
        }
    }while(aux!=0);
}