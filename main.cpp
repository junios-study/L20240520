#include <iostream>
#include <vector>
#include <list>

using namespace std;


//STL


int main()
{
	vector<int> IntArray;

	IntArray.push_back(1);
	IntArray.push_back(5);
	IntArray.push_back(3);
	IntArray.push_back(2);
	IntArray.push_back(4);


	cout << IntArray[0] << endl;
	cout << IntArray[1] << endl;
	cout << IntArray[2] << endl;
	cout << IntArray[3] << endl;
	cout << IntArray[4] << endl;

	list<int> IntList;
	IntList.push_back(1);
	IntList.push_back(5);
	IntList.push_back(3);
	IntList.push_back(2);
	IntList.push_back(4);
	IntList.insert(find(IntList.begin(), IntList.end(), 2), 10);


	for (auto& Data : IntList)
	{
		cout << Data << endl;
	}




	return 0;
}