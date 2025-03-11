#include <stdio.h>

int main() {

    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo:\n");
    int casa = 0;
    while (casa < 5) {
        printf("Cima, Direita\n");
        casa++;
    }


    printf("\nMovimento da Rainha:\n");
    int passo = 0;
    do {
        printf("Esquerda\n");
        passo++;
    } while (passo < 8);

    return 0;
}