#include <stdio.h>
//Recursividade para mover a Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita.\n");
        moverTorre(casas - 1);
    }
}

//Recursividade para mover o Bispo
void moverBispo() {
    for(int vertical = 0, horizontal = 1; vertical < 6; vertical++) {
        for(horizontal; horizontal == vertical; horizontal++) {
            printf("Direita.\n");
        }
        if (vertical == 5) {
            break;
        }
        printf("Cima, ");
    }
}

//Recursividade para mover a Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda.\n");
        moverRainha(casas - 1);
    }
}

int main() {
    //Variáveis declaradas
    int torre = 5, bispo = 5, rainha = 8;

    //Mensagem inicial
    printf("\n---Xadrez em C---\n");

    //Movimento da torre usando void
    printf("\nMovimento da Torre:\n");
    moverTorre(torre);

    //Movimento do bispo usando void
    printf("\nMovimento do Bispo:\n");
    moverBispo(bispo);
    
    //Movimento da rainha usando void
    printf("\nMovimento da Rainha:\n");
    moverRainha(rainha);

    //Movimento do cavalo usando Loop Aninhado com múltiplas variáveis
    printf("\nMovimento do Cavalo:\n");
    for (int cavalo = 0, L = 0; L < 1; L++) {
        for (cavalo; cavalo < 2; cavalo++) {
            printf("Cima.\n");
        }
        printf("Direita.\n");
    }

    //Mensagem final
    printf("\n---Fim---\n");

    return 0;
}