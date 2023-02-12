#pragma once
#ifndef GAMEBOARD_H
#define GAMEBOARD_H
#include "Snake.h"
//#include "Food_game.h"
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
	int get_hight() { return hight; }
	int get_wight() { return widht; }
	void startBoard(POSITION s,POSITION f);
	
};
#endif

