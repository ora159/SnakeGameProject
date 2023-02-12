#include "Food_game.h"
#include<cstdlib>
#include <time.h>

//constructor
//Food_game::Food_game() { this->FoodPos.X = 10; this->FoodPos.Y = 10; }
void Food_game::randPosFood() {
	FoodPos.X = (rand() % 50 - 3) + 1;
	FoodPos.Y = (rand() % 30 - 3) + 1;
}
void Food_game::PutFood(GameBoard my_g,Snake my_s)
{
	//rund a  position for the food
	int myH = my_g.get_hight();//x
	int myW = my_g.get_wight();//y

	// Providing a seed value
	srand((unsigned)time(NULL));//seed, the start number is the time.

	// Get a random number
	int randomX = (rand() % myH)+3;//bitween 3 to H
	int randomY= (rand() % myW)+3;
	//check that snake position != food position
	while ((randomX==my_s.get_pos().X) && (randomY == my_s.get_pos().Y))
	{
		int randomX = 3 + (rand() % myH);
		int randomY = 3 + (rand() % myW);
	}
	POSITION foodPos;
	foodPos.X = randomX;
	foodPos.Y = randomY;
	this->FoodPos = foodPos;
}

