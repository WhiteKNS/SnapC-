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
#define Lines 14
#define Columns 10
#define Numbers 9
#include "Computer.h"
#include "Main.h"



int main(){
	system("color F0");
	system("mode con cols=100 lines=80");
	srand((unsigned)time(NULL));
	char Key;
	do{
		Main MainGame;
		MainGame.MainFunction();
		cout << "If you want to exit, press  Esc, press any other key to continue the game!" << endl;
		Key = _getch();
	} while (Key != char(27));
	return 0;
}

/* Добавить!!! Если FlagCanAdd = false (флаг отвечает за то, можно ли положить дополнительные карты (ходит игрок))
если FlagCompCanAdd=false(флаг отвечает за то, можно ли положить дополнительные карты(ходит компьютер))
ТО МИНИ-ПАРТИЯ ЗАВЕРШАЕТСЯ, ЗАПУСКАЕМ ФУНКЦИЮ	TempClearer();
*/

/*в СОРТИРОВКЕ КАРТ ДОБАВИТЬ проверку на уникальность карт в векторе*/

/*Добавить в конце правильную логику!
Если комп например забьирает карты, то ставим флаг, и следующий ход - ход игрока снова!!!*/