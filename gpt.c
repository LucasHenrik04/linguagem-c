#include <stdio.h>


int main() {
    int i, num, maior;

    printf("Digite o primeiro valor: ");
    scanf("%d", &maior); // O primeiro número lido será o maior inicial

    for(i = 1; i < 10; i++) {
        printf("Digite o próximo valor: ");
        scanf("%d", &num);

        if(num > maior) {
            maior = num; // Atualiza o maior valor
        }
    }

    printf("O maior valor é: %d\n", maior);

    return 0;
}
