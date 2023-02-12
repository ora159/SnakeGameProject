#include "GameBoard.h"
//#include "Food_game.h"
#include <iostream>
#include <conio.h>
using namespace std;


GameBoard::GameBoard()
{
	this->hight = 25;//x
	this->widht = 50;//y
}
GameBoard::GameBoard(int h, int w)
{
    this->hight = h;
    this->widht = w;
}

void GameBoard::startBoard(POSITION mys,POSITION myf)
{
   int myH= this->hight ;
   int myW = this->widht;
   //POSITION mys = s->get_pos();
   //POSITION myf = f->getFoodP();
   
    for (int i = 0; i<myH; i++)
    {
        cout << "\t\t\t*";  
        //cout << "#";
        for (int j = 0;j<myW; j++)
        {
            if (i == 0 || i == (myH-1)) cout << '*';
            else if ((i == mys.Y) && (j + 1 == mys.X)) cout << '0';
            else if (i == myf.Y && j + 1 == myf.X) cout << '$';
            else {
                cout << ' ';
            }
        }
        cout << "*\n";
    }
}

