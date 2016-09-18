#pragma once
#include <iostream>
#include "Piece.h"
using namespace std;

class Game
{

	int board[8][8];
	int display_board;
	int display_piece;
	int begin_game;

public:

	Game();
	~Game();
};

