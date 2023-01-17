#pragma once
#include "Position.h"
#include "Snake.h"
#include "GameBoard.h"

class Food_game
{
	POSITION FoodPos;
public:

	Food_game(GameBoard my_g, Snake my_s);
	POSITION getFoodP() { return this->FoodPos; }

};

