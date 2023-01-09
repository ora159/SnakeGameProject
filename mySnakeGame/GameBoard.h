#pragma once
#include "Snake.h"
class GameBoard
{
private:
	int hight;
	int widht;
public:
	GameBoard();
	GameBoard(int h, int w);
	//void set_GameBoard(int h, int w);
	void set_hight(int h) { hight = h; };
	void set_wight(int w) { widht = w; }
	void startBoard(Snake* mys);

};

