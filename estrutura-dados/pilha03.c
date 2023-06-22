#include <stdio.h>
#include <stdlib.h>

int tam, topo = -1, valor, i;
int *pilha;

void push();
void pop();

int main() {
	
	printf("Defina o tamanho da pilha: ");
	scanf("%d", &tam);
	printf("\n");
	
	pilha = (int *) malloc(tam * sizeof(int));
	
	if (pilha == NULL) {
   	   printf ("Memoria Insuficiente\n");
   	   return 0;
	}
	
	for(i = 0; i < tam; i = i + 2) {
		valor = i;
		push();
	}
	
	for(i = 0; i < tam; i = i + 2) {
		printf("A pilha se encontra em: %d\n", pilha[topo]);
		pop();
	}
	
	free(pilha);
	
	return 0;
}

void push() {
	if(topo == tam - 1) {
		printf("\n *A pilha esta cheia! * \n");
	} else {
		topo++;
		pilha[topo] = valor;
	}
}


void pop() {
	if(topo == -1) {
		printf("\n * A pilha esta vazia! * \n");
	} else {
		valor = pilha[topo];
		topo--;
	}
}