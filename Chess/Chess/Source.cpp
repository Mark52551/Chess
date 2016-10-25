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
	bool whiteturn = true;
	
	Game begin;
	begin.welcome();
	begin.main_menu();
	//begin.display_player_color();
	begin.player_turn();
	

	Board myBoard;
	

	bool result;
	do
	{
		myBoard.display_board();
		do
		{
			string move = "m";
			string move1 = "M";
			string mov;
	
			cout << "E- Exit\n" "M- Move" << endl;
		
			cin >> mov;
			if (mov != move && mov != move1)
				exit(0);
			cout << "Choose piece (col) :";
		
			cin >> srcCol;
			cout << "Choose piece (row) :";
			cin >> srcRow;
			cout << "Choose target square (col) :";
			cin >> col;
			cout << "Choose target square (row) :";
			cin >> row;
			result = myBoard.pickLocation(srcCol, srcRow, col, row, whiteturn);
			if (!result)
				cout << "Error" << endl;
		} while (!result);
		myBoard.move(srcCol, srcRow, row, col);
		if (whiteturn)
			whiteturn = false;
		else
			whiteturn = true;

		
	} while (true);
	

	


	//Piece *pieceType = new bishop(true);   
	//cout << pieceType->getPiece();	



	
	cin.get();
	return 0;

}