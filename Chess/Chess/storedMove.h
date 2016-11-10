#pragma once
#include "Piece.h"
struct storedMove
{

	Piece* pieceMoved;
	Piece* capturedPiece;
	storedMove* prevMove;
	storedMove* nextMove;
	int srcRow;
	int srcCol;
	int row;
	int col;
	
};

