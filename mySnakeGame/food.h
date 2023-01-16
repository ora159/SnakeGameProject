#pragma once
#include "Position.h"
#include "Snake.h"
#include "GameBoard.h"

class Food
{
	POSITION FoodPos;
public:

	Food (GameBoard my_g,Snake my_s);
	POSITION getFoodP(){return this->FoodPos;}

};


