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
	//begin.player_turn();
	undo stack;
	
	Board myBoard;
	bool result;
	do
	{
		myBoard.display_board();
		
		do
		{

			string move = "m";
			string move1 = "M";
			string exit1 = "e";
			string exit2 = "E";
			string undo1 = "u";
			string undo2 = "U";
			string mov;

			cout << "E- Exit\n" "M- Move" "U- Undo" << endl;

			cin >> mov;
			if (mov != move && mov != move1)
				cout << "Invalid input!" << endl;
			if (mov == exit1 || mov == exit2)
				exit(0);
			if (mov == undo1 || mov == undo2)
			{
				storedMove* correct;
				//bool success = stack.pop(correct);
				//get pieces and board coordinates from correct and put pieces back where they were
			}

			cout << "Choose piece (col) :";
			cin >> srcCol;
			cout << "Choose piece (row) :";
			cin >> srcRow;
			cout << "Choose target square (col) :";
			cin >> col;
			cout << "Choose target square (row) :";
			cin >> row;
			result = myBoard.pickLocation(srcCol, srcRow, col, row, whiteturn);
			cout << endl;
			if (!result)
				cout << "Error, That is an invalid move!...Choose a correct square and piece color." << endl;
		}while (!result);
		storedMove * smove = myBoard.move(srcCol, srcRow, col, row);
		stack.push(smove);
		cout << "Piece moved to: " << col << "," << row << endl;
		if (whiteturn)
			whiteturn = false;
		else
			whiteturn = true;
	} while (true);
	
	cin.get();
	return 0;

}