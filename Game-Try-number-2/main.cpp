/*
* File:   main.cpp
* Author: Alberto Garcia
* Created on July 14, 2016, 1:00 PM
* Purpose : Display A List Of Numbers
*/

//System Libraries
#include <iostream> //Input/Output Library
using namespace std; //Namespace of the System Libraries
 //User Libraries



//Global Constants



//Function Prototypes

void CheckTurn(int turn);
void DrawMap(int x, int y);


//Execution Begins Here!
int main(int argc, char** argv) {
	CheckTurn(1);
	CheckTurn(2);
	DrawMap(5, 5);

	//Exit Stage Right!
	return 0;
}
void DrawMap(int x, int y)
{
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << "x ";
		}
		cout << endl;
	}
}
void CheckTurn(int turn)
{
	cout << "Player " << turn << "'s turn" << endl; //write the current players turn
}
