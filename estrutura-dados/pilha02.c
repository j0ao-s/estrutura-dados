#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o das vari�veis globais
int tam = 2, topo = -1, valor;
int pilha[2];

void push();
void pop();

int main() {
	// Adicioanr o pt-br ao programa
	setlocale(LC_ALL, "Portuguese");
	
	// Declara��o das vari�veis da fun��o principal
	int operador, resp = 0, divZero = 1;
	float resultado;
	
	
	while(resp != 1) {
		printf("Digite o primeiro valor: ");
		scanf("%d", &valor);
		push();
		
		printf("Digite o segundo valor: ");
		scanf("%d", &valor);
		push();
		
		printf("\nEscolha a opera��o: \n 1 -> '+' \n 2 -> '-' \n 3 -> '*' \n 4 -> '/'\n");
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
				
			// Se o valor do topo da pilha (�ltimo n� digitado) for 0, n�o permitir a divis�o			
			if(valor == 0){
				pop(); // Mesmo que resultado n�o receba valor, a pilha precisa ser esvaziada
				divZero = 0; // Vari�vel que controla a divis�o por 0
			} else {
				resultado = valor;
				pop();
				resultado = valor / resultado;
			}			
		}
		
		// Se o denominador for 0, n�o h� resultado
		if(divZero == 1) {
			printf("\nO resultado �: %.2f\n", resultado);	
		} else {
			printf("\nN�o � poss�vel dividir por 0!\n");	
		}
		
		printf("\nQuer continuar ? [0 = sim / 1 = n�o]\n");
		scanf("%d", &resp);
		
		divZero = 1; // divZero volta a receber 1 para n�o atrapalhar as outras opera��es
		system("cls");
	}
	
	printf("\nPrograma encerrado!\n");
	return 0;
}

// Fun��o para empilhar
void push() {
	if(topo == tam - 1) {
		printf("\n *A pilha est� cheia! * \n");
	} else {
		topo++;
		pilha[topo] = valor;
	}
}

// Fun��o para desempilhar
void pop() {
	if(topo == -1) {
		printf("\n * A pilha est� vaiza! * \n");
	} else {
		valor = pilha[topo];
		topo--;
	}
}