#include <iostream>
#include <string>

using namespace std;

//52 1-13 A  10 J Q K
//Diamond  // 0
//Spade  // 1
//Clova //2
//Heart //3

int PlayerCard[10] = { 0, };
int ComputerCard[10] = { 0, };

int PlayerTotal = 0;
int ComputerTotal = 0;

int Cards[52] = { 0, };

string CardType[4] = {"¡ß", "¢¼", "¢À", "¢¾"};



void Shuffle()
{
	CardType[0]; 
	for (int i = 0; i < 52; ++i)
	{
		Cards[i] = i;
	}

	for (int i = 0; i < 10000; ++i)
	{
		int FirstCard = rand() % 52;
		int SecondCard = rand() % 52;
		int Temp = Cards[FirstCard];
		Cards[FirstCard] = Cards[SecondCard];
		Cards[SecondCard] = Temp;
	}

}

int DefineType(int CardNumber)
{
	return CardNumber / 12;
}

int DefineCard(int CardNumber)
{
	return ((CardNumber % 12) + 1);
}

void DrawCard()
{
	int CardCount = 0;
	for (int i = 0; i < 2; ++i)
	{
		PlayerCard[i] = Cards[CardCount];
		PlayerTotal += DefineCard(PlayerCard[i]);
		CardCount++;
	}

	for (int i = 0; i < 2; ++i)
	{
		ComputerCard[i] = Cards[CardCount];
		ComputerTotal += DefineCard(ComputerCard[i]);
		CardCount++;
	}
}

void DetermineGame()
{
	if (ComputerTotal > 21)
	{
		cout << "½Â¸®" << endl;
	}
	else if (ComputerTotal <= 21 && PlayerTotal > 21)
	{
		cout << "ÆÐ¹è" << endl;
	}
	else //if (ComputerTotal <= 21 && PlayerTotal <= 21)
	{
		if (ComputerTotal > PlayerTotal)
		{
			cout << "ÆÐ¹è" << endl;
		}
		else
		{
			cout << "½Â¸®" << endl;
		}
	}
}

void ShowCard()
{
	cout << "Player" << endl;
	for (int i = 0; i < 2; ++i)
	{
		cout << CardType[DefineType(PlayerCard[i])];
		cout << DefineCard(PlayerCard[i])  << endl;
	}

	cout << "Computer" << endl;
	for (int i = 0; i < 2; ++i)
	{
		cout << CardType[DefineType(ComputerCard[i])];
		cout << DefineCard(ComputerCard[i]) << endl;
	}


}


int main()
{
	srand(time((time_t*)nullptr));

	Shuffle();
	DrawCard();
	ShowCard();
	DetermineGame();


	return 0;
}
