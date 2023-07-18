#include <stdio.h>
int main() {
	//declaraçaõ de variáveis
	
	float nota1;
	float nota2;
	float notaTrabalho;
	float media;
	
	// obtençao das notas(entrada)
	printf("digite a 1a nota: ");
	scanf("%f",&nota1);
	printf("digite a 2a nota: ");
	scanf("%f",&nota2);
	printf("digite a nota do trabalho: ");
	scanf("%f",&notaTrabalho);
		//calculo média
	media = (nota1*0.3)+(nota2*0.5)+(notaTrabalho*0.2);
	
	//exibição do resultado
	printf("\nMedia = %0.2f\n",media);
	if(media<7){
		printf("Reprovado");
		
	}else{
		printf("Aprovado");
	}
	
	
}
