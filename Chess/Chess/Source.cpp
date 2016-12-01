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

	Board myBoard;
	Game begin;
	begin.welcome();
	bool loop = false;
	do {
		try
		{
			begin.main_menu(myBoard);
		}
		catch (const std::string& error)
		{
			system("CLR");
			cout << error;
			system("PAUSE");
			begin.main_menu(myBoard);
			loop = true;
		}
	} while (loop);

	
	
	bool result;
	myBoard.display_board();
	do
	{

		try {

			string move = "m";
			string move1 = "M";
			string exit1 = "e";
			string exit2 = "E";
			string undo1 = "u";
			string undo2 = "U";
			char write1 = 'w';
			char write2 = 'W';
			string mov;

			do
			{

				cout << endl << "E/e-Exit     M/m-Move    U/u-Undo    W/w-Write    " << endl;
				cout << "**W/w...wfile.txt**" << endl;

				cin >> mov;

				if (mov[0] == write1 || mov[0] == write2)
				{
					myBoard.saveFile(mov);
					result = true;
				}

				else if (mov == exit1 || mov == exit2)
					exit(0);
				else if (mov == undo1 || mov == undo2)
				{
					myBoard.moveUndo();
					result = true;
				}
				else if (mov == move || mov == move1)
				{
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
				}
				else
				{
					throw string("Invalid input!");
				}
				if (!result)
				{
					throw string("That is an invalid move!...Choose a correct square and piece color.");
				}
				else {
					if (mov == move || mov == move1) {
						myBoard.move(srcCol, srcRow, col, row);
					}
					myBoard.display_board();
				}
			} while (!result);
			if (mov == move || mov == move1)
			{
				cout << "Piece moved to: " << col << "," << row << endl;
				whiteturn = !whiteturn;
			}
		}
		catch(string & s)
		{
			cout << "Error= " << s << endl;
			continue;
		}
	
		} while (true);
	
	cin.get();
	return 0;

}