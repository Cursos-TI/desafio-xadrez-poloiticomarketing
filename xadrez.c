#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// FUNÇÕES RECURSIVAS - Nível Mestre
// Cada função recebe o número de casas restantes a mover.
// A recursão para quando casas chega a 0 (caso base).


// Recursão da Torre: move para a direita, uma casa por chamada
void moverTorre(int casas){
    if (casas == 0) return;
    printf ("Direinta\n");
    //chama a si mesma com uma casa a menos
    moverTorre (casas - 1);
}
// Recursão do Bispo: move na diagonal (Cima + Direita), uma casa por chamada
// Além da recursão, utiliza loops aninhados internamente:
// o loop externo representa o passo vertical e o interno o horizontal 

void moverBispo(int casas){
    if (casas == 0) return;
// Loop aninhado: externo = vertical (Cima), interno = horizontal (Direita)
    for (int vertical = 0; vertical < 1; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++){
            printf ("Cima\n");
            printf ("Dirita\n");
        }
        
    }
    // chama a si mesma com uma casa a menos
    moverBispo (casas - 1);
}

// Recursão da Rainha: move para a esquerda, uma casa por chamada
void moverRainha(int casas){
    if (casas == 0) return;
    printf ("Esquerda\n");
    //chama a si mesma com uma casa a menos
    moverRainha(casas - 1);
}

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasTorre  = 5;
    int casasBispo  = 5;
    int casasRainha = 8;
    int movBispo    = 0;
    int movRainha   = 0;

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("=== Torre ===\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\n=== Bispo ===\n");
    while (movBispo < casasBispo) {
        printf("Cima Direita\n");
        movBispo++;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n=== Rainha ===\n");
    do {
        printf("Esquerda\n");
        movRainha++;
    } while (movRainha < casasRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // Movimento do Cavalo em L: 2 casas para cima e 1 para a direita
    // Loops aninhados com múltiplas variáveis e uso de continue e break
    printf ("\n Cavalo \n");

    // variável de controle do movimento vertical (2 casas para cima)
    int vertical = 0;
    // variável de controle do movimento horizontal (1 casa para direita)
    int horizontal = 0; 

    // Loop externo: controla as 2 casas verticais (para cima)
    for (vertical = 0; vertical < 2; vertical++) {
        if (vertical < 0) continue;
        printf("Cima\n");
    }

    // Loop interno: controla a 1 casa horizontal (para direita)
    for (horizontal = 0; horizontal < 2; horizontal++) {
         // break: encerra após a primeira casa (o Cavalo só anda 1 para a direita)
        if (horizontal == 1) break;
        printf("Direita\n");
    } 

    return 0;
}
