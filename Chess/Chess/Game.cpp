#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

//the function for the welcome
void Game::welcome()
{
	cout << "Welcome to Chess!\n" << endl;
	cout << "Player 1: White" << endl;
	cout << "Player 2: Black" << endl;
	cout << " " << endl;
	
}

void Game::player_turn()
{
	cout << " " << endl;
	cout << "White Player, You will go first!" << endl;
	cout << " " << endl;
}

void Game::main_menu(Board& board)
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
		cout << "E- End Game" << endl;
		cout << "Begin from Saved Game = sfile.txt" << endl;
		cout << endl;
		
		cin >> input;
		if (input[0] == 's' || input[0] == 'S' || input == "e" || input == "E")
		{ 
			system("CLS");
			if(strlen(input.c_str()) > 1)
			{
				board.loadFile(input);
			}
		}
		else { cout << "Please enter a valid command" << endl; }

		if ( input[0] == 's' || input[0] == 'S')
		{
			cout << endl;
			cout << "Starting Game..." <<endl;
			cout << " " << endl;
			cout << "White Player, You will go first!" << endl;
			cout << " " << endl;
			cout << "Press any key to continue..." << endl;
			cin.get();
		}
		if (input == endgame || input == endgame1)
		{
			exit(0);
		}
		if (input[0] != 's' || input[0] != 'S' || input != endgame || input != endgame1)
		{
			cout << "" << endl;
		}
		else
		{
			throw string("Invalid input\n");
			
		}
		
		cin.get();
	}
	while (input[0] != 's' && input[0] != 'S' && input != endgame && input != endgame1);

}

Game::Game()
{
}


Game::~Game()
{
}
