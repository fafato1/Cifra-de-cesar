#include <iostream>
#include <string>

using namespace std;

void decifrando(){
	string frase;
	int digipular;
	cout << "digite uma palavra: ";
	getline (cin,frase);
	cout << "digite quantos caracteres quer pular: ";
	cin >> digipular;
	for(int i = 0; i < frase.length(); i++){
		cout << static_cast<char>(frase[i] - digipular);
	}
	cout << endl;
}