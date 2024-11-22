#include <stdio.h>

#define texto "Entrada e saida de dados."

int main(){
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf ("digite sua idade:\n");
	scanf ("%d", &idade);
	
	printf ("digite sua altura:\n");
	scanf ("%f", &altura);
	
	printf ("digite seu nome:\n");
	scanf ("%s", &nome);
	
	printf ("dados informados:\n");
	printf ("idade: %d.\n", idade);
	printf ("altura: %2f.\n", altura);
	printf ("nome: %s.\n", nome);
}
