#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int code = 0;

struct Funcionario{
	char name[100]; 
	char position[50];
	float salary;
};

struct Funcionario funcionarios[100];

void menu();
void cadastro(Funcionario *funcionarios);
void options(int op, Funcionario *funcionarios);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op;
		
	menu();
	
	do{
		cadastro(funcionarios);
	
	}while(op);
	
	
	
}

void menu(){
	
	int option;
	
	printf("*********************************************\n");
	printf("      SISTEMA DE GEST�O DE FUNCION�RIOS      \n");
	printf("*********************************************\n");
	printf("1 - Cadastrar funcion�rio\n");
	printf("2 - Listar cargos\n");
	printf("3 - Listar funcion�rios\n");
	printf("4 - Listar funcion�rios por cargo\n");
	printf("5 - Realizar demiss�o de um funcion�rio\n");
	printf("6 - Gerar folha de pagamento\n");
	printf("7 - Gerar recibo de sal�rio\n");
	printf("0 - Sair\n");
	printf("---------------------------------------------\n");
	printf("Digite o n�mero da op��o desejada: ");
	scanf("%d", option);
	fflush(stdin);
	
	options(option, funcionarios);
	
	printf("\n---------------------------------------------\n");
}

void options(int op, Funcionario *funcionarios){
	switch(op){
		case 1:
			printf("---------------------------------------------\n");
			printf("\t  Cadastrar funcion�rio\n");
			printf("---------------------------------------------\n");
			cadastro(funcionarios);				
			break;
			
		case 2: 
			printf("---------------------------------------------\n");
			printf("\t  Listar cargos\n");
			printf("---------------------------------------------\n");
			break;
			
		case 3:
			printf("---------------------------------------------\n");
			printf("\t  Listar funcion�rios\n");
			printf("---------------------------------------------\n");
			break;
			
		case 4: 
			printf("---------------------------------------------\n");
			printf("\t  Listar funcion�rios por cargo\n");
			printf("---------------------------------------------\n");
			break;
			
		case 5: 
			printf("---------------------------------------------\n");
			printf("\t  Demiss�o de funcion�rio\n");
			printf("---------------------------------------------\n");
			break;
			
		case 6: 
			printf("---------------------------------------------\n");
			printf("\t  Gerar folha de pagamento\n");
			printf("---------------------------------------------\n");
			break;
			
		case 7: 
			printf("---------------------------------------------\n");
			printf("\t  Gerar recibo de sal�rio\n");
			printf("---------------------------------------------\n");
			break;
			
		case 0:
			printf("\nEncerrando sistema...");
			abort();
			break;
			
		default:
			printf("ERRO! N�mero incorreto!\n");
			printf("S� � poss�vel digitar num�ros de 0 a 7!");
			printf("Tente novamente!");
			break;
		}	
			
}

void cadastro(Funcionario *funcionarios){

	printf("Nome do funcion�rio: ");
	gets(funcionarios->name);
	fflush(stdin);
	
	printf("Cargo: ");
	gets(funcionarios->position);
	fflush(stdin);
	
	printf("Sal�rio: ");
	scanf("%f", &funcionarios->salary);
	fflush(stdin);
}



