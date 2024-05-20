#include <iostream>
#include <memory> //C++
using namespace std;

void Maniplate(int* CountPoint)
{
	if (CountPoint)
	{
		*CountPoint = 200;
	}
}

int main()
{
	int* CountPoint = new int;

	if (CountPoint)
	{
		*CountPoint = 100;
	}

	Maniplate(CountPoint);
	cout << *CountPoint << endl;

	delete CountPoint;
	CountPoint = nullptr;
	if (CountPoint)
	{

	}

	return 0;
}
