#include <iostream>

using namespace std;

void InsertAfter(int* Numbers, int Size, int Value)
{
	//���� �ڿ� �ڷ� �߰�
	int* Temp = new int[Size + 1];

	for (int i = 0; i < Size; ++i)
	{
		Temp[i] = Numbers[i];
	}
	Temp[Size] = Value;

	delete[] Numbers;
	Numbers = Temp;

	for (int i = 0; i < Size + 1; ++i)
	{
		cout << Numbers[i] << ",";
	}
}

int main()
{
	//[][][][][] //�ڷ� ����
	int Size = 10;
	int* Numbers = new int[Size];
	for (int i = 0; i < Size; ++i)
	{
		Numbers[i] = i + 1;
	}

	InsertAfter(Numbers, Size, 20);



	return 0;
}