// mySnakeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "GameBoard.h"
#include"Snake.h"
//#include "Position.h"
#include <iostream>
//#define HEIGHT 25
//#define WIDTH 50
using namespace std;

//build a game board
//put the snake object into the board
//put the food
//start the game -move the snake
//add point and check what he eat.
//add messege and when the game finish.
GameBoard myBoard;
POSITION POS;

int main()
{

    POS.X = 10;
    POS.Y = 10;
    //POSITION MyP(10, 25);
    Snake myS(POS,1);
    myBoard.startBoard(&myS);
    


}
