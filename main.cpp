#include <iostream>
#include <string>
#include <sstream>
#include "cifrar.h"

using namespace std;

string digitado;

void menu(){
	int entrada;
	do{
		cout << "Digite 1 para cifrar uma frase\n";
		cout << "Digite 2 para decifrar uma frase\n";
		cout << "Digite 20 para sair\n";
		cout << "Digite aqui: ";
		string buf;
	    getline(cin, buf);
	    stringstream sstr(buf);
	    sstr >> entrada;
	    
		switch(entrada){
		case 1:
			cifrando();
			entrada = 0;
			break;
		case 2:
			cout << "digite a palavra cifrada: ";
			getline (cin,digitado);
			//decifrando(digitado);
			entrada = 0;
			break;
		case 20:
			cout << "\n\n\n\nFim de utiliza‡Æo";
			break;
		default: 
			cout << "Digite um valor valido";
			break;
		}
	}while(entrada != 20);
}

int main()
{
	menu();
    return 0;       
}