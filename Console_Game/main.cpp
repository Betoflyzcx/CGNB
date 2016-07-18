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
void DrawMap(int x, int y);

void AI();//Finish

void GameLogic(short Turn, short x, short y);

string Chk_Spot(short x);

// Execution Begins Here!
int main(int argc, char** argv) {
	//Declare variables
	short x;
	short y;

	short Turn = 1;  // Player 1's && Player2's Turn  
	short P_or_A;

	//Input Data
	cout << "Enter the Length for the map\t\t MAX FOR 'L' AND 'W' IS 20! \n";
	cin >> x;
	cout << "Now Enter the Width for the Map\n";
	cin >> y;
	cout << "Are You playing against someone or do you wish to play against an 'ai'";
	cout << "\n\n \t Enter 1 For Playing another 'Player' \t Enter 2 For playing an 'AI'";
	cin >> P_or_A; // Play another Player or an 'Ai'

	cout << "Ready?\t Set \t Go !!\t\n";


	//Output
	switch (Turn) {
	case 1: // Player 1's Turn
		cout << "It's Player 1's Turn";


		GameLogic(Turn, x, y);
		Turn += 1; // Go's To player 2's Turn 
		break;

	case 2: // Player 2's Turn
		cout << "It's Player 2's Turn";
		switch (P_or_A)
		{

		case 1: // Player vs Player Logic    
			cout << "It's Player 2's Turn";
			GameLogic(Turn, x, y);



		case 2: // Player plays an 'AI' 
			AI();
		default:
			cout << "You never entered a valid entry for which you wish to play";
			cout << "'Player' or 'AI' \t";
			cin >> P_or_A;

		}

		Turn -= 1; // Go's Back to Player 1's Turn
		break;


	}



	//Exit Stage Right!
	return 0;
}

void DrawMap(short x, short y, short Spot_Mve, char type) // Draws Tic Tac Toe Map
{
	char Trk_Mves[9]; // Graph of the points
	char Map[x][y];
	Trk_Mves[Spot_Mve] = type; // Repeated code, points at spot 'x' or 'o' was placed at

	for (int i = 0; i < y; i++)
	{
		for (int i = 0; i <x; i++)
		{
			Map[x][y] = 'x';//(wicked)This is only to be used for desiging make emtpy later
			cout << Map[x][y];
		}
		cout << endl;
	}
}
void GameLogic(short Turn, short x, short y) // Logic of Game/Rules/ (Decides when you win or lose!)
{
	char Trk_Mves[9];
	short Spot_Mve; // The spot in which the player decided to pick
	char type; // Decided whether the player used an 'x' or 'c'

			   // Input Where the player will move
	while (Chk_Spot(Spot_Mve) == "True") { cin >> Spot_Mve; } // Checks if the spot Has been used

	if (Turn == 1) { type = 'O'; } // Draws a Circle if it's P1's Turn
	else { type = 'X'; } // Draws an 'X' if it's P2's Turn

	Trk_Mves[Spot_Mve] = type; // Puts the shape on the point

	DrawMap(x, y, Spot_Mve, type); // Draws the spot the x's and o's will go

	for (int i = 0; i < 10; i++) { // Checks if the Player Wins
		if (Trk_Mves[i] == 0) {}//didn't finish line o put random(wicked) finish delete '0'

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