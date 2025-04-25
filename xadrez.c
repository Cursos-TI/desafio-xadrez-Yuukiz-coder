#include <stdio.h>

int main() {
    //Variáveis declaradas
    int torre = 0, bispo = 0, rainha, L = 0, cavalo;

    //Mensagem inicial
    printf("---Xadrez em C---\n");

    //Movimento da torre usando While
    printf("\nMovimento da Torre:\n");
    while (torre < 5) {
        printf("Direita.\n");
        torre ++;
    }

    //Movimento do bispo usando Do While
    printf("\nMovimento do Bispo:\n");
    do {
        printf("Cima, Direita.\n");
        bispo++;
    } while (bispo < 5);
    
    //Movimento da rainha usando For
    printf("\nMovimento da Rainha:\n");
    for (rainha = 0; rainha < 8; rainha++) {
        printf("Esquerda.\n");
    }

    //Movimento do cavalo usando For aninhado a While
    printf("\nMovimento do Cavalo:\n");
    while (L < 1) {
        //Loop aninhado usando For
        for (cavalo = 0; cavalo < 2; cavalo++) {
            printf("Baixo.\n");
        }

        printf("Esquerda.\n");
        L++;
    }
    
    return 0;
}