#include <stdio.h>

float maior(float num1, float num2){
	if(num1 > num2)
		return num1;
		else
		return num2;
}

int main(){
	float x, y, m;
	printf("Insira o primeiro valor:\n");
	scanf("%f", &x);
	printf("Insira o segundo valor:\n");
	scanf("%f", &y);
	
	//chamou a função e substitui o valor, x = num1 e y = num2 (de acordo com a sequencia)
	m = maior(x,y);
	
	printf("Maior: %.2f\n", m);
	
	
	
}
