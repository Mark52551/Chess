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

Game::Game()
{
}


Game::~Game()
{
}
