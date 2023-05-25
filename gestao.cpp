#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int code = 0;

struct Funcionario{
	char nome[100]; 
	char cargo[50];
};

void menu();
void cadastro(Funcionario *funcionarios);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	menu();
	
}

void menu(){
	printf("********************************************\n");
	printf("          CADASTRO DE FUNCION�RIOS          \n");
	printf("********************************************\n");
	printf("1 - Cadastrar funcion�rio\n");
	printf("2 - Listar cargos\n");
	printf("3 - Listar funcion�rios\n");
	printf("4 - Listar funcion�rios por cargo\n");
	printf("5 - Realizar demiss�o de um funcion�rio\n");
	printf("6 - Gerar folha de pagamento\n");
	printf("7 - Gerar recibo de sal�rio\n");
	printf("0 - Sair");
}


void cadastro(Funcionario *funcionarios){

	printf("Nome do funcion�rio: ");
	gets(funcionarios[code].nome);
	fflush(stdin);
	
	printf("Cargo: ");
	gets(funcionarios[code].cargo);
}
