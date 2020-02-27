#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string digitado;

void cifrando(string digito){
	for(int i = 0; i < digito.length(); i++){
		cout << static_cast<char>(digito[i] + 2);
	}
	cout << endl;
}

void decifrando(string digito){
	for(int i = 0; i < digito.length(); i++){
		cout << static_cast<char>(digito[i] - 2);
	}
}

void menu(){
	int entrada;
	do{
		cout << "Digite 1 para cifrar uma frase\n";
		cout << "Digite 2 para decifrar uma frase\n";
		cout << "Digite 0 para sair\n";
		cout << "Digite aqui: ";
		string buf;
	    getline(cin, buf);
	    stringstream sstr(buf);
	    sstr >> entrada;
	    
		switch(entrada){
		case 1:
			cout << "digite uma palavra: ";
			getline (cin,digitado);
			cifrando(digitado);
			break;
		case 2:
			cout << "digite a palavra cifrada: ";
			getline (cin,digitado);
			decifrando(digitado);
			break;
		default: 
			cout << "Digite um valor valido";
			break;
		}
	}while(entrada != 0);
}

int main()
{
	menu();
    return 0;       
}