#pragma once
#include "Piece.h"
class pawn :
	public Piece
{
public:

	pawn();
	pawn(bool);
	~pawn();
	string getPiece();

};

