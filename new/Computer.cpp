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
int Char[Numbers][Lines][Columns] = {



	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }

	},
	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 1, 1, 1, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }

	},


	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }

	},
	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }

	},
	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 1, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 0, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 1, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }

	},

	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }

	},
	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 0, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }

	},
	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 1, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 1, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 1, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 0, 0, 0, 1, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }

	},
	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 1, 1, 1, 1, 0, 1, 1 },
		{ 1, 1, 0, 0, 1, 1, 0, 0, 1, 1 },
		{ 1, 1, 0, 0, 1, 1, 0, 0, 1, 1 },
		{ 1, 1, 0, 0, 1, 1, 0, 0, 1, 1 },
		{ 1, 1, 0, 0, 1, 1, 0, 0, 1, 1 },
		{ 1, 1, 0, 0, 1, 1, 0, 0, 1, 1 },
		{ 1, 1, 0, 0, 1, 1, 0, 0, 1, 1 },
		{ 1, 1, 0, 0, 0, 0, 0, 0, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }

	},
};


	void Card::gotoXY(int column, int line)   // Set Cursor position;  
	{
		COORD coord;
		coord.X = column;
		coord.Y = line;
		SetConsoleCursorPosition(
			GetStdHandle(STD_OUTPUT_HANDLE),
			coord
			);

	}


	void Card::PrintFirstCard(int Card, int Color, int column, int line){


		for (int j = 0; j < Lines; j++){
			for (int k = 0; k < Columns; k++){
				if (Card < 15){
					if (Char[Card - 6][j][k])   Char1[Card - 6][j][k] = char(219);
					else  Char1[Card - 6][j][k] = char(32);
				}
				else{
					if (Char[Card - 15][j][k])   Char1[Card - 15][j][k] = char(219);
					else  Char1[Card - 15][j][k] = char(32);
				}
			}
		}
		Paint1(Card, Color, column, line);

	}

	void Card:: Paint1(int Card, int Color, int column1, int line1){
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		gotoXY(column1, line1);
		for (int j = 0; j < Lines; j++, line1++, gotoXY(column1, line1)){
			for (int k = 0; k < Columns; k++){
				if (Color == 1) { SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0)); }
				if (Color == 2) { SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 12)); }
				if (Color == 3) { SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 3)); }
				if (Color == 4) { SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 2)); }
				if (Card < 15){
					cout << Char1[Card - 6][j][k];
				}
				else cout << Char1[Card - 15][j][k];

			}
		}
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));
	}

	Card::Card(){
		for (int i = 0; i<4; i++)
		{
			FlagTrump[i] = false;
			Flagvec[i] = false;
		}
		Choise4 = rand() % 4;
	}


	void Card::InitialCards()//инициализация карт с учетом козыря
	{
		for (unsigned int i = 0; i<9; i++)
		{
			if (FlagTrump[0] == false)vec1.insert(vec1.end(), i + 6);
			else vec1.insert(vec1.end(), i + 15);
			if (FlagTrump[1] == false)vec2.insert(vec2.end(), i + 6);
			else vec2.insert(vec2.end(), i + 15);
			if (FlagTrump[2] == false)vec3.insert(vec3.end(), i + 6);
			else vec3.insert(vec3.end(), i + 15);
			if (FlagTrump[3] == false)vec4.insert(vec4.end(), i + 6);
			else vec4.insert(vec4.end(), i + 15);


		}
		vecStart1 = vec1;
		vecStart2 = vec2;
		vecStart3 = vec3;
		vecStart4 = vec4;
	}


	void Card::ShowSuitCards()
	{
		for (unsigned int i = 0; i < vec1.size(); i++)
		{
			cout << vec1.at(i) << " ";
		}
		cout << endl;
		for (unsigned int i = 0; i < vec2.size(); i++)
		{
			cout << vec2.at(i) << " ";
		}
		cout << endl;
		for (unsigned int i = 0; i < vec3.size(); i++)
		{
			cout << vec3.at(i) << " ";
		}
		cout << endl;
		for (unsigned int i = 0; i < vec4.size(); i++)
		{
			cout << vec4.at(i) << " ";
		}

	}

	void Card::TrumpCard()//выбор козыря
	{

		if (0 == Choise4)FlagTrump[0] = true;
		if (1 == Choise4)FlagTrump[1] = true;
		if (2 == Choise4)FlagTrump[2] = true;
		if (3 == Choise4)FlagTrump[3] = true;

	}



	Computer::Computer(){
		vecComp1.reserve(9);
		vecComp2.reserve(9);
		vecComp3.reserve(9);
		vecComp4.reserve(9);
	}

	void Computer::ShowCard()
	{
		cout << "Computer cards!" << endl;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));
		cout << "\nFirst vector   ";
		for (unsigned int i = 0; i<vecComp1.size(); i++)
		{
			if (vecComp1.at(i) != 0)cout << vecComp1.at(i) << "  ";
		}
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 12));
		cout << "\n2 vector   ";
		for (unsigned int i = 0; i<vecComp2.size(); i++)
		{
			if (vecComp2.at(i) != 0)cout << vecComp2.at(i) << "  ";
		}
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 3));
		cout << "\n3 vector   ";
		for (unsigned int i = 0; i<vecComp3.size(); i++)
		{
			if (vecComp3.at(i) != 0)cout << vecComp3.at(i) << "  ";
		}
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 2));
		cout << "\n4 vector   ";
		for (unsigned int i = 0; i<vecComp4.size(); i++)
		{
			if (vecComp4.at(i) != 0)cout << vecComp4.at(i) << "  ";
		}
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));
		cout << "\n" << endl;
	}


	Player::Player(){
		vecplayer1.reserve(9);
		vecplayer2.reserve(9);
		vecplayer3.reserve(9);
		vecplayer4.reserve(9);
	}

	void Player::ShowCardsSmall(vector <int> Vector){
		for (unsigned int i = 0; i<Vector.size(); i++)
		{
			if (Vector.at(i) < 15)
			{
				if (Vector.at(i) < 11) {
					cout << Vector.at(i) << "  ";
				}
				else{
					if (Vector.at(i) == 11) cout << "J ";
					if (Vector.at(i) == 12) cout << "D ";
					if (Vector.at(i) == 13) cout << "K ";
					if (Vector.at(i) == 14) cout << "T ";
				}
			}
			else {
				if (Vector.at(i) <20) {
					cout << Vector.at(i) - 9 << "  ";
				}
				else{
					if (Vector.at(i) == 20) cout << "J ";
					if (Vector.at(i) == 21) cout << "D ";
					if (Vector.at(i) == 22) cout << "K ";
					if (Vector.at(i) == 23) cout << "T ";
				}
			}
		}

	}

	void Player::ShowCard()//выводим на экран карты player
	{
		cout << "Player cards!" << endl;
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));
		cout << "\n1 vector   ";
		ShowCardsSmall(vecplayer1);
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 12));
		cout << "\n2 vector   ";
		ShowCardsSmall(vecplayer2);
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 3));
		cout << "\n3 vector   ";
		ShowCardsSmall(vecplayer3);
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 2));
		cout << "\n4 vector   ";
		ShowCardsSmall(vecplayer4);
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));
		cout << "\n" << endl;
	}


	void Game::FlagNormalGoodBye(){
		for (int i = 0; i<4; i++)
		{
			FlagNormal[i] = false;
		}

	}

	void Game::PartlyFirst(vector<int>&Vector, bool const Flag){
		if (Flag == true) {
			for (unsigned int i = 0; i < Vector.size(); i++)
			{
				if (Vector.at(i) < 15) Vector.at(i) += 9;
			}
		}
		else{
			for (unsigned int i = 0; i < Vector.size(); i++)
			{
				if (Vector.at(i) > 15) Vector.at(i) -= 9;
			}
		}

	}

	void Game::PartlyPartly(){
		if (!player.vecplayer1.empty())	PartlyFirst(player.vecplayer1, FlagTrump[0]);
		if (!player.vecplayer2.empty())PartlyFirst(player.vecplayer2, FlagTrump[1]);
		if (!player.vecplayer3.empty())PartlyFirst(player.vecplayer3, FlagTrump[2]);
		if (!player.vecplayer4.empty())PartlyFirst(player.vecplayer4, FlagTrump[3]);
		if (!computer.vecComp1.empty())PartlyFirst(computer.vecComp1, FlagTrump[0]);
		if (!computer.vecComp2.empty())PartlyFirst(computer.vecComp2, FlagTrump[1]);
		if (!computer.vecComp3.empty())PartlyFirst(computer.vecComp3, FlagTrump[2]);
		if (!computer.vecComp4.empty())PartlyFirst(computer.vecComp4, FlagTrump[3]);
		SortCards();
	}

	void Game::UniqueCards(vector<int>&VectorVector){

		if (!VectorVector.empty()){
			Sort(VectorVector);
			vector <int>::iterator	v1_NewEnd1, v1_NewEnd2, v1_NewEnd3;

			// Remove consecutive duplicates
			v1_NewEnd1 = unique(VectorVector.begin(), VectorVector.end());



			// Remove consecutive duplicates under the binary prediate mod_equals
			v1_NewEnd2 = unique(VectorVector.begin(), v1_NewEnd1);

			// Remove elements if preceded by an element that was greater
			v1_NewEnd3 = unique(VectorVector.begin(), v1_NewEnd2, greater<int>());
			vector<int>::iterator it3;
			it3 = unique(VectorVector.begin(), VectorVector.end());//delete elements
			VectorVector.resize(it3 - VectorVector.begin());// new vector	}
			Sort(VectorVector);
			VectorVector.erase(unique(VectorVector.begin(), VectorVector.end()), VectorVector.end());

		}
		else return;
	}

	bool Game::ComputerMoveApp(vector <int>&VectorComputer, vector<int>&VectorGameCard, vector<int>&VectorTemp, bool &Flag, vector<int>&VectorCardF, int Color){
		SortCards();
		PartlyPartly();
		SortCards();
		Uniq();
		for (unsigned int i = 0; i<VectorComputer.size(); i++)
		{
			if (!VectorGameCard.empty()){
				int Tempo01 = VectorComputer[i];
				int TempoCard01 = VectorGameCard[0];


				if (Tempo01>TempoCard01)//если карта больше той, которая лежит на кону, то ходим ею.
				{
					VectorTemp.push_back(VectorGameCard[0]);//передаем в хранилище временно-битых карт
					VectorTemp.push_back(VectorComputer.at(i));
					PrintFirstCard(VectorComputer.at(i), Color, 27, 15);
					Sleep(1000);
					it2 = VectorComputer.begin() + i; VectorComputer.erase(it2); vector<int>(VectorComputer).swap(VectorComputer);//удаляем карту, которой били, с вектора
					return true;
				}
				else continue;
			}//если карта козырная,то работаем с ветором CardF
			else
			{
				Flag = true;
				int Tempo01 = VectorComputer[i];
				int TempoCard01 = VectorCardF[0];


				if (Tempo01>TempoCard01)//если карта больше той, которая лежит на кону, то ходим ею.
				{
					if (FlagNormal[0]) Temp1.push_back(VectorCardF[0]);
					if (FlagNormal[1]) Temp2.push_back(VectorCardF[0]);
					if (FlagNormal[2]) Temp3.push_back(VectorCardF[0]);
					if (FlagNormal[3]) Temp4.push_back(VectorCardF[0]);
					//передаем в хранилище временно-битых карт
					VectorTemp.push_back(VectorComputer.at(i));
					FlagNormalGoodBye();
					PrintFirstCard(VectorComputer.at(i), Color, 27, 15);
					Sleep(1000);
					it2 = VectorComputer.begin() + i; VectorComputer.erase(it2); vector<int>(VectorComputer).swap(VectorComputer);//удаляем карту, которой били, с вектора

					return true;
				}
				else continue;
			}
		}
		return false;
	}

	void Game::Sort(vector<int> &VectorPlayer)
	{
		if (!VectorPlayer.empty()){
			sort(VectorPlayer.begin(), VectorPlayer.end());
		}
		else return;
	}

	void Game::ShowTemp(vector<int>&Temp){
		UniqueCards(Temp);
		for (unsigned int i = 0; i<Temp.size(); i++)
		{
			if (Temp.at(i)>14) {
				if (Temp.at(i)  < 20) cout << (Temp.at(i) - 9) << "  ";
				else{
					if (Temp.at(i) == 20) cout << "J ";
					if (Temp.at(i) == 21) cout << "D ";
					if (Temp.at(i) == 22) cout << "K ";
					if (Temp.at(i) == 23) cout << "T ";
				}
			}
			else
			{
				if (Temp.at(i) < 11)  { cout << Temp.at(i) << "  "; }
				else{
					if (Temp.at(i) == 11) cout << "J ";
					if (Temp.at(i) == 12) cout << "D ";
					if (Temp.at(i) == 13) cout << "K ";
					if (Temp.at(i) == 14) cout << "T ";
				}
			}
		}

	}

	bool Game::PlayerMoveTrumpApp(vector<int>&VectorPlayer, vector<int>&VectorTemp){
		if (VectorPlayer.empty()) return false;
		PartlyPartly();
		Uniq();
		unsigned int Index;
		while (1){
			cout << "Choose number of card from the vec!" << endl;
			cin >> Index;
			if (Index>VectorPlayer.size() || Index<1){ cout << "Wrong index! Try again!" << endl; continue; }
			else break;
		}

		int Tempo01 = VectorPlayer[Index - 1];
		if (VectorPlayer[Index - 1]<15) VectorPlayer[Index - 1] += 9;
		int TempoCard01 = GameCardF[0];


		if (Tempo01>TempoCard01)//если карта больше той, которая лежит на кону, то ходим ею.
		{
			if (FlagNormal[0]) Temp1.push_back(GameCardF[0]);
			if (FlagNormal[1]) Temp2.push_back(GameCardF[0]);
			if (FlagNormal[2]) Temp3.push_back(GameCardF[0]);
			if (FlagNormal[3]) Temp4.push_back(GameCardF[0]);
			FlagNormalGoodBye();
			VectorTemp.push_back(VectorPlayer.at(Index - 1));
			PrintFirstCard(VectorPlayer.at(Index - 1), (Choise4 + 1), 27, 15);
			Sleep(1000);
			vector<int>::iterator Iter;
			Iter = VectorPlayer.begin() + (Index - 1); VectorPlayer.erase(Iter); vector<int>(VectorPlayer).swap(VectorPlayer);//удаляем карту, которой били, с вектора
			FlagNext = true;//это значит, что ход сделан!
			GameCardClearer();
			Uniq();
			return true;
		}
		else return false;

	}

	bool Game::PlayerAttackApp(unsigned int const index, vector<int>&VectorGameCard, vector<int>&VectorPlayer, vector<int>&VectorF){
		if (VectorPlayer.empty()) return false;
		PartlyPartly();
		Uniq();
		if (index > VectorPlayer.size() || index <= 0) { cerr << "It's no card's with such idex!" << endl; return false; }
		VectorGameCard.push_back(VectorPlayer.at(index - 1));
		VectorF.push_back(VectorGameCard.at(0));
		vector<int>::iterator Iter;
		Iter = VectorPlayer.begin() + (index - 1); VectorPlayer.erase(Iter); vector<int>(VectorPlayer).swap(VectorPlayer);
		SortCards();
		return true;
	}

	void Game::ComputerAttackApp(vector<int>&VectorComputer, vector<int>&VectorGameCard, vector<int>&VectorGameCardF){
		PartlyPartly();
		Uniq();
		VectorGameCard.push_back(VectorComputer.at(0));
		VectorGameCardF.push_back(VectorGameCard.at(0));
		vector<int>::iterator Iter;
		Iter = VectorComputer.begin(); VectorComputer.erase(Iter); vector<int>(VectorComputer).swap(VectorComputer);
		SortCards();
		Uniq();
	}

	bool Game::PlayerMoveNormalApp(vector<int>&VectorPlayer, vector<int>&VectorTemp, vector<int> &VectorGameCard, int Color){
		SortCards();
		PartlyPartly();
		Uniq();
		if (VectorPlayer.empty()) return false;
		unsigned int Index;
		while (1){
			cout << "Choose number of card from the vec!" << endl;
			cin >> Index;
			if (Index > VectorPlayer.size() || Index<1){ cout << "Wrong index! Try again!" << endl; continue; }
			else break;
		}

		int Tempo02 = VectorPlayer[Index - 1];
		int TempoCard02 = VectorGameCard[0];

		if (Tempo02>TempoCard02)//если карта больше той, которая лежит на кону, то ходим ею.
		{
			VectorTemp.push_back(VectorGameCard[0]);//передаем в хранилище временно битых карт
			VectorTemp.push_back(VectorPlayer.at(Index - 1));
			PrintFirstCard(VectorPlayer.at(Index - 1), Color, 27, 15);
			Sleep(1000);
			vector<int>::iterator Iter;
			Iter = VectorPlayer.begin() + (Index - 1); VectorPlayer.erase(Iter); vector<int>(VectorPlayer).swap(VectorPlayer);//удаляем карту, которой били, с вектора
			FlagNext = true;//это значит, что ход сделан!
			GameCardClearer();
			Uniq();
			return true;
		}
		else {
			Uniq(); PartlyPartly(); return false;
		}
	}

	bool Game::Function2(const vector<int>&TempMerged, vector<int>&CompMerge){
		if (TempMerged.empty() || CompMerge.empty())return false;
		for (unsigned int i = 0; i<TempMerged.size(); i++)
		{
			for (unsigned int j = 0; j<CompMerge.size(); j++)
			{
				if (TempMerged.at(i) == CompMerge.at(j) || ((TempMerged.at(i) - CompMerge.at(j)) == 9) || ((CompMerge.at(j) - TempMerged.at(i)) == 9)){

					TempTemp.push_back(CompMerge.at(j));
					vector<int>::iterator Iter;
					Iter = CompMerge.begin() + j; CompMerge.erase(Iter); vector<int>(CompMerge).swap(CompMerge);
					cout << "Can add!" << endl; SortCards();  return true;
				}
			}
		}
		return false;

	}

	bool Game::Function(vector<int>Temp, vector<int>GameCard){
		if (Temp.empty())return false;
		for (unsigned int i = 0; i<Temp.size(); i++)
		{
			if ((Temp.at(i) == GameCard[0]) || ((Temp.at(i) - GameCard[0]) == 9) || ((GameCard[0] - Temp.at(i)) == 9)){ cout << "True" << endl; Temp.at(i); return true; }
		}
		return false;
	}

	bool Game::FunctionMerged(vector <int> &VectorPlayer, vector<int> &VectorTemp, vector<int>&VectorMerged){

		VectorMerged.reserve(0);
		if (!VectorPlayer.empty() && !VectorTemp.empty()){//забираем все карты
			VectorMerged.resize(VectorPlayer.size() + VectorTemp.size());
		}
		else if (VectorPlayer.empty() && !VectorTemp.empty())
		{
			VectorMerged.resize(VectorTemp.size());
		}
		else if (VectorTemp.empty() && !VectorPlayer.empty()) VectorMerged.resize(VectorPlayer.size());
		else return false;

		merge(VectorPlayer.begin(), VectorPlayer.end(), VectorTemp.begin(), VectorTemp.end(), VectorMerged.begin());
		VectorPlayer.clear();
		sort(VectorMerged.begin(), VectorMerged.end());
		VectorMerged.erase(unique(VectorMerged.begin(), VectorMerged.end()), VectorMerged.end());
		VectorPlayer = VectorMerged;
		return true;

	}

	void Game::Deal(vector<int>&VectorSuit, bool &Flag, int VectorChoise1, vector<int>&VectorPlayer){
		int Suit, Choise;
		if (VectorSuit.empty()){ Flag = true; DealCardsForPlayer(); }Suit = VectorSuit.size(); Choise = rand() % Suit;//1.Получаем размер вектора 2.Выбираем случайное число в диапазоне от 0 до размера вектора(т.е. в реальности размер -1)
		VectorChoise1 = VectorSuit[Choise]; VectorPlayer.push_back(VectorChoise1); //3. случайное число становится номером индекса с вектора(карты общей колоды). Вектор(общая колода) с индексом (из п.2) запоминаем в переменную. 4. Эту переменную запихиваем в вектор игрока или компа(там уж как получилось)
		if (VectorSuit.size() == 1) { VectorSuit.clear(); return; }
		vector<int>::iterator Iter;
		Iter = VectorSuit.begin() + Choise; VectorSuit.erase(Iter); vector<int>(VectorSuit).swap(VectorSuit);//через итератор получаем позицию(с п.2), стираем данные с вектора с общей колоды, ну и меняем размер.

	}

	bool Game::CheckIfEmptyComp(){
		if (!computer.vecComp1.empty()) { FlagCompEmpty[0] = false; }
		else FlagCompEmpty[0] = true;
		if (!computer.vecComp2.empty()) { FlagCompEmpty[1] = false; }
		else FlagCompEmpty[1] = true;
		if (!computer.vecComp3.empty()) { FlagCompEmpty[2] = false; }
		else FlagCompEmpty[2] = true;
		if (!computer.vecComp4.empty()) { FlagCompEmpty[3] = false; }
		else FlagCompEmpty[3] = true;
		if (computer.vecComp1.empty() && computer.vecComp2.empty() && computer.vecComp3.empty() && computer.vecComp4.empty()) return true;
		return false;
	}


	Game::Game()
	{
		for (int i = 0; i<4; i++)
		{
			FlagMove[i] = false;
			FlagF[i] = false;
			FlagCompEmpty[i] = false;
			FlagNormal[i] = false;
		}
		FlagNext = false;
		FlagCanAdd = false;
		FlagCanCompAdd = false;
		FlagGiveUpComp = false;
		FlagPlayerGiveUp = false;
		FlagEndCards = false;
		counter = 0;
		Summ = 0;
	}


	bool Game::GetFlagEndCards(){
		return FlagEndCards;
	}

	void Game::GameCardClearer(){
		GameCard1.clear();
		GameCard2.clear();
		GameCard3.clear();
		GameCard4.clear();
		GameCardF.clear();
	}

	void Game::DealCardsForPlayer()//раздача карт и игроку и компу
	{
		TempClearer(); //очищаем временные карты

		if (CheckIfSuitEmpty()) { cerr << "No more cards!!!" << endl; return; }//проверяем, есть ли еще карты в общей колоде, если нет - выходим из метода + метод проверяем, какие масти еще доступны для раздачи

		int TotalSize = player.vecplayer1.size() + player.vecplayer2.size() + player.vecplayer3.size() + player.vecplayer4.size(); //считаем общую сумму карт, которые находятся у игрока на руках
		int TotalCompSize = computer.vecComp1.size() + computer.vecComp2.size() + computer.vecComp3.size() + computer.vecComp4.size(); //то же, только для комп
		try{
			if (FlagEndCards == false){ //если карты в колоде еще есть
				while (TotalSize < 6 || TotalCompSize < 6){//карты раздаются пока у игрока или у компа меньше чем 6 карт на руках
					if (CheckIfSuitEmpty()){ cout << "No more cards!!!" << endl; FlagEndCards = true; return; } //снова проверка на пустоту общей колоды
					if (FlagEndCards == true) break; //если колода пуста, то выходим из цикла
					if (TotalSize < 6 && FlagEndCards == false){//если у игрока карт меньше 6, раздаем игроку , и есть что раздавать
						int Choise;
						while (1){
							Choise = rand() % 4; //выбирает масть(1 вектор - 1 масть, т.е всего их по 4)
							if (Flagvec[Choise] == false)break; //если Flagvec[Choise] == false, то это значит, что такая масть есть в общей колоде
						}

						switch (Choise) //раздаем карты
						{
						case 0:
							Deal(vec1, Flagvec[0], Choise1, player.vecplayer1);  break; //передаем данные масти номер 1, (для  дополнительной проверки Флаг, номер выбранной масти, карты игрока, куда будем кидать выбранную карту )
						case 1:
							Deal(vec2, Flagvec[1], Choise1, player.vecplayer2);   break; //то же
						case 2:
							Deal(vec3, Flagvec[2], Choise1, player.vecplayer3);  break; //
						case 3:
							Deal(vec4, Flagvec[3], Choise1, player.vecplayer4);  break;//
						}
						TotalSize = player.vecplayer1.size() + player.vecplayer2.size() + player.vecplayer3.size() + player.vecplayer4.size(); //опять считаем общую сумму
						CheckIfSuitEmpty(); //опять проверяем, есть ли еще карты для раздачи
					}
					if (CheckIfSuitEmpty()){ cout << "No more cards!!!" << endl; FlagEndCards = true; return; } //ну это чтобы уже железно проверилось
					if (TotalCompSize < 6 && FlagEndCards == false){//если у компа меньше 6, раздаем компу , и есть что раздавать
						int Choise; //алгоритм такой же ,как в раздаче игроку, разница лишь в том, что "кидаем" карты компьютеру
						while (1){
							Choise = rand() % 4;
							if (Flagvec[Choise] == false)break;
						}
						switch (Choise)
						{
						case 0:
							Deal(vec1, Flagvec[0], Choise1, computer.vecComp1);
							break;
						case 1:
							Deal(vec2, Flagvec[1], Choise1, computer.vecComp2);
							break;
						case 2:
							Deal(vec3, Flagvec[2], Choise1, computer.vecComp3);
							break;
						case 3:
							Deal(vec4, Flagvec[3], Choise1, computer.vecComp4);
							break;
						}
						TotalCompSize = computer.vecComp1.size() + computer.vecComp2.size() + computer.vecComp3.size() + computer.vecComp4.size(); //проверяем, сколько карт у комп на руках

					}
					if (CheckIfSuitEmpty()){ cout << "No more cards!!!" << endl; FlagEndCards = true; return; } //очередная проверка на наличие карт в общей колоде
				}
			}
		}
		catch (exception &e)
		{
			cerr << e.what() << endl;
		}
		SortCards(); //сортируем карты
		Uniq(); //на всякий случай ищем уникальные элементы
		system("cls");
		cout << "Trump card is vector  " << (Choise4 + 1) << endl; //выводим сообщение на экран, какая карта - козырь
		//конец метода
	}

	bool Game::CheckIfSuitEmpty(){
		if (vec1.empty()){ Flagvec[0] = true; }
		if (vec2.empty()){ Flagvec[1] = true; }
		if (vec3.empty()){ Flagvec[2] = true; }
		if (vec4.empty()){ Flagvec[3] = true; }
		if (vec1.empty() && vec2.empty() && vec3.empty() && vec4.empty()){ FlagEndCards = true; return true; }
		else return false;
	}

	void Game::SortCards()//сортировка карт для удобства
	{
		try{
			if (!player.vecplayer1.empty())
				Sort(player.vecplayer1);
			if (!player.vecplayer2.empty())
				Sort(player.vecplayer2);
			if (!player.vecplayer3.empty())
				Sort(player.vecplayer3);
			if (!player.vecplayer4.empty())
				Sort(player.vecplayer4);
			if (!computer.vecComp1.empty())
				Sort(computer.vecComp1);
			if (!computer.vecComp2.empty())
				Sort(computer.vecComp2);
			if (!computer.vecComp3.empty())
				Sort(computer.vecComp3);
			if (!computer.vecComp4.empty())
				Sort(computer.vecComp4);
			if (!Temp1.empty())
				Sort(Temp1);
			if (!Temp2.empty())
				Sort(Temp2);
			if (!Temp3.empty())
				Sort(Temp3);
			if (!Temp4.empty())
				Sort(Temp4);
		}
		catch (exception &e){
			cout << e.what() << endl;
		}
	}

	void Game::PlayerAttack()//xод игрока
	{
		PartlyPartly();
		Uniq();
		player.ShowCard();
		GoodByeFlagMove();
		cout << "Choise suit! " << endl;
		char KeyWord;
		unsigned int index;
		cin >> KeyWord;
		switch (KeyWord)
		{
		case '1':cout << "You'he choose vec1! Please, press index of card you want to call!" << endl;
			cin >> index;
			if (PlayerAttackApp(index, GameCard1, player.vecplayer1, GameCardF)){
				PrintFirstCard(GameCard1.at(0), 1, 15, 15);
				FlagNormal[0] = true;
				FlagMove[0] = true; break;
			}
			else{ cout << "We haven't card with such index!" << endl; PlayerAttack(); }
			break;
		case'2':cout << "You'he choose vec2! Please, press index of card you want to call!" << endl;
			cin >> index;
			if (PlayerAttackApp(index, GameCard2, player.vecplayer2, GameCardF)){
				PrintFirstCard(GameCard2.at(0), 2, 15, 15);
				FlagNormal[1] = true;
				FlagMove[1] = true; break;
			}
			else{ cout << "We haven't card with such index!" << endl; PlayerAttack(); }break;
		case'3':cout << "You'he choose vec3! Please, press index of card you want to call!" << endl;
			cin >> index;
			if (PlayerAttackApp(index, GameCard3, player.vecplayer3, GameCardF)){
				PrintFirstCard(GameCard3.at(0), 3, 15, 15);
				FlagNormal[2] = true;
				FlagMove[2] = true; break;
			}
			else{ cout << "We're haven't card with such index!" << endl; PlayerAttack(); }break;
		case'4':cout << "You'he choose vec4! Please, press index of card you want to call!" << endl;
			cin >> index;
			if (PlayerAttackApp(index, GameCard4, player.vecplayer4, GameCardF)){
				PrintFirstCard(GameCard4.at(0), 4, 15, 15);
				FlagNormal[3] = true;
				FlagMove[3] = true; break;
			}
			else{ cout << "We haven't card with such index!" << endl; PlayerAttack(); }break;
		default: cout << "No cards!Try again" << endl; PlayerAttack(); break;
		}
		system("cls");
	}

	void Game::ComputerMove()
	{

		PartlyPartly();
		Uniq();

		if (FlagNext == false && FlagMove[0] == true)
		{
			if (!computer.vecComp1.empty())
			{
				int Color = 1;
				if (ComputerMoveApp(computer.vecComp1, GameCard1, Temp1, FlagF[0], GameCardF, Color)) FlagNext = true;//это значит, что ход сделан!
				else FlagNext = false;
			}
		}

		if (FlagNext == false && FlagMove[1] == true)//
		{
			if (!computer.vecComp2.empty())
			{
				int Color = 2;
				if (ComputerMoveApp(computer.vecComp2, GameCard2, Temp2, FlagF[1], GameCardF, Color)) FlagNext = true;//это значит, что ход сделан!
				else FlagNext = false;
			}
		}


		if (FlagNext == false && FlagMove[2] == true)//
		{
			if (!computer.vecComp3.empty())
			{
				if (ComputerMoveApp(computer.vecComp3, GameCard3, Temp3, FlagF[2], GameCardF, 3)) FlagNext = true;//это значит, что ход сделан!
				else FlagNext = false;
			}
		}

		if (FlagNext == false && FlagMove[3] == true)//
		{
			if (!computer.vecComp4.empty())
			{
				if (ComputerMoveApp(computer.vecComp4, GameCard4, Temp4, FlagF[3], GameCardF, 4)) FlagNext = true;//это значит, что ход сделан!
				else FlagNext = false;
			}
		}

		if (FlagNext == false)// если ход так и не сделали
		{

			if (1 == counter)//если уже проход был, но походить так и не получилось, то сдаемся и забираем все карты
			{
				FunctionComputerGiveUp();
			}
			else{
				//если карта козырная, то можно ей ходить в любом случае(поэтому true).
				FlagMove[Choise4] = true; counter++; ComputerMove();
			}

		}
		if (FlagNext == true){
			cout << "Comp did it!" << endl; FlagNext = false; GameCardClearer(); counter = 0;
		}

	}

	void Game::ShowTempCards(){
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		cout << "Temp cards!" << endl;
		SortCards();
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));
		cout << "\n1 Tempvector   ";
		ShowTemp(Temp1);
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 12));
		cout << "\n2 Tempvector   ";
		ShowTemp(Temp2);
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 3));
		cout << "\n3 Tempvector   ";
		ShowTemp(Temp3);
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 2));
		cout << "\n4 Tempvector   ";
		ShowTemp(Temp4);
		cout << "\n" << endl;
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));

	}

	bool Game::CheckIfGameCardEmpty(){
		if (GameCard1.empty() && GameCard2.empty() && GameCard3.empty() && GameCard4.empty()) return true;
		else return false;
	}

	void Game::ComputerAttack()
	{
		PartlyPartly();
		Uniq();
		GoodByeFlagMove();
		try{
			SortCards();
			int Key;
			if (CheckIfEmptyComp()) { cerr << "Comp has no more cards!" << endl; CheckEndOfGame(); }
			else {
				while (1){
					Key = rand() % 4;
					if (FlagCompEmpty[Key] == false) break;
					else continue;
				}
				Key += 1;
				switch (Key)
				{
				case 1:cout << "Comp choose vec1! " << endl;
					if (!computer.vecComp1.empty()){
						ComputerAttackApp(computer.vecComp1, GameCard1, GameCardF);  FlagMove[0] = true; FlagNormal[0] = true; PrintFirstCard(GameCard1.at(0), 1, 15, 15); break;
					}
					else ComputerAttack();
					break;
				case 2:cout << "Comp choose vec2! " << endl;
					if (!computer.vecComp2.empty()){
						ComputerAttackApp(computer.vecComp2, GameCard2, GameCardF);  FlagMove[1] = true; FlagNormal[1] = true; PrintFirstCard(GameCard2.at(0), 2, 15, 15); break;
					}
					else ComputerAttack();
					break;
				case 3:cout << "Comp choose vec3! " << endl;
					if (!computer.vecComp3.empty()){
						ComputerAttackApp(computer.vecComp3, GameCard3, GameCardF);  FlagMove[2] = true; FlagNormal[2] = true; PrintFirstCard(GameCard3.at(0), 3, 15, 15); break;
					}
					else ComputerAttack();
					break;
				case 4:cout << "Comp choose vec4! " << endl;
					if (!computer.vecComp4.empty()){
						ComputerAttackApp(computer.vecComp4, GameCard4, GameCardF);  FlagMove[3] = true; FlagNormal[3] = true; PrintFirstCard(GameCard4.at(0), 4, 15, 15); break;
					}
					else ComputerAttack();
					break;
				}
			}
		}
		catch (exception &e){
			cout << e.what();
		}
	}

	void Game::Uniq(){
		if (!player.vecplayer1.empty())
			UniqueCards(player.vecplayer1);
		if (!player.vecplayer2.empty())
			UniqueCards(player.vecplayer2);
		if (!player.vecplayer3.empty())
			UniqueCards(player.vecplayer3);
		if (!player.vecplayer4.empty())
			UniqueCards(player.vecplayer4);
		if (!computer.vecComp1.empty()) UniqueCards(computer.vecComp1);
		if (!computer.vecComp2.empty()) UniqueCards(computer.vecComp2);
		if (!computer.vecComp3.empty()) UniqueCards(computer.vecComp3);
		if (!computer.vecComp4.empty()) UniqueCards(computer.vecComp4);
		if (!Temp1.empty())
			UniqueCards(Temp1);
		if (!Temp2.empty())
			UniqueCards(Temp2);
		if (!Temp3.empty())
			UniqueCards(Temp3);
		if (!Temp4.empty())
			UniqueCards(Temp4);
	}

	void Game::PlayerMove(){

		cout << "Choise vector!" << endl;
		PartlyPartly();
		SortCards();
		Uniq();
		player.ShowCard();
		int Vector;
		cin >> Vector;
		switch (Vector){
		case 1:
			if ((FlagNext == false && FlagMove[0] == true) || (FlagNext == false && (0 == Choise4))){
				if (Vector - 1 == Choise4) //игрок хочет работать с козырем!
				{
					FlagF[0] = true;
					PartlyPartly();
					if (PlayerMoveTrumpApp(player.vecplayer1, Temp1))	break;
					else{ cout << "You can't beat the card with this one! Try again or give up! " << endl; PlayerMove(); }
				}
				else //карта обычная
				{
					cout << "  You can work with vec1!   " << endl;
					if (!player.vecplayer1.empty())
					{
						if (PlayerMoveNormalApp(player.vecplayer1, Temp1, GameCard1, 1))//если карта больше той, которая лежит на кону, то ходим ею.
							break;
						else{ cout << "Try again! Wrong card1!   " << endl; PlayerMove(); }
					}
					else{ cout << "Sorry, but vec1 is empty!" << endl; PlayerMove(); }
				}
			}
			else{ cout << "You can't work with vec1!" << endl; PlayerMove(); }
			break;

		case 2:if ((FlagNext == false && FlagMove[1] == true) || (FlagNext == false && (1 == Choise4)))
		{
				   if (Vector - 1 == Choise4) //игрок хочет работать с козырем!
				   {
					   FlagF[1] = true;
					   PartlyPartly();
					   if (PlayerMoveTrumpApp(player.vecplayer2, Temp2))  break;
					   else{ cout << "You can't beat the card with this one! Try again or give up! " << endl; PlayerMove(); }
				   }
				   else{
					   cout << "  You can work with vec2!   " << endl;
					   if (!player.vecplayer2.empty())
					   {
						   if (PlayerMoveNormalApp(player.vecplayer2, Temp2, GameCard2, 2))//если карта больше той, которая лежит на кону, то ходим ею.
							   break;
						   else{ cout << "Try again! Wrong card1!   " << endl; PlayerMove(); }
					   }
					   else{ cout << "Sorry, but vec2 is empty!" << endl; PlayerMove(); }
				   }
		}
			   else{ cout << "You can't work with vec2!" << endl; PlayerMove(); }
			   break;
		case 3:
			if ((FlagNext == false && FlagMove[2] == true) || (FlagNext == false && (2 == Choise4)))
			{
				if (Vector - 1 == Choise4) //игрок хочет работать с козырем!
				{
					FlagF[2] = true;
					PartlyPartly();
					if (PlayerMoveTrumpApp(player.vecplayer3, Temp3)) break;
					else{ cout << "You can't beat the card with this one! Try again or give up! " << endl; PlayerMove(); }

				}
				else{
					cout << "  You can work with vec3!   " << endl;
					if (!player.vecplayer3.empty())
					{
						if (PlayerMoveNormalApp(player.vecplayer3, Temp3, GameCard3, 3))//если карта больше той, которая лежит на кону, то ходим ею.
							break;
						else{ cout << "Try again! Wrong card3!   " << endl; PlayerMove(); }
					}
					else{ cout << "Sorry, but vec3 is empty!" << endl; PlayerMove(); }
				}
			}
			else{ cout << "You can't work with vec3!" << endl; PlayerMove(); }
			break;


		case 4:
			if ((FlagNext == false && FlagMove[3] == true) || (FlagNext == false && (3 == Choise4)))
			{
				if (Vector - 1 == Choise4) //игрок хочет работать с козырем!
				{
					FlagF[3] = true;
					PartlyPartly();
					if (PlayerMoveTrumpApp(player.vecplayer4, Temp4)){
						break;
					}
					else{ cout << "You can't beat the card with this one! Try again or give up! " << endl; PlayerMove(); }

				}
				else{
					cout << "  You can work with vec4!   " << endl;
					if (!player.vecplayer4.empty())
					{
						if (PlayerMoveNormalApp(player.vecplayer4, Temp4, GameCard4, 4))//если карта больше той, которая лежит на кону, то ходим ею.
							break;
						else{ cout << "Try again! Wrong card4!   " << endl; PlayerMove(); }
					}
					else{ cout << "Sorry, but vec4 is empty!" << endl; PlayerMove(); }
				}
			}
			else{ cout << "You can't work with vec4!" << endl; PlayerMove(); }
			break;

		case 5:cout << "Give Up!" << endl;
			if (FlagNext == false)// если ход так и не сделали
			{
				FunctionPlayerGiveUp();
			}

			break;
		default: cout << "Wrong card!" << endl;  PlayerMove(); break;
		}
		if (FlagNext == true){
			cout << "You did it!" << endl; FlagNext = false; GameCardClearer();
		}
		system("cls");
	}

	void Game::FunctionPlayerGiveUp(){
		if (!Merged1.empty()) Merged1.clear();
		if (!Merged2.empty())Merged2.clear();
		if (!Merged3.empty())Merged3.clear();
		if (!Merged4.empty())Merged4.clear();
		Uniq();
		if (!GameCard1.empty())  Temp1.push_back(GameCard1[0]);
		if (!GameCard2.empty())  Temp2.push_back(GameCard2[0]);
		if (!GameCard3.empty())  Temp3.push_back(GameCard3[0]);
		if (!GameCard4.empty())  Temp4.push_back(GameCard4[0]);//передаем в хранилище временно-битых карт
		GameCardClearer();
		SortCards();// сортируем карты
		if (!Temp1.empty())UniqueCards(Temp1);
		if (!Temp2.empty())UniqueCards(Temp2);
		if (!Temp3.empty())UniqueCards(Temp3);
		if (!Temp4.empty())UniqueCards(Temp4);
		FunctionMerged(player.vecplayer1, Temp1, Merged1);
		FunctionMerged(player.vecplayer2, Temp2, Merged2);
		FunctionMerged(player.vecplayer3, Temp3, Merged3);
		FunctionMerged(player.vecplayer4, Temp4, Merged4);

		for (int i = 0; i<4; i++)//сбрасываем все флаги
		{
			FlagMove[i] = false;
			FlagF[i] = false;
		}
		FlagNext = false;
		FlagPlayerGiveUp = true;
		SortCards();
		PartlyPartly();
		Uniq();

	}

	void Game::TempClearer(){
		if (!Temp4.empty())
			Temp4.clear();
		if (!Temp3.empty())
			Temp3.clear();
		if (!Temp2.empty())
			Temp2.clear();
		if (!Temp1.empty())
			Temp1.clear();
		if (!TempTemp.empty())
			TempTemp.clear();
	}

	bool Game::CheckIfPlayerCanAddCard(){
		FlagCanAdd = false;
		int SizeAllComp = computer.vecComp1.size() + computer.vecComp2.size() + computer.vecComp3.size() + computer.vecComp4.size();
		if (SizeAllComp == 0){ cerr << "Computer hasn't any cards!" << endl; FlagCanAdd = false; return false; }
		int SizeAll = player.vecplayer1.size() + player.vecplayer2.size() + player.vecplayer3.size() + player.vecplayer4.size();
		if (SizeAll == 0){ cerr << "Player hasn't any cards!" << endl; FlagCanAdd = false; return false; }
		if (!GameCard1.empty()){
			if (Function(Temp2, GameCard1)){ FlagCanAdd = true; Uniq(); return true; }
			else
			if (Function(Temp3, GameCard1)){ FlagCanAdd = true; Uniq(); return true; }
			else
			if (Function(Temp4, GameCard1)){ FlagCanAdd = true; Uniq(); return true; }
			else{ player.vecplayer1.push_back(GameCard1[0]); cerr << "You can't add this card to the game!" << endl; FlagCanAdd = false;  GameCardClearer(); Uniq(); return false; }
		}
		if (!GameCard2.empty()){
			if (Function(Temp1, GameCard2)){ FlagCanAdd = true; Uniq(); return true; }
			else
			if (Function(Temp3, GameCard2)){ FlagCanAdd = true; Uniq(); return true; }
			else
			if (Function(Temp4, GameCard2)){ FlagCanAdd = true; Uniq(); return true; }
			else{ player.vecplayer2.push_back(GameCard2[0]); cerr << "You can't add this card to the game!" << endl; FlagCanAdd = false; GameCardClearer(); Uniq(); return false; }
		}
		if (!GameCard3.empty()){
			if (Function(Temp1, GameCard3)){ FlagCanAdd = true; Uniq(); return true; }
			else
			if (Function(Temp2, GameCard3)){ FlagCanAdd = true; Uniq(); return true; }
			else
			if (Function(Temp4, GameCard3)){ FlagCanAdd = true; Uniq(); return true; }
			else{ player.vecplayer3.push_back(GameCard3[0]); cerr << "You can't add this card to the game!" << endl; FlagCanAdd = false; GameCardClearer(); Uniq(); return false; }
		}
		if (!GameCard4.empty()){
			if (Function(Temp1, GameCard4)){ FlagCanAdd = true; Uniq(); return true; }
			else
			if (Function(Temp2, GameCard4)){ FlagCanAdd = true; Uniq(); return true; }
			else
			if (Function(Temp3, GameCard4)){ FlagCanAdd = true; Uniq(); return true; }
			else{ player.vecplayer4.push_back(GameCard4[0]); cerr << "You can't add this card to the game!" << endl; FlagCanAdd = false; SortCards(); GameCardClearer(); Uniq(); return false; }
		}
		Uniq();
		return false;
	}

	bool Game::CheckIfComputerCanAddCard(){
		FlagCanCompAdd = false;
		for (int i = 0; i<4; i++)
		{
			FlagMove[i] = false;
		}
		if (computer.vecComp1.empty() && computer.vecComp2.empty() && computer.vecComp3.empty() && computer.vecComp4.empty()){ TempTemp.clear(); FlagCanCompAdd = false; return false; }
		if (player.vecplayer1.empty() && player.vecplayer2.empty() && player.vecplayer3.empty() && player.vecplayer4.empty()){ TempTemp.clear(); FlagCanCompAdd = false; return false; }
		if (Function2(Temp1, computer.vecComp2)){ GameCard2.push_back(TempTemp.at(0)); PrintFirstCard(TempTemp.at(0), 2, 15, 15); TempTemp.clear();  FlagMove[1] = true; FlagCanCompAdd = true; GameCardF.push_back(GameCard2.at(0)); Uniq();  return true; }
		if (Function2(Temp1, computer.vecComp3)){ GameCard3.push_back(TempTemp.at(0)); PrintFirstCard(TempTemp.at(0), 3, 15, 15); TempTemp.clear();  FlagMove[2] = true; FlagCanCompAdd = true; GameCardF.push_back(GameCard3.at(0)); Uniq(); return  true; }
		if (Function2(Temp1, computer.vecComp4)){ GameCard4.push_back(TempTemp.at(0)); PrintFirstCard(TempTemp.at(0), 4, 15, 15); TempTemp.clear();  FlagMove[3] = true; FlagCanCompAdd = true; GameCardF.push_back(GameCard4.at(0)); Uniq(); return  true; }

		if (Function2(Temp2, computer.vecComp1)){ GameCard1.push_back(TempTemp.at(0)); PrintFirstCard(TempTemp.at(0), 1, 15, 15); TempTemp.clear();  FlagMove[0] = true; FlagCanCompAdd = true; GameCardF.push_back(GameCard1.at(0)); Uniq(); return true; }
		if (Function2(Temp2, computer.vecComp3)){ GameCard3.push_back(TempTemp.at(0)); PrintFirstCard(TempTemp.at(0), 3, 15, 15); TempTemp.clear();  FlagMove[2] = true; FlagCanCompAdd = true; GameCardF.push_back(GameCard3.at(0)); Uniq(); return true; }
		if (Function2(Temp2, computer.vecComp4)){ GameCard4.push_back(TempTemp.at(0)); PrintFirstCard(TempTemp.at(0), 4, 15, 15); TempTemp.clear();  FlagMove[3] = true; FlagCanCompAdd = true; GameCardF.push_back(GameCard4.at(0)); Uniq(); return true; }

		if (Function2(Temp3, computer.vecComp1)){ GameCard1.push_back(TempTemp.at(0)); PrintFirstCard(TempTemp.at(0), 1, 15, 15); TempTemp.clear();  FlagMove[0] = true; FlagCanCompAdd = true; GameCardF.push_back(GameCard1.at(0)); Uniq(); return true; }
		if (Function2(Temp3, computer.vecComp2)){ GameCard2.push_back(TempTemp.at(0)); PrintFirstCard(TempTemp.at(0), 2, 15, 15); TempTemp.clear();  FlagMove[1] = true; FlagCanCompAdd = true; GameCardF.push_back(GameCard2.at(0)); Uniq(); return true; }
		if (Function2(Temp3, computer.vecComp4)){ GameCard4.push_back(TempTemp.at(0)); PrintFirstCard(TempTemp.at(0), 4, 15, 15); TempTemp.clear();  FlagMove[3] = true; FlagCanCompAdd = true; GameCardF.push_back(GameCard4.at(0)); Uniq(); return true; }

		if (Function2(Temp4, computer.vecComp1)){ GameCard1.push_back(TempTemp.at(0)); PrintFirstCard(TempTemp.at(0), 1, 15, 15); TempTemp.clear();  FlagMove[0] = true; FlagCanCompAdd = true; GameCardF.push_back(GameCard1.at(0)); Uniq(); return true; }
		if (Function2(Temp4, computer.vecComp2)){ GameCard2.push_back(TempTemp.at(0)); PrintFirstCard(TempTemp.at(0), 2, 15, 15); TempTemp.clear();  FlagMove[1] = true; FlagCanCompAdd = true; GameCardF.push_back(GameCard2.at(0)); Uniq(); return true; }
		if (Function2(Temp4, computer.vecComp3)){ GameCard3.push_back(TempTemp.at(0)); PrintFirstCard(TempTemp.at(0), 4, 15, 15); TempTemp.clear();  FlagMove[2] = true; FlagCanCompAdd = true; GameCardF.push_back(GameCard3.at(0)); Uniq(); return true; }
		TempTemp.clear();
		return false;
	}

	void Game::FunctionComputerGiveUp()
	{
		counter = 0;//сбрасываем счетчик
		Merged1.clear();
		Merged2.clear();
		Merged3.clear();
		Merged4.clear();
		SortCards();

		if (!GameCard4.empty())	//передаем в хранилище временно битых карт
		{
			for (unsigned int i = 0; i < GameCard4.size(); i++)
				Temp4.push_back(GameCard4[i]);
		}
		if (!GameCard1.empty())
		{
			for (unsigned int i = 0; i < GameCard1.size(); i++)
				Temp1.push_back(GameCard1[i]);
		}
		if (!GameCard2.empty())
		{
			for (unsigned int i = 0; i < GameCard2.size(); i++)
				Temp2.push_back(GameCard2[i]);
		}
		if (!GameCard3.empty())
		{
			for (unsigned int i = 0; i < GameCard3.size(); i++)
				Temp3.push_back(GameCard3[i]);
		}

		GameCardClearer();
		SortCards();// сортируем карты
		if (!Temp1.empty())UniqueCards(Temp1);
		if (!Temp2.empty())UniqueCards(Temp2);
		if (!Temp3.empty())UniqueCards(Temp3);
		if (!Temp4.empty())UniqueCards(Temp4);
		FunctionMerged(computer.vecComp1, Temp1, Merged1);
		FunctionMerged(computer.vecComp1, Temp2, Merged2);
		FunctionMerged(computer.vecComp3, Temp3, Merged3);
		FunctionMerged(computer.vecComp4, Temp4, Merged4);

		for (int i = 0; i<4; i++)//сбрасываем все флаги
		{
			FlagMove[i] = false;
			FlagF[i] = false;
		}
		FlagNext = false;
		counter = 0;


		PartlyPartly();
		SortCards();
		Uniq();
		FlagGiveUpComp = true;
	}

	bool Game::CheckEndOfGame(){
		if (CheckIfSuitEmpty()){
			if (player.vecplayer1.empty() && player.vecplayer2.empty() && player.vecplayer3.empty() && player.vecplayer4.empty() && CheckIfEmptyComp())
			{
				system("cls");
				cout << "Nobody's win!!!" << endl;
				return true;
			}
			else
			if (player.vecplayer1.empty() && player.vecplayer2.empty() && player.vecplayer3.empty() && player.vecplayer4.empty())
			{
				system("cls");
				cout << "Player win!!!" << endl;
				return true;
			}
			else
			if (CheckIfEmptyComp())
			{
				system("cls");
				cout << "Computer win!!!" << endl;
				return true;
			}
			else return false;
		}
		else return false;

	}

	void Game::PrintEndOfGame(){
		if (CheckIfSuitEmpty()){
			if (player.vecplayer1.empty() && player.vecplayer2.empty() && player.vecplayer3.empty() && player.vecplayer4.empty() && CheckIfEmptyComp())
			{
				system("cls");
				cout << "Nobody's win!!!" << endl;
				return;
			}
			else
			if (player.vecplayer1.empty() && player.vecplayer2.empty() && player.vecplayer3.empty() && player.vecplayer4.empty())
			{
				system("cls");
				cout << "Player win!!!" << endl;
				if (!computer.vecComp1.empty())
					EverySumm(computer.vecComp1);
				if (!computer.vecComp2.empty())
					EverySumm(computer.vecComp2);
				if (!computer.vecComp3.empty())
					EverySumm(computer.vecComp3);
				if (!computer.vecComp4.empty())
					EverySumm(computer.vecComp4);
				cout << "Input your name!" << endl;
				string PlayerName;
				cin >> PlayerName;
				ReadDataFromFile();
				SaveResultToMap(PlayerName);
				fin.open("Results.txt");
				fin.clear();
				fin.close();
				SaveMapToFile();
				buffer.clear();
				ReadDataFromFile();
				ReadResults();
				return;
			}
			else
			if (CheckIfEmptyComp())
			{
				system("cls");
				cout << "Computer win!!!" << endl;
				if (!player.vecplayer1.empty())
					EverySumm(player.vecplayer1);
				if (!player.vecplayer2.empty())
					EverySumm(player.vecplayer2);
				if (!player.vecplayer3.empty())
					EverySumm(player.vecplayer3);
				if (!player.vecplayer4.empty())
					EverySumm(player.vecplayer4);
				ReadDataFromFile();
				string CompName = "Comp";
				SaveResultToMap(CompName);
				fin.open("Results.txt");
				fin.clear();
				fin.close();
				SaveMapToFile();
				buffer.clear();
				ReadDataFromFile();
				ReadResults();
				return;
			}
			else return;
		}
		else return;


	}

	void Game::ReadResults(){
		for (unsigned int i = 0; i < buffer.size(); i++, cout << "\n")
		{
			cout << (i + 1) << ".   " << buffer.at(i);
		}
		cout << "\n" << endl;
	}

	void Game::EverySumm(vector<int>VectorSumm){
		for (unsigned int i = 0; i < VectorSumm.size(); i++)
		{
			Summ += VectorSumm.at(i);
		}
	}

	void Game::SaveResultToMap(string &WinName){
		Results.insert(pair<unsigned int, string>(Summ, WinName));
	}

	void Game::ReadMap(){
		for (auto Iter = Results.end(); Iter != Results.begin(); Iter--)
		{
			cout << Iter->second << "   " << Iter->first << endl;
		}

	}

	void Game::ReadAllFromFile()
	{
		ifstream Fin("Results.txt");
		char ch;
		if (!
			Fin.is_open())
		{
			cout << "Can't open this file!" << endl;
		}
		else
		{
			while (Fin.get(ch))
				cout << ch;
		}
		system("pause");
	}


	void Game::SaveMapToFile(){
		fout.open("Results.txt");
		if (!fout.is_open())
		{
			cerr << "Can't open file!" << endl;
		}
		else
		{
			for (auto it = Results.begin(); it != Results.end(); it++)
			{
				fout << it->second << "   " << it->first << endl;
			}
		}
		fout.close();
	}

	void Game::ReadDataFromFile(){
		fin.open("Results.txt");
		string current_str;
		if (!fin.is_open())
		{
			cerr << "Can't open file!" << endl;
		}
		else
		{

			while (!fin.eof())
			{
				getline(fin, current_str, '\n');
				if (current_str.empty()) break;
				string delimiter = "   ";
				size_t pos = 0;
				string token;
				int beg, end;
				while ((pos = current_str.find(delimiter)) != string::npos)
				{
					buffer.insert(buffer.begin(), current_str);
					token = current_str.substr(0, pos);
					Name = token;
					current_str.erase(0, pos + delimiter.length());
					beg = current_str.find_first_of("0123456789");
					end = current_str.find_last_of("0123456789");
					SummFile = atoi(current_str.substr(beg, end - beg + 1).c_str());
				}
				Results.insert(pair<unsigned int, string>(SummFile, Name));

			}
			fin.close();
		}

	}


	void Game::GoodByeFlagMove(){
		for (int i = 0; i<4; i++)//карты сбрасываем.
		{
			FlagMove[i] = false;
		}

	}

