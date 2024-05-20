#include <iostream>

using namespace std;

int A;

int main()
{

	int A = 0;
	int* P = new int;

	*P = 10;

	cout << *P << endl;


	
	delete P;

	return 0;
}
