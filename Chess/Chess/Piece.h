#pragma once
#include <iostream>
#include "Game.h"
using namespace std;


class Piece
{

public:
	//the functions that will be used to get the piece and move

	virtual void Piece::getPiece()
	{
		//this will get the piece 
	}

	string Piece::getLocation()
	{
		//this will get the location of the Piece
	}
	virtual void Piece::move()
	{
		//the virtual move function 
		//will be different for each piece
	}
	
	virtual void Piece::moveValid()
	{
		//this will be a boolean on whether the piece will be able to move or not
	}
	 
	virtual void Piece::eatPiece()
	{
		//this will eat the piece
	}

	Piece();
	~Piece();
};

