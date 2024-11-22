#include <stdio.h>


int main(){
	int A, B, soma, sub, multi, divis;
	
	printf ("Digite um numero inteiro:\n");
	scanf ("%d", &A);
	printf ("Digite outro numero inteiro:\n");
	scanf ("%d", &B);
	
	soma = A + B;
	sub = A - B;
	multi = A * B;
	divis = A / B;
	
	printf ("o valor da soma e: %d \n", soma);
	printf ("o valor da subtracao e: %d \n", sub);
	printf ("o valor da multiplicacao e: %d \n", multi);	
	printf ("o valor da divisao e: %d \n", divis);
	
}
