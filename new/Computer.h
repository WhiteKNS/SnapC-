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
//#include  "Main.h"
#ifndef Computer_H
#define Computer_H

class Card{
protected:
	vector<int>vec1;// карты с колоды!
	vector<int>vec2;
	vector<int>vec3;
	vector<int>vec4;
	vector<int>vecStart1;
	vector<int>vecStart2;
	vector<int>vecStart3;
	vector<int>vecStart4;
	bool Flagvec[4];
	bool FlagTrump[4];//флаг на козырь
	int Choise4;
	char Char1[Numbers][Lines][Columns];
	//int line1, column1;


protected:


	void gotoXY(int column, int line);   // Set Cursor position;  


	void PrintFirstCard(int Card, int Color, int column, int line);

	void Paint1(int Card, int Color, int column1, int line1);

public:


	Card();


	void InitialCards();


	void ShowSuitCards();

	void TrumpCard();



};


class Computer :public Card{
public:
	vector<int>vecComp1;//карты компьютера
	vector<int>vecComp2;
	vector<int>vecComp3;
	vector<int>vecComp4;

	Computer();

	void ShowCard();
};

class Player :public Card{
public:
	vector<int>vecplayer1;//карты, которые достались игроку
	vector<int>vecplayer2;
	vector<int>vecplayer3;
	vector<int>vecplayer4;


	Player();

	void ShowCardsSmall(vector <int> Vector);

	void ShowCard();
};

class Game :public Card{
public:
	vector<int>GameCard1;//карты которые находятся на кону(в игре)
	vector<int>GameCard2;
	vector<int>GameCard3;
	vector<int>GameCard4;
	vector<int>GameCardF;//на кону козырная карта!
	bool FlagTemp[4];//для определения, в какую временно-битую колоду пойдет карта
	vector<int>Temp1;// временно-битые карты
	vector<int>Temp2;
	vector<int>Temp3;
	vector<int>Temp4;
	Player player;//объект игрока
	Computer computer;//объект компьютера
	int Choise1;
	bool FlagF[4];//козырь?
	bool FlagMove[4];//для определения, можно ли ходить определенной мастью или нет
	bool FlagNext;//положили значение или нет, флаг для боя
	vector<int>::iterator it;
	vector<int>::iterator it2;
	vector<int>Merged1;
	vector<int>Merged2;
	vector<int>Merged3;
	vector<int>Merged4;
	vector<int>TempTemp;//можно ли добавить карту компбютеру?
	bool FlagNormal[4];
	bool FlagGiveUpComp;
	bool FlagPlayerGiveUp;
	bool FlagEndCards;//закончились ли общие карты?
	bool FlagCompEmpty[4];
	ofstream fout;//
	fstream fin;//
	multimap <unsigned int, string> Results;//записываем результаты сюда
	unsigned int Summ;// сумма очков
	string Name; //имя игрока
	unsigned int SummFile;
	vector<string> buffer;

	void FlagNormalGoodBye();

	void PartlyFirst(vector<int>&Vector, bool const Flag);

	void PartlyPartly();

	void UniqueCards(vector<int>&VectorVector);

	bool ComputerMoveApp(vector <int>&VectorComputer, vector<int>&VectorGameCard, vector<int>&VectorTemp, bool &Flag, vector<int>&VectorCardF, int Color);

	void Sort(vector<int> &VectorPlayer);

	void ShowTemp(vector<int>&Temp);

	bool PlayerMoveTrumpApp(vector<int>&VectorPlayer, vector<int>&VectorTemp);

	bool PlayerAttackApp(unsigned int const index, vector<int>&VectorGameCard, vector<int>&VectorPlayer, vector<int>&VectorF);

	void ComputerAttackApp(vector<int>&VectorComputer, vector<int>&VectorGameCard, vector<int>&VectorGameCardF);

	bool PlayerMoveNormalApp(vector<int>&VectorPlayer, vector<int>&VectorTemp, vector<int> &VectorGameCard, int Color);

	bool Function2(const vector<int>&TempMerged, vector<int>&CompMerge);

	bool Function(vector<int>Temp, vector<int>GameCard);

	bool FunctionMerged(vector <int> &VectorPlayer, vector<int> &VectorTemp, vector<int>&VectorMerged);

	void Deal(vector<int>&VectorSuit, bool &Flag, int VectorChoise1, vector<int>&VectorPlayer);

	bool CheckIfEmptyComp();

public:

	bool FlagCanAdd;
	bool FlagCanCompAdd;
	int counter;//нужен для отбоя компом, если равен 1, то больше проходов делать нельзя

	Game();


	bool GetFlagEndCards();

	void GameCardClearer();

	void DealCardsForPlayer();

	bool CheckIfSuitEmpty();

	void SortCards();

	void PlayerAttack();

	void ComputerMove();

	void ShowTempCards();

	bool CheckIfGameCardEmpty();

	void ComputerAttack();

	void Uniq();

	void PlayerMove();

	void FunctionPlayerGiveUp();

	void TempClearer();

	bool CheckIfPlayerCanAddCard();

	bool CheckIfComputerCanAddCard();

	void FunctionComputerGiveUp();

	bool CheckEndOfGame();
	void PrintEndOfGame();

	void ReadResults();
	void EverySumm(vector<int>VectorSumm);

	void SaveResultToMap(string &WinName);

	void ReadMap();

	void ReadAllFromFile();

	void SaveMapToFile();
	void ReadDataFromFile();


	void GoodByeFlagMove();

};

#endif