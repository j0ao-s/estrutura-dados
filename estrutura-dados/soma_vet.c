#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o de vari�veis
	int i, tam, *v1, *v2, *soma;
	
	printf("Defina o tamanho da vetor: ");
	scanf("%d", &tam);
	printf("\n");
	
	//aloca��o de mem�ria
	v1 = (int *) malloc(tam * sizeof(int));
	v2 = (int *) malloc(tam * sizeof(int));
	soma = (int *) malloc(tam * sizeof(int));
	
	//verifica��o
	if (v1 == NULL && v2 == NULL && soma == NULL ) {
   	   printf ("Memoria Insuficiente\n");
   	   return 0;
	}
	
	//entrada de dados com os vetores
	for (i = 0; i < tam; i++){
		printf("Digite o [%d�] valor do vetor v1: ", i+1);
		scanf("%d", &v1[i]);
	}
	
	printf("\n=====================================\n\n");
	
	for (i = 0; i < tam; i++){
		printf("Digite o [%d�] valor do vetor v2: ", i+1);
		scanf("%d", &v2[i]);
	}
	
	printf("\n=====================================\n\n");
	
	//tratamento de dados (soma)
	for (i = 0; i < tam; i++){
		soma[i] = v1[i] + v2[i];
	}
	
	//saida de dados
	for (i = 0; i < tam; i++){
		printf("O [%d�] valor do vetor soma �: [%d]\n", i+1, soma[i]);
	}
	
	//libera��o de mem�ria
	free(v1);
	free(v2);
	free(soma);
	
	return 0;
}