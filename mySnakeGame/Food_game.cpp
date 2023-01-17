#include "Food_game.h"
#include<cstdlib>
#include <time.h>

//constructor

Food_game::Food_game(GameBoard my_g, Snake my_s){}
/*{
	//rund a  position for the food
	int myH = my_g.get_hight();//x
	int myW = my_g.get_wight();//y

	// Providing a seed value
	srand((unsigned)time(NULL));

	// Get a random number
	int randomX = 3 + (rand() % myH);
	int randomY=3+(rand() % myW);
	//check that snake position != food position
	while ((randomX= my_s.get_pos().X) && (randomY = my_s.get_pos().Y))
	{
		int randomX = 3 + (rand() % myH);
		int randomY = 3 + (rand() % myW);
	}
	POSITION foodPos;
	foodPos.X = randomX;
	foodPos.Y = randomY;
	this->FoodPos = foodPos;
}
*/
