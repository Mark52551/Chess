#pragma once
#include "Piece.h"
class queen :
	public Piece
{
public:

	queen();
	queen(bool);
	~queen();
	string getPiece();
};

