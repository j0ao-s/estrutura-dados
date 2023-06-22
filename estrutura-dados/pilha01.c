#include <stdio.h>
#include <stdlib.h>

int tam = 2, topo = -1, valor;
int pilha[2];

void empilha();
void desempilha();

int main(int argc, char** argv)
{
	int op;
	float result;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor);
	empilha();
	
	printf("Digite o segundo valor: ");
	scanf("%d", &valor);
	empilha();
	
	printf("\nEscolha a operação: \n1->'+'\n2->'-'\n3->'*'\n4->'/'\n");
	scanf("%d", &op);

	if(op==1){
		desempilha();
		result=valor;
		desempilha();
		result+=valor;
	} else if(op==2){
		desempilha();
		result=valor;
		desempilha();
		result-=valor;
	} else if(op==3){
		desempilha();
		result=valor;
		desempilha();
		result*=valor;
	} else if(op==4){
		desempilha();
		result=valor;
		desempilha();
		result/=valor;
	}
	
	printf("\nO resultado e: %.2f\n", result);
		
	return 0;
		
}

void empilha(){
	if(topo==tam-1){
		printf("\n*Pilha cheia*\n");
	} else
	{
		topo++;
		pilha[topo]=valor;
	}
}

void desempilha(){
	if(topo==-1){
		printf("\n*Pilha vazia*");
	} else
	{
		valor = pilha[topo];
		topo--;
	}
}