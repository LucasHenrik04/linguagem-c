#include <stdio.h>

float maior(float num1, float num2);

int main(){
	float x, y, m;
	printf("digite o primeiro valor:\n");
	scanf("%f", &x);
	printf("\nDigite o segundo valor:\n");
	scanf("%f", &y);
	
	m = maior(x,y);
	
	printf("\nMaior: %.2f\n", m);
}

float maior(float num1, float num2){
	if(num1 > num2)
		return num1;
	else
		return num2;
}
