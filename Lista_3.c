#include<stdio.h>
#include<locale.h>

char nome[100], endereco[100], corBlusa, corCalca, blusa[100];
int senha, menu, telefone, cor_nike, calca, pagamento, contador;

main(void) {
	setlocale(LC_ALL, "");
	printf("Para efetuar o login, digite sua senha: \n");
	scanf("%i", &senha);
	
	if (senha == 123) {
		contador = 1;
	}
	
	while(senha == 123) {
		
		if (contador == 1) {
			printf("SENHA CORRETA\n\n");
		} else{
			printf("Menu\n\n");
		}
		
		printf("1- Cadastro cliente\n");
		printf("2 - Compra de Blusas\n");
		printf("3 - Compra de Calças\n");
		fflush(stdin);
		scanf("%i", &menu);
		
		switch(menu) {
			case 1 : {
				system("cls");
				printf("Digite o nome do cliente: \n");
				fflush(stdin);
				gets(nome);
				printf("Digite o telefone do cliente: \n");
				fflush(stdin);
				scanf("%i", &telefone);
				printf("Digite o endereço do cliente: \n");
				fflush(stdin);
				gets(endereco);
				break;
				system("cls");
			}
			case 2 : {
				system("cls");
				printf("1- Blusa Nike (nike)\n");
				printf("2 - Blusa Adidas (adidas)\n");
				printf("3 - Blusa Puma (puma)\n");
				gets(blusa);
				
				if (blusa == "nike") {
					printf("Qual a cor da blusa? \n");
					printf("Azul código da cor: (1234) \n");
					printf("Branca código da cor: (2345)\n");
					printf("Preta código da cor: (3456)\n");
					scanf("%i", &cor_nike);
					
					
					switch (cor_nike) {
						case 1234 :
							printf("Você escolheu a cor azul");
							break;
						
						case 2345 :
							printf("Você escolheu a cor branca");
							break;
						
						case 3456 :
							printf("Você escolheu a cor preta");
							break;
						
					}
				}
				if ((cor_nike == 1234) || (cor_nike == 2345) || (cor_nike == 3456)) {
						printf("Escolha a forma de pagamento: \n");
						printf("1) Cartão de crédito: \n");
						printf("2) Pix: \n");
						printf("3) Boleto: \n");
						scanf("%i", &pagamento);
					} else {
						printf(" ");
					}
				}
				break;
			}
			
			if (senha == 123) {
			contador = contador + 1;
			}
			
			system("cls");
	}
}
