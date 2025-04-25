#include <stdio.h>

int main() {
    //Variáveis declaradas
    int torre = 0, bispo = 0, rainha;

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

    





    return 0;
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.