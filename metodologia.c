#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamanho, num_random;
    int valor_total = 0;

    // Inicializa a semente do gerador de números aleatórios com o tempo atual
    // Sem isso, o programa geraria os mesmos números toda vez que rodasse.
    srand(time(NULL));

    printf("Digite a quantidade de valores: ");
    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++) {
        // rand() % 101 gera um número de 0 a 100
        num_random = rand() % 101;
        valor_total += num_random;
        printf("%d\n", num_random);
    }

    // Divisão inteira entre dois tipos int
    int media = valor_total / tamanho;

    printf("Media: %d\n", media);

    if (media > 50) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}