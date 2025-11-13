#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <fstream>

#include <iostream>

#include <fstream>

#include "main_menu.h"

using namespace std;

string user_in;
string user_correto;
string senha_in;
string senha_correto;

void login(){
	ofstream userf("user_login_data");
	system("cls");
	
	cout << ("Insira seu novo Login: \n");
	cin >> (user_in);
			
	cout << ("Insira sua nova Senha: \n");
	cin >> (senha_in);
	
	main_menu();
	
	

}
