#include <stdio.h>

// Definição de constantes para o número de casas
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    // Movimento da Torre (recursividade)
    printf("Movimento da Torre:\n");
    moverTorre(MOV_TORRE);

    // Movimento do Bispo (recursividade + loops aninhados)
    printf("\nMovimento do Bispo:\n");
    moverBispo(MOV_BISPO);

    // Movimento da Rainha (recursividade)
    printf("\nMovimento da Rainha:\n");
    moverRainha(MOV_RAINHA);

    // Movimento do Cavalo (loops aninhados com múltiplas variáveis e condições)
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0, j = 0; i < 2 || j < 1; i++) {
        if (i < 2) {
            printf("Cima\n");
        }
        if (i == 1) {
            for (j = 0; j < 1; j++) {
                printf("Direita\n");
            }
        }
    }
    
    return 0;
}
