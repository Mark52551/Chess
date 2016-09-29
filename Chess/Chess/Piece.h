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


	virtual void Piece::getPiece()
	{
		//this will get the piece 
	}

	string Piece::getColor()
	{
		//this will get the color of the piece
	}
	virtual void Piece::move()
	{
		//the virtual move function 
		//will be different for each piece
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

