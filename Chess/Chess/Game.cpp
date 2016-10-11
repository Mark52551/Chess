#include "Game.h"
#include <iostream>
using namespace std;

void Game::welcome()
{
	cout << "Welcome to Chess!\n" << endl;
	
}

void Game::display_player_color()
{
	cout << "Player 1: White" << endl;
	cout << "Player 2: Black" << endl;
	cout << " " << endl;

}

void Game::player_turn()
{
	cout << "White Player, You will go first!" << endl;
	cout << " " << endl;
}

void Game::main_menu()
{
		char choice[2];

		cout << "Menu:" << endl;
		cout << "S- Start Game" << endl;
		cout << "M- Move" << endl;
		cout << "E- End Game" << endl;
		cin >> choice;

		if (choice[0] == 's')
		{
			system("CLS");
			cout << "Start";
			//system("PAUSE");
			system("CLS");
		}

		else if (choice[0] == 'm')
		{
			system("CLS");
			cout << "Move";
			//system("PAUSE");
			system("CLS");
		}
		else if (choice[0] == 'e')
		{
			system("CLS");
			cout << "EXIT";
			//system("PAUSE");
			system("CLS");
		}
		else if (choice[0] > 'e' || choice[0] < 's')//validation
		{
			system("CLS");
			cout << "Invalid Input\n\n";
			//system("PAUSE");
			system("CLS");

		}
		else
		{
			system("CLS");
			cout << "Invalid Input\n\n";
			//system("PAUSE");
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
