#include<cstdlib>
#include "Food.h"
#include <time.h>

//constructor
Food::Food(GameBoard my_g, Snake my_s)
{
	//rund a  position for the food
	int myH = my_g.get_hight();//x
	int myW = my_g.get_wight();//y

	// Providing a seed value
	srand((unsigned)time(NULL));

	// Get a random number
	int randomX = 3 + (rand() % myH);
	int randdomY=3+(rand() % myW);
	POSITION nowPos;
	nowPos.X = myH;
	nowPos.Y = myW;
	this->FoodPos = nowPos;
}
