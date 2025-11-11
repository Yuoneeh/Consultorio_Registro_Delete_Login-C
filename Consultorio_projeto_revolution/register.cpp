#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <fstream>

#include <iostream>

#include <fstream>

#include "loginP.h"

using namespace std;



void cadastrar(){
	
	string user_username;
	string user_password;
	int user_id;
	int line_count;

	
	ofstream myfile;
 

	
	int option_menu = 0;
	system("cls");
	cout << ("Cadastrando...\n");
	cout << ("Dando inicio ao processo de cadastro,\n 1- Continuar,\n 2- Sair : \n");
	cin >> ("%c", option_menu);
	
	switch(option_menu){
		case 1:
			myfile.open ("user_login_data.txt");
			cout << ("Criar conta \n");
			
			cout << ("Insira seu novo Login: \n");
			cin >> (user_username);
			
		
			cout << ("Insira sua nova Senha: \n");
			cin >> (user_password);
			
		
			cout << ("Registrado com Sucesso");	
			
			myfile << (user_username) << ";" << (user_password) << ";" << "\n";
			
			myfile.close();
			
			break;
			
		case 2:
			cout << ("Saindo...");
			break;
			
	
	}
	system("cls");
	processo_login();
	
}
