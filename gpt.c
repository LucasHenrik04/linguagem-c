#include <stdio.h>


int main() {
    int i, num, maior;

    printf("Digite o primeiro valor: ");
    scanf("%d", &maior); // O primeiro n�mero lido ser� o maior inicial

    for(i = 1; i < 10; i++) {
        printf("Digite o pr�ximo valor: ");
        scanf("%d", &num);

        if(num > maior) {
            maior = num; // Atualiza o maior valor
        }
    }

    printf("O maior valor �: %d\n", maior);

    return 0;
}
