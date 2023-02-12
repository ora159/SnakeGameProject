#pragma once
#ifndef FOOD_GAME_H
#define FOOD_GAME_H
#include "Position.h"
//#include "Snake.h"
#include "GameBoard.h"

class Food_game
{
	POSITION FoodPos;
public:
	//Food_game();
	void randPosFood();
	void PutFood(GameBoard my_g, Snake my_s);
	POSITION getFoodP() { return this->FoodPos; }

};
#endif

