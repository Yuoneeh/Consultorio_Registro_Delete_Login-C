#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <fstream>

#include <iostream>

#include <fstream>

using namespace std;



void cadastrar(){
		
	fstream MyFile("Contas.txt");

	MyFile << "Teste muito irado";

	
	int option_menu = 0;
	system("cls");
	cout << ("Cadastrando...\n");
	cout << ("Dando inicio ao processo de cadastro, 1- Continuar, 2- Sair :");
	cin >> ("%c", option_menu);
	
	switch(option_menu){
		case 1:
			cout << ("Continuando...\n");
			break;
		
		case 2:
			cout << ("Saindo...");
			break;
			
	
	}
	
	cout << ("Seguindo com o registro...");
	
}
