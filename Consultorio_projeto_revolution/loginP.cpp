#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <fstream>

#include <iostream>

#include <fstream>

#include "register.h"

#include "login.h"

using namespace std;

int option_menu;


void processo_login (){
	cout << ("Processo de Login Inicializado \n");
	cout << ("Bem vindo ao Sistema Odonto Company \n");
	cout << ("O que deseja fazer? \n ");
	// Menu de opcoes
	cout << ("1-Login  \n ");
	cout << ("2-Cadastro  \n ");
	cout << ("3-Sair  \n ");	
	cin >> ("%d", option_menu);
	
	switch(option_menu){
		case 1:
			login();
			break;
		
		case 2:
			cadastrar();
			break;
			
		case 3:
			cout << ("Saindo...");
		//	return 0;
			break;
	}

	

		
			
}



