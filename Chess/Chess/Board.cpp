#include "Board.h"


void Board::display_board()
{
	numDead = 0;
	cout << "               - WELCOME TO CHESS -     " << endl;
	cout << "" << endl;

	//this will display the board
	for (int row=0; row < board_size; row++)
	{
		cout <<"    " << row << "  |";
		
		for (int col = 0; col < board_size; col++)
		{
			
			if (board[col][row] != nullptr)
			{
				cout << "(" << board[col][row]->getPiece()<< ")|";
			}
			else
			{
				for (int i = 2; i < 3; i++)
					{
					cout << "(  )|";
					}
			}
		}
		cout << endl << endl;
	} 

	cout << "     ";
	for (int i = 0; i < board_size; i++)
	{
		cout << "    " <<i;
	}

	cout << endl;
}

Board::Board()
{
	//this section is for all of the seperate pieces that are being created on board
	board[0][0] = new rook(true);
	board[1][0] = new knight(true);
	board[2][0] = new bishop(true);
	board[3][0] = new queen(true);
	board[4][0] = new king(true);
	board[5][0] = new bishop(true);
	board[6][0] = new knight(true);
	board[7][0] = new rook(true);
	// ""     ""    ""        ""
	board[0][1] = new pawn(true);
	board[1][1] = new pawn(true);
	board[2][1] = new pawn(true);
	board[3][1] = new pawn(true);
	board[4][1] = new pawn(true);
	board[5][1] = new pawn(true);
	board[6][1] = new pawn(true);
	board[7][1] = new pawn(true);
	
	//this section is for all of the empyt spaces that need to be created in the middle of the chest board
	for (int i = 2; i < 6; i++)
	{
		for (int j = 0; j < board_size; j++)
		{
			board[j][i] = nullptr;
		}
	}

	//this is the bottom section (black player) pieces that are being created
	board[0][7] = new rook(false);
	board[1][7] = new knight(false);
	board[2][7] = new bishop(false);
	board[3][7] = new queen(false);
	board[4][7] = new king(false);
	board[5][7] = new bishop(false);
	board[6][7] = new knight(false);
	board[7][7] = new rook(false);

	board[0][6] = new pawn(false);
	board[1][6] = new pawn(false);
	board[2][6] = new pawn(false);
	board[3][6] = new pawn(false);
	board[4][6] = new pawn(false);
	board[5][6] = new pawn(false);
	board[6][6] = new pawn(false);
	board[7][6] = new pawn(false);
}

//This is the section where the validation for the pick location will occur
bool Board::pickLocation(int srcCol, int srcRow, int col, int row, bool moveturn)
{
		//validation will occur
		if (row < 0 || row > 7 || col < 0 || col > 7 || srcCol < 0 || srcCol > 7 || srcRow < 0 || srcRow > 7)
		{
			return false;
		}
		if (board[srcCol][srcRow] == nullptr)
			return false;
		if (board[srcCol][srcRow]->getColor() != moveturn)
			return false;
		if (board[col][row] != nullptr)
			if (board[col][row]->getColor() == board[srcCol][srcRow]->getColor())
				return false;
		return true;
}

//this is the section where the move function will be played out
void Board::move(int srcCol, int srcRow, int col, int row)
{
	storedMove* storemoved = new storedMove();

	storemoved->capturedPiece = board[col][row];
	storemoved->pieceMoved = board[srcCol][srcRow];

	board[col][row] = (board[srcCol][srcRow]);
	board[srcCol][srcRow] = nullptr;

	storemoved->srcCol = srcCol;
	storemoved->srcRow = srcRow;
	storemoved->col = col;
	storemoved->row = row;

	turnHistory.push(storemoved);
}

void Board::moveUndo()
{
	bool result;
	storedMove boardUndo;

	result = turnHistory.pop(boardUndo);
	if (!result)
		return;
	
	board[boardUndo.srcCol][boardUndo.srcRow] = board[boardUndo.col][boardUndo.row];
	board[boardUndo.col][boardUndo.row] = boardUndo.capturedPiece;

}

//this is my destructor of the Board function, which will contain all of the information for the stack method being called
Board::~Board()
{
	for (int i = 0; i < board_size; i++)
	{
		delete[] board[i];
	}
	delete[] board;
}

void Board::filename(string fileName)
{
	
	if (fileName == " " || fileName == "")
	{
		ofstream file;
		file.open("chessgame.txt");
		for (int i = 0; i < board_size; i++)
		{
			for (int z = 0; z < board_size; z++)
			{
				if (board[z][i] == nullptr)
				{
					file << "-- ";
				}
				else file << board[z][i]->getPiece() << " ";
			}
			file << endl;
		}file.close();
	}else
	{
		ifstream file;
		file.open(fileName);
		if (file.fail())
		{
			throw string("Invalid file name");
		}
	}
	
	
	
}