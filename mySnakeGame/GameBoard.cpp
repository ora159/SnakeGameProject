#include "GameBoard.h"
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
void GameBoard::startBoard(Snake* s)
{
    POSITION mySpos = s->get_pos();
    for (int i = 0; i < hight; i++)
    {
        cout << "\t\t\t*";  
        //cout << "#";
        for (int j = 0; j < widht; j++)
        {
            if (i == 0 || i == hight - 1) cout << '*';
            else if ((i == mySpos.Y) && (j + 1 == mySpos.X)) cout << '0';
            //else if (i == food_pos.Y && j + 1 == food_pos.X) cout << '$';
            else {
                cout << ' ';
            }
        }
        cout << "*\n";
    }
}

