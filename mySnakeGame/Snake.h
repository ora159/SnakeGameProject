#pragma once
#ifndef SNAKE_H
#define SNAKE_H
#include "Position.h"
#include <windows.h>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

enum DIS {UP,DOWN,RIGHT,LEFT};
class Snake
{
	//COORD pos;
    POSITION pos;//SNAKE POSITION
	vector<POSITION> Sbody;
	//vector<COORD> Sbody;
    int speed;//how much steps we move in the keyboard
    int len;//the lenght of the snake.
    DIS dir;//where you go?
	
public:
    //constructor
    Snake();
    Snake(POSITION pos, int sp);
    POSITION get_pos();
    vector<POSITION> get_body();
    //COORD get_pos();
   // vector<COORD> get_body()

    void grow();
    void move_snake();
    void set_direction(DIS d);
    //enum DIS get_direction;

   // bool collided();
    bool takeFood(POSITION food);

    
};


#endif
