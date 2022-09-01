#include <stdio.h>
#include <locale.h>


int main(){
    int numeroSecreto = 27;
	int chute;
    
	printf("digite um numero: ");
    scanf("%d", &chute);
    
    printf("Seu chute foi %d \n",chute);
    if(chute == numeroSecreto){
    	printf("acertou o numero");
	}
	else{
		if(chute > numeroSecreto){
			printf("o numero secreto e menor que %d ", chute);
		}
		else{
		
		printf("o numero secreto e maior que %d ", chute);
		
		}
	}
    
}
