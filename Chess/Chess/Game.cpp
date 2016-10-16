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

		cout << "Menu:" << endl;
		cout << "S- Start Game" << endl;
		//cout << "M- Move" << endl;
		//cout << "E- End Game" << endl;
		cout << " " << endl;
		string input;
		cin >> input;
		string start = "s";
		string start1 = "S";
	
		
		if ( input == start || input == start1)
		{
			system("CLS");
			cout << "Welcome to Chess!" << endl;
			//system("PAUSE");
			
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

Game::Game()
{
}


Game::~Game()
{
}
