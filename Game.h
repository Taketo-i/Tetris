#pragma once
#include"Map.h"

class Game {
public:
	static bool Welcome();		//负责介绍规则和操作，选择开始或退出
	static bool GameOver(Map P1_map);	//显示胜方，选择重来或退出
	static void GameStop();	//暂停游戏
	static void clearScreen(); //屏幕清为全黑
	static void CloseGame();  //游戏中途退出
	static void EndGame();		//游戏结束，弹出告别界面并自动退出
};
