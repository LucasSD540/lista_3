#include<stdio.h>
#include<locale.h>

char nome[100], endereco[100], corBlusa, corCalca;
int senha, menu, telefone, cor_nike, calca, pagamento, contador, blusa;

void cadastrarCliente() {
	printf("Digite o nome do cliente: \n");
	fflush(stdin);
	gets(nome);
	printf("Digite o telefone do cliente: \n");
	fflush(stdin);
	scanf("%i", &telefone);
	printf("Digite o endereço do cliente: \n");
	fflush(stdin);
	gets(endereco);
}

void escolherBlusa() {
	printf("Escolha a blusa: \n");
	printf("1 - Blusa Nike \n");
	printf("2 - Blusa Adidas \n");
	printf("3 - Blusa Puma \n\n");
	fflush(stdin);
	scanf("%i", &blusa);
	
	printf("Escolha a cor da blusa \n");
	printf("1 - Azul \n");
	printf("2 - Branca \n");
	printf("3 - Preta \n\n");
	fflush(stdin);
	scanf("%i", &corBlusa);
	
	printf("Escolha a forma de pagamento: \n");
	printf("1) Cartão de crédito: \n");
	printf("2) Pix: \n");
	printf("3) Boleto: \n");
	scanf("%i", &pagamento);
}

void escolherCalca() {
	
}

main(void) {
	setlocale(LC_ALL, "");
	
	printf("Para efetuar o login, digite sua senha: \n");
	scanf("%i", &senha);
	
	while (senha != 123) {
		printf("ERRO DE SENHA \n");
		printf("Digite sua senha novamente: \n");
		scanf("%i", &senha);
	}
	
	if (senha == 123) {
		contador = 1;
	}
	
	system("cls");
	
	while(senha == 123) {
		
		if (contador == 1) {
			printf("SENHA CORRETA\n\n");
		} else{
			printf("Menu\n\n");
		}
		
		printf("1- Cadastro cliente\n");
		printf("2 - Compra de Blusas\n");
		printf("3 - Compra de Calças\n");
		printf("4 - Sair do programa\n");
		fflush(stdin);
		scanf("%i", &menu);
		
		switch(menu) {
			case 1 : 
				system("cls");
				cadastrarCliente();
				break;
			case 2 :
				system("cls");
				escolherBlusa();
				break;
			case 3 :
				system("cls");
				escolherCalca();	
				break;
					
			case 4 : 
				system("cls");
				printf("PROGRAMA FINALIZADO!");
				return 0;
			}
			
			if (senha == 123) {
			contador = contador + 1;
			}
			
			system("cls");
	}
}
