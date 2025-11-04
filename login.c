#include <stdio.h>

#include <stdlib.h>

#include <string.h>


int option_menu;
int user_in;
int user_correto;
int senha_in;
int senha_correto;


void logar(){
	system("cls");
	prinf ("Insira seu Usuario: ");
	scanf ("%c", user_in);
	
	printf("Logando...");
	
}

void cadastrar(){
	option_menu = 0;
	system("cls");
	printf("Cadastrando...\n");
	printf("Dando inicio ao processo de cadastro, para continuar digite 1, caso deseje voltar ao menu inicial digite 2:");
	scanf ("%c", option_menu);
	
}

int processo_login(){
	printf ("Processo de Login Inicializado \n");
	printf ("Bem vindo ao Sistema Odonto Company \n");
	printf ("O que deseja fazer? \n ");
	// Menu de opcoes
	printf ("1-Login  \n ");
	printf ("2-Cadastro  \n ");
	printf ("3-Sair  \n ");	
	printf ("%d", &option_menu);
	
	switch(option_menu){
		case 1:
			logar();
			break;
		
		case 2:
			cadastrar();
			break;
			
		case 3:
			printf("Saindo...");
			break;
	}
		
			
}


