#pragma once
#include "storedMove.h"

class undo
{

public:

	void push(storedMove*);
	bool pop(storedMove&);



	undo();
	~undo();

private:
	storedMove* top;




};

