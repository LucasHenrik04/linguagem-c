#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct usuario{
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct usuario usuario;

int main(){
	setlocale(LC_ALL, "PORTUGUESE");	
	
	//criando e inicializando
	usuario pes = {0, 0.0, "teste"};
	
	printf("Inicio:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);	
	
	//atribuindo valores aos campos
	pes.idade = 10;
	pes.peso = 60.50;
	strcpy(pes.nome, "Texto");
	
	printf("\nAlterando os campos via codigo:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);	
	
	//usuario inserindo os dados
	
	printf("\nInsira sua idade:\n");
	scanf("%d", &pes.idade);
	printf("\nInsira seu peso:\n");
	scanf("%.2f", &pes.peso);
	fflush(stdin);
	printf("\nInsira seu nome:\n");
	scanf("%s", &pes.nome);
	
	printf("\nDados inseridos:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);	
	
	
	
	
	
}
