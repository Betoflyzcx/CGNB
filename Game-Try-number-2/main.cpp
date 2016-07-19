/*
* File:   main.cpp
* Author: Alberto Garcia
* Created on July 14, 2016, 1:00 PM
* Purpose : Display A List Of Numbers
*/

//System Libraries
#include "stdafx.h"
#include <iostream> //Input/Output Library
using namespace std; //Namespace of the System Libraries
					 //User Libraries



					 //Global Constants



					 //Function Prototypes

void CheckTurn(int turn);
void DrawMap(char P_char, char L_input);


//Execution Begins Here!
int main(int argc, char** argv) {
	char Board[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	bool Used[9];
	char type;
	char Oppnnt;
	char L_input;
	short turn = 1;

	cout << "Enter whether you wish to play against an AI or another PLAYER";
	cout << "Enter:\t 1 For Player \t Enter:\t For AI";
	cin >> Oppnnt;
	while (!Oppnnt == '1' || !Oppnnt == '2')
	{
		cout << "Try Again Enter:\t 1 For Player \t Enter:\t 2 For AI"; // Keeps looping until Valid is entered!
		cin >> Oppnnt;
	}
	switch (turn)
	{
	case 1: // Player 1's Turn
		type = 'O';
		cout << "It's Player 1's Turn \n\n\n";
		cout << "Choose a location: \t 1 2 3 \n \t 4 5 6 \n \t 7 8 9 \n \t";
		cin >> L_input;
		short Chk;
		for (int i = 1; i < 10; i++) // Loops through to see if a valid number was put in 
		{
			if (L_input == i)
			{
				Chk += 1;    // if a valid number was put in then the while loop is skipped 
			}
			i = 1; // Makes it loop forever until a valid answer is entered
			while (Chk == 0)
			{
				cout << "Enter a valid number.. (1-9) ";
				cin >> L_input;
				Chk++;
			}
		} // if have erros try (Used(L_input == true)) <- in the inside like that 
		while (Used[L_input] == true) // Checks if someone has already used the point
		{
			cout << "It appears someone has already chosen that spot..\t choose another spot\t";
			cout << "1 2 3 \n \t 4 5 6 \n \t 7 8 9 \n \t:";
			cin >> L_input;
		}
		if (Used[L_input] == false) // If the point isn't used.... marks it used
		{
			Used[L_input] == true;
		}
		DrawMap(type, L_input);





	}

	//Exit Stage Right!
	return 0;
}
void DrawMap(char P_char, char L_input)
{
	for (int i = 0; i < i; i++)
	{
		for (int j = 0; j <; j++)
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
