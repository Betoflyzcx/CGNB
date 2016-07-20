/*
* File:   main.cpp
* Author: Alberto Garcia
* Created on July 14, 2016, 1:00 PM
* Purpose : Display A List Of Numbers
*/

//System Libraries
#include "stdafx.h"
#include <iostream> //Input/Output Library
#include <string>
using namespace std; //Namespace of the System Libraries
					 //User Libraries



					 //Global Constants



					 //Function Prototypes

void CheckTurn(int turn);
void DrawMap(char p_char, char uInput);


//Execution Begins Here!
int main(int argc, char** argv) {
	char Board[9] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	bool Used[9];
	char type;
	string Oppnnt;
	char L_input;
	short turn = 1;
	bool Chk = false;

	cout << "Enter whether you wish to play against an AI or another PLAYER";
	cout << "Enter:\t 1 For Player \t Enter:\t For AI ";
	cin >> Oppnnt;
	while (Chk == false)
	{
		if (Oppnnt != "2")
		{
			if (Oppnnt != "1")
			{
				cout << "Try Again Enter:\t 1 For Player \t Enter:\t 2 For AI "; // Keeps looping until Valid is entered!
				cin >> Oppnnt;
			}
		}
		if (Oppnnt == "1" || Oppnnt == "2")
		{
			Chk = true;
		}
	}
	switch (turn)
	{
	case 1: // Player 1's Turn
		type = 'O';
		cout << "It's Player 1's Turn \n\n\n";
		cout << "Choose a location: \t 1 2 3 \n \t 4 5 6 \n \t 7 8 9 \n \t";
		cin >> L_input;
		while (isdigit(L_input) == false)
		{
			cout << "Enter a valid number 1-9";
			cin >> L_input;
		}


		while (Used[L_input] == true) // Checks if someone has already used the point
		{
			cout << "It appears someone has already chosen that spot..\t choose another spot\t";
			cout << "1 2 3 \n \t 4 5 6 \n \t 7 8 9 \n \t:";
			cin >> L_input;
		}
		if (Used[L_input] == false) // If the point isn't used.... marks it used
		{
			Used[L_input] = true;
		}
		DrawMap(type, L_input);




	}

	//Exit Stage Right!
	return 0;
}
void DrawMap(char p_char, char uInput)//Requires a return of player character and the position he wants to place it
{
	int MapSize = 9;//Map y cordinate
	char Map[9];//Map for drawing tic tac toe
	for (int i = 0; i < 9; i++)
	{
		Map[i] = ' ';
	}

	for (int i = 0; i < MapSize; i++)
	{
		if (i % 3 == 0 && i != 0) { cout << endl; }//Add line skips when at 3

		Map[uInput] = p_char;//assign the player character(x or o) to the map
		cout << Map[i] << " ";//Draw the whole Map
	}
}
void CheckTurn(int turn)
{
	cout << "Player " << turn << "'s turn" << endl; //write the current players turn
}
