#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
	char nome[100]; 
	char cargo[50];
	float salario;
	int idade;
	int cpf;
	
}Funcionario;

int menu(Funcionario *funcionarios);
void cabecalho();
void listarCargos(Funcionario *funcionarios), listarFuncionarios(Funcionario *funcionarios);
void listarFuncionariosCargo(Funcionario *funcionarios), demissao(), folhaPagamento(), reciboSalario();
void cadastroFuncionario(Funcionario *funcionarios);
//void cadastroCargo(Funcionario *funcionarios);
void opcoes(int op, Funcionario *funcionarios);

int codigo = 0;

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	Funcionario *funcionarios = (Funcionario *) malloc(3*sizeof(Funcionario));
		
	do{
		opcao = menu(funcionarios);
		system("cls");
		
	}while(opcao != 0);
}
	

void cabecalho(){
	printf("*****************************************************************************************************************\n");
	printf("\t\t\t\t\tSISTEMA DE GEST�O DE FUNCION�RIOS\n");
	printf("*****************************************************************************************************************\n");
}

int menu(Funcionario *funcionarios){
	
	int opcao;
	
	cabecalho();
	
	printf("1 - Cadastrar funcion�rio\n"); //N�o t� entendendo essa parte, t� escrito que tem que cadastrar o funcion�rio e o cargo mas como fazer isso? � de vez?
	//printf("2 - Cadastrar cargo\n");
	printf("2 - Listar cargos\n");
	printf("3 - Listar funcion�rios\n");
	printf("4 - Listar funcion�rios por cargo\n");
	printf("5 - Realizar demiss�o de um funcion�rio\n");
	printf("6 - Gerar folha de pagamento\n");
	printf("7 - Gerar recibo de sal�rio\n");
	printf("0 - Sair\n");
	printf("---------------------------------------------\n");
	printf("Digite o n�mero da op��o desejada: ");
	scanf("%d", &opcao);
	fflush(stdin);
	
	system("cls");
	
	opcoes(opcao, funcionarios);
	
	system("pause");
	
	printf("\n---------------------------------------------\n");

	
	return opcao;
}

void opcoes(int op, Funcionario *funcionarios){
	
	cabecalho();
	
	switch(op){
		case 1:
			printf("\n---------------------------------------------\n");
			printf("\t    Cadastrar funcion�rio\n");
			printf("---------------------------------------------\n");		
			cadastroFuncionario(funcionarios);
			break;
			
		/*case 2: 
			printf("\n---------------------------------------------\n");
			printf("\t    Cadastrar cargo\n");
			printf("---------------------------------------------\n");		
			cadastroCargo(funcionarios);
			break;*/
			
		case 2: 
			printf("\n---------------------------------------------\n");
			printf("\t        Listar cargos\n");
			printf("---------------------------------------------\n");
			listarCargos(funcionarios);
			break;
			
		case 3:
			printf("\n---------------------------------------------\n");
			printf("\t      Listar funcion�rios\n");
			printf("---------------------------------------------\n");
			listarFuncionarios(funcionarios);
			break;
			
		case 4: 
			printf("\n---------------------------------------------\n");
			printf("\tListar funcion�rios por cargo\n");
			printf("---------------------------------------------\n");
			listarFuncionariosCargo(funcionarios);
			break;
			
		case 5: 
			printf("\n---------------------------------------------\n");
			printf("\t    Demiss�o de funcion�rio\n");
			printf("---------------------------------------------\n");
			//demissao();
			break;
			
		case 6: 
			printf("\n---------------------------------------------\n");
			printf("\t   Gerar folha de pagamento\n");
			printf("---------------------------------------------\n");
			//folhaPagamento();
			break;
			
		case 7: 
			printf("\n---------------------------------------------\n");
			printf("\t    Gerar recibo de sal�rio\n");
			printf("---------------------------------------------\n");
			//reciboSalario();
			break;
			
		case 0:
			printf("\n\nEncerrando sistema...");
			abort();
			break;
			
		default:
			printf("\nERRO! N�mero incorreto!\n");
			printf("S� � poss�vel digitar num�ros de 0 a 7!");
			printf("Tente novamente!");
			break;
		}	
}

void cadastroFuncionario(Funcionario *funcionarios){

	printf("Nome do funcion�rio: ");
	fgets(funcionarios[codigo].nome, 100, stdin);
	fflush(stdin);
	
	printf("Cargo do funcion�rio: ");
	fgets(funcionarios[codigo].cargo, 50, stdin);
	fflush(stdin);
	
	printf("Sal�rio do funcion�rio: ");
	scanf("%f", &funcionarios[codigo].salario);
	fflush(stdin);
	
	printf("Idade: ");
	scanf("%d", &funcionarios[codigo].idade);
	fflush(stdin);
	
	printf("CPF: ");
	scanf("%d", &funcionarios[codigo].cpf);
	fflush(stdin);
	
	codigo++;
}

/*void cadastroCargo(Funcionario *funcionarios){ //A parte do contador se torna um problema se separar assim
	
	printf("Cargo do funcion�rio: ");
	fgets(funcionarios[codigo].cargo, 50, stdin);
	fflush(stdin);
	
}
*/

void listarCargos(Funcionario *funcionarios){
	
	for(int i = 0; i < codigo; i++){
		printf("%d - %s\n", i + 1, funcionarios[i].cargo);
	}	
}

void listarFuncionarios(Funcionario *funcionarios){
	
	for(int i = 0; i < codigo; i++){
		printf("%d - %s\n", i + 1, funcionarios[i].nome);
	}
}

void listarFuncionariosCargo(Funcionario *funcionarios){ //Tem que consertar isso aqui
	
	for(int i = 0; i < codigo; i++){
		printf("%d - %s\n", i + 1, funcionarios[i].nome);
	}
	printf("\n");
	for(int i = 0; i < codigo; i++){
		printf("%d - %s\n", i + 1, funcionarios[i].cargo);
	}
}

void demissao(){
	printf("Testando demiss�o");
}

void folhaPagamento(){
	printf("Testando folha de pagamento");	
}

void reciboSalario(){
	printf("Testando recibo pagamento");
}


