#include "Board.h"

void Board::display_board()
{
	cout << "******************CHESS******************" << endl;
	cout << "" << endl;
	


	for (int row=0; row < board_size; row++)
	{
		cout << row << "  |";
		
		for (int col = 0; col < board_size; col++)
		{
			
			if (board[row][col] != nullptr)
			{
				cout << " " << board[row][col]->getPiece()<< " |";
			}
			else
			{
				for (int i = 2; i < 3; i++)
					{
						cout << "    |";
					}
			}
		}
		cout << endl << endl;
	} 
	//cout << endl;
	cout << "  ";
	for (int i = 0; i < board_size; i++)
	{
		cout << "    " <<i;
	}

	cout << endl;
	

	/*for (int row = 0; row < board_size; ++row)
	{
		for (int col = 0; col < board_size; col++)
		{
			cout << "-----";
		}
		cout << "-" << endl;
		for (int col = 0; col < board_size; col++)
		{
			cout << "|" << "    ";
		}
		cout << "|" << endl;
		for (int col = 0; col < board_size; col++)
		{
			cout << "|" << "    ";
		}
		cout << "|" << endl;
		for (int col = 0; col < board_size; col++)
		{
			cout << "|" << "    ";
		}
		cout << "|" << endl;
	}
	for (int col = 0; col < board_size; col++)
	{
		cout << "-----";
	}
*/
	
	



	//what will be used in the function...board[0][0]->getPiece();
	////Here I will chose how I want to display my board.
	
	
}

//void Board::display_piece()
//{	
	//board[0][0]->getPiece();
	//board[0][0]->getPiece();
	//board[1][0]->getPiece();
	//board[2][0]->getPiece();
	//board[3][0]->getPiece();
	//board[4][0]->getPiece();
	//board[5][0]->getPiece();
	//board[6][0]->getPiece();
	//board[7][0]->getPiece();
//}

Board::Board()
{
	board[0][0] = new rook(true);
	board[0][1] = new knight(true);
	board[0][2] = new bishop(true);
	board[0][3] = new queen(true);
	board[0][4] = new king(true);
	board[0][5] = new bishop(true);
	board[0][6] = new knight(true);
	board[0][7] = new rook(true);

	board[1][0] = new pawn(true);
	board[1][1] = new pawn(true);
	board[1][2] = new pawn(true);
	board[1][3] = new pawn(true);
	board[1][4] = new pawn(true);
	board[1][5] = new pawn(true);
	board[1][6] = new pawn(true);
	board[1][7] = new pawn(true);

	for (int i = 2; i < 6; i++)
	{
		for (int j = 0; j < board_size; j++)
		{
			board[i][j] = nullptr;
		}
	}

	board[7][0] = new rook(false);
	board[7][1] = new knight(false);
	board[7][2] = new bishop(false);
	board[7][3] = new queen(false);
	board[7][4] = new king(false);
	board[7][5] = new bishop(false);
	board[7][6] = new knight(false);
	board[7][7] = new rook(false);

	board[6][0] = new pawn(false);
	board[6][1] = new pawn(false);
	board[6][2] = new pawn(false);
	board[6][3] = new pawn(false);
	board[6][4] = new pawn(false);
	board[6][5] = new pawn(false);
	board[6][6] = new pawn(false);
	board[6][7] = new pawn(false);
}

bool Board::pickLocation(int row, int col)
{
	if (row < 0 || row > 7 || col <0 || col >7)
	{
		return false;
	}
	else
	{
		return true;
	}

}

bool Board::move(int row, int col, int srcRow, int srcCol)
{
	if (board[row][col] != nullptr)
	{
		return false;
	}
	board[row][col] = (board[srcRow][srcCol]);
	board[srcRow][srcCol] = nullptr;
	return true;

}
Board::~Board()
{
}