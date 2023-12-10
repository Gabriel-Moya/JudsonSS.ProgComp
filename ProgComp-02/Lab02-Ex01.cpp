#include <iostream>
using namespace std;

void PrintExerciseWithEndl();
void PrintExerciseWithBarN();

int main()
{
	cout << "Print Exercise with endl" << endl;
	PrintExerciseWithEndl();
	cout << endl;

	cout << "Print Exercise with \\n" << endl;
	PrintExerciseWithBarN();
 
	return 0;
}

void PrintExerciseWithEndl()
{
	cout << "Bem-vindo" << endl << "ao mundo" << endl << "C++" << endl;
}

void PrintExerciseWithBarN()
{
	cout << "Bem-vindo\nao mundo\nC++\n";
}
