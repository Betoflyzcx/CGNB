/*
* File:   main.cpp
* Author: Alberto Garcia
* Created on July 14, 2016, 4:27 PM
* Purpose: Console Game with NeBeans IDE ['Tick-Tack-Toe']
*/

// System Libraries
#include <iostream> // Input/Output Library
#include <string> // Include string Libraries
#include <cmath> // Include Math Libraries

using namespace std; //Namespace of the System Libraries

//User Libraries



//Global Constants



//Function Prototypes
void MapDraw(int x, int y);

void AI();

void GameLogic(int Turn);

bool Chk_Spot(short x);

// Execution Begins Here!
int main(int argc, char** argv) {
	//Declare variables
	int x;
	int y;

	short Turn;  // Player 1's && Player2's Turn  
	short P_or_A;

	//Input Data
	cout << "Enter the Length for the map\\t MAX FOR 'L' AND 'W' IS 20! \n";
	cin >> x;
	cout << "Now Enter the Width for the Map"\n;
	cin >> y;
	cout << "Are You playing against someone or do you wish to play against an 'ai'";
	cout << "\n\n \t Enter 1 For Playing another 'Player' \t Enter 2 For playing an 'AI'";
	cin >> P_or_A; // Play another Player or an 'Ai'

	cout << "Ready?\t Set \t Go !!\t\n";


	//Output
	switch (Turn) {
	case1: // Player 1's Turn
		cout << "It's Player 1's Turn";


		GameLogic(Turn);
		Turn += 1; // Go's To player 2's Turn 
		break;

	case2: // Player 2's Turn
		cout << "It's Player 2's Turn";
		switch (P_or_A)
		{

		case 1: // Player vs Player Logic    
			cout << "It's Player 2's Turn";
			GameLogic(Turn);



		case 2: // Player plays an 'AI' 
			AI();
		default:
			cout << "You never entered a valid entry for which you wish to play";
			cout << "'Player' or 'AI' \t";
			cin >> P_or_A

		}

		Turn -= 1; // Go's Back to Player 1's Turn
		break;


	}


	MapDraw(x, y); //Maps Length and Width


				   //Exit Stage Right!
	return 0;
}

void MapDraw(int x, int y)
{
	for (int i = 0; i < y; i++)
	{
		for (int i = 0; i <x; i++)
		{

		}
		cout << endl;
	}
}
void GameLogic(int Turn) // Logic of Game/Rules/ (Decides when you win or lose!)
{
	char Trk_Mves[9];
	short Spot_Mve; // The spot in which the player decided to pick
	char type; // Decided whether the player used an 'x' or 'c'

			   // Input Where the player will move
	while (Chk_Spot(Spot_Mve) == "True") { cin >> Spot_Mve; } // Checks if the spot Has been used

	if (Turn == 1) { type = 'O'; } // Draws a Circle if it's P1's Turn
	else { type = 'X'; } // Draws an 'X' if it's P2's Turn

	Trk_Mves[Spot_Mve] = type; // Puts the shape on the point

	for (int i = 0; i < 10; i++) { // Checks if the Player Wins
		if (Trk_Mves[i] == )

	}

}

void AI() {  // The AI LOGIC


}

string Chk_Spot(short x)
{
	int Ctr = 0;
	bool Chk[9];

	if (!Chk[x]) { Chk[x] = true; return "false"; } // Marks the Spot that was used

	else if (Ctr > 0) {
		cout << "\n \n Try Again! It appears that someone has already used that spot\n\t";
		cout << "What Spot do you choose: \t Choose 1-9 \nEx:\t 1 2 3\n   \t 4 5 6 \n   \t 7 8 9\n\n";
		return "True";
	}

	else {
		cout << "What Spot do you choose: \t Choose 1-9 \nEx:\t 1 2 3\n   \t 4 5 6 \n   \t 7 8 9\n\n";
		return "True";
		Ctr++;
	}
}