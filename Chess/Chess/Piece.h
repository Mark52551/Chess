#pragma once
#include <iostream>
#include "Game.h"
using namespace std;


class Piece
{
	int Color;
	int PieceType;
	int getPiece;
	int getColor;
	int move;
	int moveValid;
	int eatPiece;

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

