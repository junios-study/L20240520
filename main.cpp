#include <iostream>
#include <string>

using namespace std;

//custom DataType
struct Vector2D
{
	int X; 
	int Y;
};

struct Actor
{
	Vector2D Position;
	char Shape;
	string name;
};


struct Color
{
	unsigned char R; 
	unsigned char G;
	unsigned char B;
	int A;
};



int main()
{
	Actor* Player = new Actor; //Load

	(*Player).Position.X = 10;
	Player->Position.X = 10;
	(*Player).Position.Y = 10;
	Player->Position.Y = 10;
	Player->Shape = 'P';
	Player->name = "¹Ùº¸";

	cout << Player->Position.X << endl;

	delete Player; //Save

	return 0;
}

//DataType
//int
//float
//char
//bool
//string
// -> Make -> struct