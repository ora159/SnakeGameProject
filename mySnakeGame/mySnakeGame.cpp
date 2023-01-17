// mySnakeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "GameBoard.h"
#include"Snake.h"
#include "Food_game.h"
//#include "Position.h"
#include <iostream>
//#define HEIGHT 30
//#define WIDTH 50
using namespace std;

//build a game board
//put the snake object into the board
//put the food
//start the game -move the snake
//add point and check what he eat.
//add messege and when the game finish.

int main()
{
    GameBoard myBoard;
    myBoard.set_hight(25);
    myBoard.set_wight(50);
    Snake myS;
    //Food_game myf(myBoard,myS);

    myBoard.startBoard(&myS);
    
    


}
