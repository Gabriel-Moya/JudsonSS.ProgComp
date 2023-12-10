#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	// Assumindo que iremos sempre receber os argvs corretos [1] = "eu" e [2] = "amo"
	cout << argv[1] << " " << argv[2] << " programar!" << endl;

	return 0;
}
