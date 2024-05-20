#include <iostream>
#include <string>

using namespace std;

int main()
{
	//C++, BP
	//int, float , bool, char, string
	string Message = "안녕하세요.";
	string Message2 = "세상아";

	cout << Message + Message2 << endl;

	//char H[5] = { 'H', 'E', 'L', 'L', 'O' };

	//for (int i = 0; i < 5; ++i)
	//{
	//	cout << H[i];
	//}
	//cout << endl;

	//char M[6] = { 'H', 'E', 'L', 'L', 'O', '\0'};
	char M[6] = { "HE\nLO" }; 

	cout << M << endl;

	//for (int i = 0; i < 6; ++i)
	//{
	//	if (M[i] == 0)
	//	{
	//		cout << i << endl;
	//		break;
	//	}
	//}
	//cout << strlen(M) << endl;

	

	return 0;
}
