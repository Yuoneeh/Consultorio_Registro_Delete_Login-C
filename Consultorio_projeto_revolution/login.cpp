#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <fstream>

#include <iostream>

#include <fstream>

using namespace std;

char user_in;
char user_correto;
char senha_in;
char senha_correto;

void login(){
	ofstream userf("user_login_data");
	system("cls");
	
	cout << ("Insira seu Usuario: \n");
	cin >> (user_in);
	
	cout << ("Insira sua Senha: \n");
	cin >> (senha_in);
	
	
}
