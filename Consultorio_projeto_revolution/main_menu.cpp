#include <stdio.h>

#include <windows.h>

#include <string.h>

#include <iostream>

#include <fstream>

#include "loginP.h"

using namespace std;

int main_option_menu;

void main_menu(){

	system("cls");
	cout << ("Bem vindo ao Sistema Odonto Company \n");
	cout << ("O que deseja fazer hoje? \n");
	// Menu de opcoes
	cout << ("1-Marcar Consulta \n");
	cout << ("2-Consultar consultas \n");
	cout << ("3-Sair \n");	
	cin >> ("%d", main_option_menu);
	
	switch(main_option_menu){
		
		case 1:
				cout << ("Marcando consulta...");
				break;
		case 2:
				cout << ("Consultando Consultas");
				break;
		case 3:
				break;
	}
	

}