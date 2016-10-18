#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

void Game::welcome()
{
	cout << "Welcome to Chess!\n" << endl;
	
}

void Game::display_player_color()
{
	//not using anymore
	//combined with player_turn() function
}

void Game::player_turn()
{
	cout << "Player 1: White" << endl;
	cout << "Player 2: Black" << endl;
	cout << " " << endl;
	cout << "White Player, You will go first!" << endl;
	cout << " " << endl;
}

void Game::main_menu()
{
		//char choice[2];
	string start = "s";
	string start1 = "S";
	string endgame = "e";
	string endgame1 = "E";
	string input;

	do 
	{
		cout << "Menu:" << endl;
		cout << "S- Start Game" << endl;
		cout << "M- Move" << endl;
		cout << "E- End Game" << endl;
		cout << " " << endl;
		
		cin >> input;
		
		if ( input == start || input == start1)
		{
			system("CLS");
			cout << "Welcome to Chess!" << endl;
			//system("PAUSE");
			
		}
		else if (input == endgame || input == endgame1)
		{
			exit(0);
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
