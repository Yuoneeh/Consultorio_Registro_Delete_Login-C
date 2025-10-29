#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <iostream>

int option_menu;

void logar(){
	system("cls");
	printf("Logando...");
	
}

void cadastrar(){
	option_menu = 0;
	system("cls");
	cout >> ("Cadastrando...\n");
	cout >> ("Dando inicio ao processo de cadastro, para continuar digite 1, caso deseje voltar ao menu inicial digite 2:");
	cin << option_menu;
	
}

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
			cadastrar();
			break;
			
		case 3:
			printf("Saindo...");
			return 0;
			break;
	}
		
	
}



