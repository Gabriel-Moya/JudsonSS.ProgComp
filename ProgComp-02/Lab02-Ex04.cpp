//#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	// Alterando o c�digo de p�gina silenciosamente
	//system("chcp 1252 > nul");
	//SetConsoleCP(1252);
	//SetConsoleOutputCP(1252);

	// Exibindo uma frase que cont�m acentos
	cout << "Acentua��o � poss�vel?" << endl;

	// Leia uma palavra que cont�m acentos
	char palavra[40];
	cin >> palavra;

	// Exibindo a palavra lida
	cout << palavra << endl;

	return 0;
}