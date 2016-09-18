#pragma once
#include <iostream>
#include "Piece.h"
using namespace std;

class Game
{
	int board([8][8]);

public:

	void display_board(int board[8][8])
	{
		//Here I will chose how I want to display my board.
	}

	void display_piece()
	{
		//this will display the pieces on the board
	}
	void begin_game()
	{
		//this will begin the game
	}

	Game();
	~Game();
};

