#pragma once
#include <iostream>
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


	void Piece::getPiece()
	{
		//this will get the piece 
	}

	void Piece::getColor()
	{
		//this will get the color of the piece
	}
	void Piece::move()
	{
		//this will move the piece
	}


	void Piece::moveValid()
	{
		//this will be a boolean on whether the piece will be able to move or not
	}
	 
	void Piece::eatPiece()
	{
		//this will eat the piece
	}



	Piece();
	~Piece();
};

