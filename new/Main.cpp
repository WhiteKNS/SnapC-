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

	Game game;

	Main::Main(){}



	bool Main::ComputerAttack()
	{

		cout << "CompAttack block" << endl;
		game.GameCardClearer();
		game.TempClearer();
		game.GoodByeFlagMove();
		game.Uniq();
		game.DealCardsForPlayer();
		if (game.CheckEndOfGame()) return false;
		else{
			game.ComputerAttack();
			if (game.FlagPlayerGiveUp == false)	game.PlayerMove();
			else game.FunctionPlayerGiveUp();
			for (;;){

				if (game.CheckIfComputerCanAddCard()){
					if (game.FlagPlayerGiveUp == false){
						game.PlayerMove();
						game.GameCardClearer();
					}
					else{
						cout << "You can't attack computer! You've just have all computer cards!" << endl;
						game.FunctionPlayerGiveUp();
						game.GameCardClearer();
						continue;
					}
				}
				else{ game.TempClearer(); game.GameCardClearer(); if (game.CheckEndOfGame())return false; break; }

			}
			return true;
		}
		return true;
	}

	bool Main::PlayerAttack(){
		char Key;
		system("cls");
		game.TempClearer();
		game.GameCardClearer();
		game.GoodByeFlagMove();
		cout << "You can attack!!! " << endl;

		if (game.CheckEndOfGame()) { cout << "End of the game!" << endl; return false; }
		game.DealCardsForPlayer();
		game.Uniq();
		cout << "Player attack!" << endl;
		game.PlayerAttack();
		if (game.FlagGiveUpComp == false)	game.ComputerMove();
		else game.FunctionComputerGiveUp();
		while (1){
			game.player.ShowCard();
			game.ShowTempCards();
			cout << "Do you want to add card to the game? Press Y if you want, press N if don't " << endl;
			cin >> Key;
			if (Key == 'y' || Key == 'Y')
			{
				game.PlayerAttack(); if (game.CheckIfPlayerCanAddCard()){
					if (game.FlagGiveUpComp == false){
						system("cls");
						game.ComputerMove();
					}
					else
					{
						cout << "Comp can't attack you! It's  just'll has all your cards!" << endl;
						game.FunctionComputerGiveUp();
						system("cls");
						continue;
					}
				}
				else{
					cerr << "Wrong Card!" << endl;
					continue;
				}


			}

			if (Key == 'n' || Key == 'N'){
				system("cls");
				game.GameCardClearer();
				game.TempClearer();  game.FlagCanCompAdd = false;
				game.FlagCanAdd = false;
				if (game.CheckEndOfGame())return false;
				return true;
			}
		}
		return true;
	}

	bool Main::FirstAttack(){

		cout << "Computer attack!" << endl;
		game.Uniq();
		if (!ComputerAttack()) return false;
		if (game.CheckEndOfGame())return false;

		if (game.FlagPlayerGiveUp == true){
			cout << "Comp Continue attack player!!!" << endl;
			game.TempClearer(); game.GameCardClearer();
			game.FlagCanAdd = false;
			game.FlagPlayerGiveUp = false;
			game.FlagNormalGoodBye();
			FirstAttack();
		}
		else{
			game.FlagCanAdd = false;
			game.FlagCanCompAdd = false;
			game.FlagPlayerGiveUp = false;
			game.TempClearer(); game.GameCardClearer();
			game.FlagNormalGoodBye();
			if (game.CheckEndOfGame())return false;
			else return true;
		}
		return true;
	}

	bool Main::SecondAttack(){
		game.Uniq();
		if (!PlayerAttack()) return false;
		if (game.FlagGiveUpComp == true){
			game.FlagCanAdd = false;
			game.FlagGiveUpComp = false;
			cout << "Player continue attack comp!" << endl;
			game.TempClearer(); game.GameCardClearer();
			game.FlagNormalGoodBye();
			if (game.CheckEndOfGame())return false;
			else SecondAttack();
		}
		else
		{
			game.FlagGiveUpComp = false;
			game.FlagCanAdd = false;
			game.TempClearer(); game.GameCardClearer();
			game.FlagNormalGoodBye();
			if (game.CheckEndOfGame())return false;
			return true;
		}
		return true;
	}

	void Main::MainFunction(){
		game.TrumpCard();//выбираем козырную карту
		game.InitialCards();
		game.DealCardsForPlayer();
		while (1){
			if (!FirstAttack())
			{
				game.PrintEndOfGame();	return;
			}

			if (!SecondAttack())
			{
				game.PrintEndOfGame();	return;
			}
		}
	}