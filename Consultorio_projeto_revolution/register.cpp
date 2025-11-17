#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <fstream>

#include <iostream>

#include <fstream>

#include "loginP.h"

#include "main_menu.h"

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

void cadastrar_consulta(){
	
	string dia_consulta;
	string mes_consulta;
	string tipo_procedimento;
	int user_id;
	int line_count;

	
	ofstream myfile;
 

	int option_menu = 0;
	system("cls");
	cout << ("Cadastrando...\n");
	cout << ("Dando inicio ao processo de registro de consulta,\n 1- Continuar,\n 2- Sair : \n");
	cin >> ("%c", option_menu);
	
	switch(option_menu){
		case 1:
			myfile.open ("consultas_registradas.txt");
			cout << ("Marcar consulta \n");
			
			cout << ("Insira o tipo de procedimento: \n");
			cin >> (tipo_procedimento);
			
			cout << ("Insira o dia da consulta \n");
			cin >> (dia_consulta);
			
		
			cout << ("Insira o mês da consulta: \n");
			cin >> (mes_consulta);
			
		
			cout << ("Marcado com Sucesso");	
			
			myfile << (tipo_procedimento) << ";" << (dia_consulta) << ";" << (mes_consulta) << ";" << "\n";
			
			myfile.close();
			
			break;
			
		case 2:
			myfile.open ("consultas_registradas.txt");
			cout << ("Saindo...");
			break;
			
	
	}
	system("cls");
	main_menu();
	
}
