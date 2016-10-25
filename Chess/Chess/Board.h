#pragma once
#include <iostream>
#include "Piece.h"
#include "bishop.h"
#include "king.h"
#include "knight.h"
#include "pawn.h"
#include "queen.h"
#include "rook.h"
using namespace std;

const int board_size = 8;

class Board
{
public:
	/*const int SquareWidth = 4;
	const int SquareHeight = 3;*/
	void display_board();
	//void display_piece();
	bool pickLocation(int, int, int, int, bool);
	bool move(int, int, int, int);
	
	Board();

	~Board();
	

private:
	Piece * board[board_size][board_size];







	
};

