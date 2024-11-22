#include <stdio.h>

int main(){
	
	int dado = 10;
	
	dado++;
	//incrementando um
	printf ("dado incremetando: %d\n", dado); 
	
	//decrimentando um
	dado--;
	printf ("dado dencremetando: %d\n", dado)
	;
	//atribuindo a soma 5 ao valor do dado
	dado+= 5;
	printf ("dado incremetando generico: %d\n", dado);
	
	//atribuindo a subtracao 5 ao valor do dado
	dado-= 5;
	printf ("dado dencremetando generico: %d\n", dado);
	
	//atribuindo a multiplicacao 5 ao valor do dado
	dado*= 5;
	printf ("dado multiplicando: %d\n", dado);
	
	//atribuindo a divisao 5 ao valor do dado
	dado/= 5;
	printf ("dado dividindo: %d\n", dado);
	
	//atribuindo a subtracao para zerar o resultado
	dado-= 10;
	printf ("dado subtraindo e resultado final: %d\n", dado);
	
	
}
