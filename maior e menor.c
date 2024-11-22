#include <stdio.h>

int main(){
	
	float m;
	
	printf("insira a nota:\n");
	scanf ("%f", &m);
	
	if(m >= 4.0 && m <= 7.0){
		printf ("tem direito a fazer um exame");
	}
	if(m >= 8.0){
		printf("voce foi aprovado");
	}
	else {
		printf("vc foi reprovado seu bosta");
	}
}
