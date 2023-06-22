#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração das variáveis globais
int tam = 2, topo = -1, valor;
int pilha[2];

void push();
void pop();

int main() {
	// Adicioanr o pt-br ao programa
	setlocale(LC_ALL, "Portuguese");
	
	// Declaração das variáveis da função principal
	int operador, resp = 0, divZero = 1;
	float resultado;
	
	
	while(resp != 1) {
		printf("Digite o primeiro valor: ");
		scanf("%d", &valor);
		push();
		
		printf("Digite o segundo valor: ");
		scanf("%d", &valor);
		push();
		
		printf("\nEscolha a operação: \n 1 -> '+' \n 2 -> '-' \n 3 -> '*' \n 4 -> '/'\n");
		scanf("%d", &operador);
		
		if(operador == 1) {
			pop();
			resultado = valor;
			pop();
			resultado = valor + resultado;
		} 
		
		if(operador == 2) {
			pop();
			resultado = valor;
			pop();
			resultado = valor - resultado;
		} 
		
		if(operador == 3) {
			pop();
			resultado = valor;
			pop();
			resultado = valor * resultado;
		}
		
		if(operador == 4) {
			pop();
				
			// Se o valor do topo da pilha (último n° digitado) for 0, não permitir a divisão			
			if(valor == 0){
				pop(); // Mesmo que resultado não receba valor, a pilha precisa ser esvaziada
				divZero = 0; // Variável que controla a divisão por 0
			} else {
				resultado = valor;
				pop();
				resultado = valor / resultado;
			}			
		}
		
		// Se o denominador for 0, não há resultado
		if(divZero == 1) {
			printf("\nO resultado é: %.2f\n", resultado);	
		} else {
			printf("\nNão é possível dividir por 0!\n");	
		}
		
		printf("\nQuer continuar ? [0 = sim / 1 = não]\n");
		scanf("%d", &resp);
		
		divZero = 1; // divZero volta a receber 1 para não atrapalhar as outras operações
		system("cls");
	}
	
	printf("\nPrograma encerrado!\n");
	return 0;
}

// Função para empilhar
void push() {
	if(topo == tam - 1) {
		printf("\n *A pilha está cheia! * \n");
	} else {
		topo++;
		pilha[topo] = valor;
	}
}

// Função para desempilhar
void pop() {
	if(topo == -1) {
		printf("\n * A pilha está vaiza! * \n");
	} else {
		valor = pilha[topo];
		topo--;
	}
}