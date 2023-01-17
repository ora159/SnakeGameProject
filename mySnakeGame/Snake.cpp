#include "Snake.h"

/*
bool collided();

*/

//constructore-bouild the snake body
Snake::Snake()
{
	pos.X= 15;
	pos.Y = 15;
	this->speed = 10;
	this->len = 1;
	this->speed = 0;
	this->dir = UP;
	Sbody.push_back(pos);
}
Snake::Snake(POSITION po, int sp)
{
	this->pos = po;
	this->speed = sp;
	this->len = 1;
	this->speed = 0;
	this->dir = UP;
	Sbody.push_back(po);
}

//when the snake eat food he grows
void Snake::grow()
{
	this->len++;

}

POSITION Snake::get_pos()
{
	return pos;
}

vector<POSITION>Snake::get_body() 
{
	return Sbody;
}

void Snake::set_direction(DIS d)
{
	this->dir = d;
}

void Snake::move_snake()
{
	switch (dir)
	{
	case 'UP': pos.Y +=speed;
		break;
	case 'DOWN':pos.Y -= speed;
		break;
	case 'RIGH':pos.X += speed;
		break;
	case 'LEFT':pos.Y -= speed;

	}
}

bool Snake::takeFood(POSITION food)
{
	if (pos.X == food.X && pos.Y == food.Y) return true;
	return false;
}


