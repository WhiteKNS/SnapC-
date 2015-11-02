#include <conio.h>
#include<iostream>
#include<vector>
#include<ctime>
#include <cstdio>
#include<iterator>
#include<string>
#include<algorithm>
#include <fstream>
#include <map>
#include <Windows.h>
#include <functional>
using namespace std;
//#include"Computer.h"
#define Lines 14
#define Columns 10
#define Numbers 9
#ifndef Main_H
#define Main_H

class Main{
	Game game;

public:
	Main();



	bool ComputerAttack();

	bool PlayerAttack();

	bool FirstAttack();

	bool SecondAttack();

	void MainFunction();
};

#endif
