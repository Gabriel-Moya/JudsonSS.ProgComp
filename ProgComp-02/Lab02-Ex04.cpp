//#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	// Alterando o código de página silenciosamente
	//system("chcp 1252 > nul");
	//SetConsoleCP(1252);
	//SetConsoleOutputCP(1252);

	// Exibindo uma frase que contém acentos
	cout << "Acentuação é possível?" << endl;

	// Leia uma palavra que contém acentos
	char palavra[40];
	cin >> palavra;

	// Exibindo a palavra lida
	cout << palavra << endl;

	return 0;
}