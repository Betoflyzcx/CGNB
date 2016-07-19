/*
* File:   main.cpp
* Author: Alberto Garcia
* Created on July 14, 2016, 4:27 PM
* Purpose: Console Game with NetBeans IDE ['Tick-Tack-Toe']
*/

// System Libraries
#include <iostream> // Input/Output Library
#include <string> // Include string Libraries
#include <cmath> // Include Math Libraries

using namespace std; //Namespace of the System Libraries

//User Libraries



//Global Constants



//Function Prototypes

void AI();//Finish

void GameLogic(short Turn, short x, short y);

char Chk_Spot(short x, short Ctrl);

string Gme_Anlyze(short Spot_Mve, char type);

// Execution Begins Here!
int main(int argc, char** argv) {
	//Declare variables
	short x;
	short y;

	short Turn = 1;  // Player 1's && Player2's Turn  
	short P_or_A;

	//Input Data
	cout << "Are You playing against someone or do you wish to play against an 'ai'";
	cout << "\n\n \t Enter 1 For Playing another 'Player' \t Enter 2 For playing an 'AI'";
	cin >> P_or_A; // Play another Player or an 'Ai'

	cout << "Ready?\t Set \t Go !!\t\n";


	//Output
	while (Turn < 3) {
		switch (Turn) {
		case 1: // Player 1's Turn
			cout << "It's Player 1's Turn\t";


			GameLogic(Turn, x, y);
			Turn += 1; // Go's To player 2's Turn 
			break;

		case 2: // Player 2's Turn
			switch (P_or_A)
			{

			case 1: // Player vs Player Logic    
				cout << "It's Player 2's Turn\t";
				GameLogic(Turn, x, y);



			case 2: // Player plays an 'AI' 
				AI();
			

			}

			Turn -= 1; // Go's Back to Player 1's Turn
			break;


		}
	}



	//Exit Stage Right!
	return 0;
}

void GameLogic(short Turn, short x, short y) // Logic of Game/Rules/ (Decides when you win or lose!)
{
	char Trk_Mves[9];
	int Spot_Mve; // The spot in which the player decided to pick
	char type; // Decided whether the player used an 'x' or 'c'
	char T_F = 'F';
	short Ctrl;
	Ctrl = 0;            // Input Where the player will move
        bool Chk_T[9];
        
       /* cin >> Spot_Mve;
        while(i== 0){
        
        if(Spot_Mve > 9)
        {
          cout << "Enter a number larger than 0 and smaller than 10\n\n\t";
          cin >> Spot_Mve;
        }
        if(1 > Spot_Mve)
        {
          cout << "Enter a number larger than 0 and smaller than 10\n\n\t";
          cin >> Spot_Mve;
        }
       
        if(Spot_Mve >0 && Spot_Mve < 10) {i++;}
        }
        i--;*/
        
          short i = 0;
      
        while(i== 0){
            cout << "What Spot do you choose: \t Choose 1-9 \nEx:\t 1 2 3\n   \t 4 5 6 \n   \t 7 8 9\n\n";
	    cout << "\n \n Enter a number,(Don't pick the same spot as someone else)\n\t";
	    cin >> Spot_Mve;
	
        if (Chk_T[Spot_Mve] == false) { Chk_T[Spot_Mve] = true; i++;}
        }
        i =0;
        

	if (Turn == 1) { type = 'O'; } // Draws a Circle if it's P1's Turn
	else { type = 'X'; } // Draws an 'X' if it's P2's Turn


	string Chk;
	int c_wins1 = 0;
	int c_wins2 = 0;
	int ties = 0;

	Chk = Gme_Anlyze(Spot_Mve, type);

	if (Chk == "P1")
	{
		c_wins1 += 1;
		//[find way to display in right side always showing while playing!]
		cout << "\n\n\t Player 1 has:\t" << c_wins1 << " wins";
		cout << "\n\n\t Player 2 has:\t" << c_wins2 << " wins";
		cout << "\n\n\t Amount of ties:\t" << ties << "\n\n\n";
	}
	if (Chk == "P2")  // while playing!]
	{
		c_wins2 += 1;
		//[find way to display in right side always showing while playing!]
		cout << "\n\n\t Player 1 has:\t" << c_wins1 << " wins";
		cout << "\n\n\t Player 2 has:\t" << c_wins2 << " wins";
		cout << "\n\n\t Amount of ties:\t" << ties << "\n\n\n";
	}
	if (Chk == "tie")
	{
		ties += 1;
		//[find way to display in right side always showing while playing!]
		cout << "\n\n\t Player 1 has:\t" << c_wins1 << " wins";
		cout << "\n\n\t Player 2 has:\t" << c_wins2 << " wins";
		cout << "\n\n\t Amount of ties:\t" << ties << "\n\n\n";
	}





}

void AI() {  // The AI LOGIC


}



string Gme_Anlyze(short Spot_Mve, char type) {
	char Trk_Mves[9];
       
    
	Trk_Mves[Spot_Mve] = type;
        cout << "\n\n\n\t" << Trk_Mves[Spot_Mve] << "\n\n";
	short tie;
	 // Game Logic Parameters
	if (Trk_Mves[1]== 'O' && Trk_Mves[2]=='O'&& Trk_Mves[3]=='O'||
            (Trk_Mves[1]== 'O' && Trk_Mves[4]=='O'&& Trk_Mves[7]=='O')
            ||(Trk_Mves[3]== 'O' && Trk_Mves[6]=='O'&& Trk_Mves[9]=='O') 
            ||(Trk_Mves[1]== 'O' && Trk_Mves[5]=='O'&& Trk_Mves[9]=='O')
            ||(Trk_Mves[3]== 'O' && Trk_Mves[5]=='O'&& Trk_Mves[7]=='O'))
	{
		cout << "Player 1 won the game!";
		return "P1";
	} // Game Logic Parameters
	if (Trk_Mves[1]== 'X' && Trk_Mves[2]=='X'&& Trk_Mves[3]=='X'||
            (Trk_Mves[1]== 'X' && Trk_Mves[4]=='X'&& Trk_Mves[7]=='X')
            ||(Trk_Mves[3]== 'X' && Trk_Mves[6]=='X'&& Trk_Mves[9]=='X') 
            ||(Trk_Mves[1]== 'X' && Trk_Mves[5]=='X'&& Trk_Mves[9]=='X')
            ||(Trk_Mves[3]== 'X' && Trk_Mves[5]=='X'&& Trk_Mves[7]=='X'))
	{
		cout << "Player 2 won the game!";
		return "P2";
	}
	if(tie >6){
            return "tie";
        }
        tie+=1;
	
        return "false";

}
