#include<cstdlib>
#include "Food.h"
#include <time.h>

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

//void::Food newFood (Snake myS)

/*#ifndef FOOD_H
#define FOOD_H

#include <windows.h>
#include <cstdio>

#define WIDTH 50
#define HEIGHT 25

class Food
{
    private:
        COORD pos;

    public:
        void gen_food();

        COORD get_pos();
};

#endif // FOOD_H
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms*/