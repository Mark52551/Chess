#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

void Game::welcome()
{
	cout << "Welcome to Chess!\n" << endl;
	cout << "Player 1: White" << endl;
	cout << "Player 2: Black" << endl;
	cout << " " << endl;
	
}

void Game::display_player_color()
{
	//not using anymore
	//combined with player_turn() function
}

void Game::player_turn()
{
	cout << " " << endl;
	cout << "White Player, You will go first!" << endl;
	cout << " " << endl;
}

void Game::main_menu()
{
	string start = "s";
	string start1 = "S";
	string endgame = "e";
	string endgame1 = "E";
	string input;

	do 
	{
		cout << "Menu:" << endl;
		cout << "S- Start Game" << endl;
		//cout << "M- Move" << endl;
		cout << "E- End Game" << endl;
		cout << " " << endl;
		
		cin >> input;
		
		if ( input == start || input == start1)
		{
			system("CLS");
			cout << "Starting Game..." <<endl;
			cout << " " << endl;
			cout << "White Player, You will go first!" << endl;
			cout << " " << endl;
			//system("PAUSE");
			
		}
		if (input == endgame || input == endgame1)
		{
			exit(0);
		}
		if (input != start || input != start1 || input != endgame || input != endgame1)
		{
			cout << "" << endl;
		}
		else
		{
			system("CLS");
			cout << "Invalid Input\n\n";
			system("PAUSE");
			system("CLS");
		}
		
		cin.get();
	}
	while (input != start && input != start1 && input != endgame && input != endgame1);

}

Game::Game()
{
}


Game::~Game()
{
}
