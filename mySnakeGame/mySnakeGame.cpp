// mySnakeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "GameBoard.h"
#include "Snake.h"
#include "Food_game.h"
//#include "Position.h"
#include <iostream>
#define H 30
#define W 50
using namespace std;

//build a game board
//put the snake object into the board
//put the food
//start the game -move the snake
//add point and check what he eat.
//add messege and when the game finish.
// 
 //size of game board
GameBoard myBoard(H,W);
Snake myS({H/2,W/2},1);
Food_game myf;


//START BOARD
int main()
{
    int countP = 0;//count the score
    myf.PutFood(myBoard, myS);
    POSITION ps = myS.get_pos();
    POSITION pf = myf.getFoodP();

    //checking
    cout << "the snake position is:\n";
    cout << "X: " << (int)ps.X << " Y: " << (int)ps.Y << "\n";
    cout << "the food position is:\n";
    cout << "X: " << (int)pf.X << " Y: " << (int)pf.Y;


    myBoard.startBoard(ps,pf);

   

}
