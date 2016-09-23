#pragma once
#pragma once
#include "Game.h"
using namespace std;


class Piece
{
public:
	//the functions that will be used to get the piece and move
	

	

	enum Color
	{
		white, black
	};

	enum PieceType {
		pawn, rook, knight, bishop, queen, king
	};



	Piece();
	~Piece();
};

