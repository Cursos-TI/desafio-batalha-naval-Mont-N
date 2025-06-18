#include <stdio.h>
#define tamanho 10
#define tamanho_navio 3


// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
   
    int tabuleiro[tamanho][tamanho];
    int i, j;


    for (i = 0; i < tamanho; i++){
        for (j = 0;j < tamanho; j++){
            tabuleiro [i][j] = 0;
        }
    }


    int navio_horizontal[tamanho_navio];
    int navio_vertical [tamanho_navio];

    for(i = 0; i < tamanho_navio; i++){

        navio_horizontal[i] = 3;
        navio_vertical[i] = 3;
    }

    int linha_a = 2;
    int coluna_a = 1;

    int linha_b = 4;
    int coluna_b = 5;

    for(i = 0; i < tamanho_navio; i++){

        tabuleiro[linha_a][coluna_a + i] = navio_horizontal[i];
    }

    for(i = 0; i < tamanho_navio; i++){

        tabuleiro[linha_b][coluna_b + i] = navio_vertical[i];
    }


    printf("TABULEIRO NAVAL\n");

    printf(" ");

    for (j = 0; j < tamanho; j++){
        printf("%d", j);
    }

    printf("\n");

    for(i = 0; i < tamanho; i++){
        printf("%d", i);
        for(j = 0; j < tamanho; j++){
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}
