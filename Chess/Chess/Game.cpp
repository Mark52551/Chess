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
		cout << "E- End Game" << endl;
		cout << " " << endl;
		
		cin >> input;
		if (input == "s" || input == "S" || input == "e" || input == "E")
		{ 
			system("CLS");
		}
		else { cout << "Please enter a valid command" << endl; }

		if ( input == start || input == start1)
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
