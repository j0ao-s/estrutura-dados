#include <stdio.h>
#include <stdlib.h>

int main (){
	struct funcionario {
		char nome[30], sexo[30], cargo[30], nascimento[30];
		int salario, idade, setor, cpf;
	}funcionario_um;
	
	printf("Qual o seu nome: ");
	scanf("%s", &funcionario_um.nome);
	
	printf("Qual o seu sexo? ");
	scanf("%s", &funcionario_um.sexo);
	
	printf("Qual o seu cargo? ");
	scanf("%s", &funcionario_um.cargo);
	
	printf("Qual a sua data de nascimento? ");
	scanf("%s", &funcionario_um.nascimento);
	
	printf("Qual o seu salario? ");
	scanf("%d", &funcionario_um.salario);
	
	printf("Qual a sua idade? ");
	scanf("%d", &funcionario_um.idade);
	
	printf("Qual o seu setor [0-99]");
	scanf("%d", &funcionario_um.setor);
	
	printf("Qual o seu CPF [So o numero]? ");
	scanf("%d", &funcionario_um.cpf);
	
	printf("\nDados dos Funcionario: \n");
	printf("Nome: %s\n", funcionario_um.nome);
	printf("Sexo: %s\n", funcionario_um.sexo);
	printf("Cargo: %s\n", funcionario_um.cargo);
	printf("Data de nascimento: %s\n", funcionario_um.nascimento);
	printf("Salario: %d\n", funcionario_um.salario);
	printf("Idade: %d\n", funcionario_um.idade);
	printf("Setor: %d\n", funcionario_um.setor);
	printf("CPF: %d\n", funcionario_um.cpf);
	return 0;
}