#pragma once
#include <iostream>
#include "Piece.h"
using namespace std;

class Game
{
	
public:
	void welcome();
	void display_player_color();
	void player_turn();
	void main_menu();



	Game();
	~Game();
};

