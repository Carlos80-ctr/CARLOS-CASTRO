#include <stdio.h>
int main() {
	//declara�a� de vari�veis
	
	float nota1;
	float nota2;
	float notaTrabalho;
	float media;
	
	// obten�ao das notas(entrada)
	printf("digite a 1a nota: ");
	scanf("%f",&nota1);
	printf("digite a 2a nota: ");
	scanf("%f",&nota2);
	printf("digite a nota do trabalho: ");
	scanf("%f",&notaTrabalho);
		//calculo m�dia
	media = (nota1*0.3)+(nota2*0.5)+(notaTrabalho*0.2);
	
	//exibi��o do resultado
	printf("\nMedia = %0.2f\n",media);
	if(media<7){
		printf("Reprovado");
		
	}else{
		printf("Aprovado");
	}
	
	
}
