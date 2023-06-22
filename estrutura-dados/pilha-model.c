int inicializa(){
	int topo = -1;
}


void empilha(){
	if (topo == tam-1){
		printf("\n * Pilha cheia * \n");
	}
	
	else {
		topo++;
		pilha[topo] = valor;
	}
}

void desempilha(){
	if (topo == -1){
		printf("\n * Pilha vazia * \n");
	}
	
	else{
		valor = pilha[topo];
		topo--;
	}
}

void acessoTopo(){
	if (topo == -1){
		printf("\n * Pilha vazia * \n");
	}
	
	else{
		printf("\nElemento do topo: %d", pilha[topo]);
	}
}

void situacaoPilha(){
	
	if (topo == -1){
		printf("\n * Pilha vazia * \n");
	}
	
	else if (topo == tam-1){
		printf("\n * Pilha cheia * \n");
	}
	
	else {
		printf("\nTotal de elementos na pilha: %d ", topo+1);
		printf("\nEspaço disponível na pilha: %d", tam-(topo+1));
	}
}