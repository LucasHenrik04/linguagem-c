#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[50];
};

typedef struct tipo_pessoa pessoa;

int main(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	pessoa lista[TAM];
	int i;
	
	for(i=0;i<TAM;i++){
		printf("Insira os dados da pessoa (%d)\n", i+1);
		printf("\nDigite o nome:\n");
		scanf("%50[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		printf("\nDigite a idade:\n");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		printf("\nDigite o peso:\n");
		scanf("%.2f", &lista[i].peso);
	}
	system("cls");
}
