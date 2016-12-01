#pragma once
#include <iostream>
#include "Piece.h"
#include "bishop.h"
#include "king.h"
#include "knight.h"
#include "pawn.h"
#include "queen.h"
#include "rook.h"
#include "storedMove.h"
#include "undo.h"
#include <fstream>
using namespace std;

const int board_size = 8;

class Board
{
public:
	/*const int SquareWidth = 4;
	const int SquareHeight = 3;*/
	void display_board();
	void moveUndo();
	//void display_piece();
	bool pickLocation(int, int, int, int, bool);
	void move(int, int, int, int);
	void saveFile(string);
	void loadFile(string);
	Board();

	~Board();
	

private:
	Piece * board[board_size][board_size];
	//Piece* dead[32];
	int numDead;
	undo turnHistory;






	
};

