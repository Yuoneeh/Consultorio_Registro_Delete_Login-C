#include <stdio.h>

#include <stdlib.h>

#include <string.h>



int option_menu;

void processo_login(){
	printf("Processo de Login Inicializado \n");
	printf("Bem vindo ao Sistema Odonto Company \n");
	printf("O que deseja fazer? \n ");
	// Menu de opcoes
	printf("1-Login  \n ");
	printf("2-Cadastro  \n ");
	printf("3-Sair  \n ");	
	scanf("%d", &option_menu);
	
	switch(option_menu){
		case 1:
			logar();
			break;
		
		case 2:
			printf("Cadastrando...");
			break;
			
		case 3:
			printf("Saindo...");
			break;
	}
		
	
	
}

void logar(){
	printf("Logando...");
}
