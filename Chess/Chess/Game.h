#pragma once
#include <iostream>
#include "Board.h"
using namespace std;

class Game
{
	
public:
	void welcome();
	void display_player_color();
	void player_turn();
	void main_menu(Board& board);



	Game();
	~Game();
};

