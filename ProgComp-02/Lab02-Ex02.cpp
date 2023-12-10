#include <iostream>
using namespace std;

void PrintExerciseInThreeLines();
void PrintExerciseInOneLine();

int main()
{
	cout << "Print Exercise with three couts and three lines" << endl;
	PrintExerciseInThreeLines();
	cout << endl;

	cout << "Print Exercise with three couts but one line" << endl;
	PrintExerciseInOneLine();
 
	return 0;
}

void PrintExerciseInThreeLines()
{
	cout << "Bem-vindo" << endl;
	cout << "ao mundo" << endl;
	cout << "C++" << endl;
}

void PrintExerciseInOneLine()
{
	cout << "Bem-vindo ";
	cout << "ao mundo ";
	cout << "C++" << endl;
}