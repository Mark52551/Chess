#pragma once
#include "Game.h"
#include "Piece.h"	
#include "Board.h"
#include "bishop.h"
#include "king.h"
#include "queen.h"
#include "rook.h"
#include "pawn.h"
#include "knight.h"
#include <iostream>
using namespace std;

int main()
{
	int srcRow;
	int srcCol;
	int row;
	int col;
	
	Game begin;
	begin.welcome();
	begin.main_menu();
	//begin.display_player_color();
	begin.player_turn();
	

	Board myBoard;
	myBoard.display_board();
	bool result;
	do
	{
		cin >> srcCol >> srcRow >> row >> col;
		result = myBoard.move(srcCol, srcRow, row, col);
	} while (!result);

	//myBoard.move();

	


	//Piece *pieceType = new bishop(true);   
	//cout << pieceType->getPiece();	



	
	cin.get();
	return 0;

}