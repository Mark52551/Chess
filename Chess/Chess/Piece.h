#pragma once
#include <iostream>
#include "Game.h"
using namespace std;


class Piece
{

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


	void getPiece()
	{
		//this will get the piece 
	}

	void getColor()
	{
		//this will get the color of the piece
	}
	void move()
	{
		//this will move the piece
	}

	void eatPiece()
	{
		//this will eat the piece
	}

	void moveValid()
	{
		//this will be a boolean on whether the piece will be able to move or not
	}




	Piece();
	~Piece();
};

