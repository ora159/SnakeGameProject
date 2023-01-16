#include "GameBoard.h"
#include "Food.h"
#include <iostream>
#include <conio.h>
using namespace std;


GameBoard::GameBoard()
{
	this->hight = 25;//x
	this->widht = 50;//y
}
 GameBoard::GameBoard(int h,int w)
{
    this->hight = h;
    this->widht = w;
}
void GameBoard::startBoard(Snake* s,Food* f)
{
    POSITION mySpos = s->get_pos();
    POSITION myStartFood = f->getFoodP();
   
    for (int i = 0; i < hight; i++)
    {
        cout << "\t\t\t*";  
        //cout << "#";
        for (int j = 0; j < widht; j++)
        {
            if (i == 0 || i == hight - 1) cout << '*';
            else if ((i == mySpos.Y) && (j + 1 == mySpos.X)) cout << '0';
            else if (i == myStartFood.Y && j + 1 == myStartFood.X) cout << '$';
            else {
                cout << ' ';
            }
        }
        cout << "*\n";
    }
}

