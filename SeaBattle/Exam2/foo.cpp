#pragma once
#include <iostream>
#include <windows.h>
using namespace std;




void Loading()
{
	for (int i = 0; i <= 100; i++)
	{
		HANDLE hConsole;

		system("cls");
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 9);


		cout << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
		cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
		cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
		cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
		cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;

		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 7);
		cout << endl;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 12);


		cout << "\t\t\t\t\t\t" << "LOADING " << i << " %";
		i += 4;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 7);
		Sleep(100);
	}
}
void LoadingMenu()
{

	HANDLE hConsole;
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;
	cout << endl;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "GAME";

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;
	cout << endl;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "NEW GAME";

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;
	cout << endl;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "\t" << "NEW GAME";

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;
	cout << endl;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "\t\t" << "NEW GAME";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;
	cout << endl;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "\t\t\t" << "NEW GAME" << endl;
	cout << "VS  Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;
	cout << endl;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "\t\t\t\t" << "NEW GAME" << endl;
	cout << "1 - Player  VS  Computer";

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;
	cout << endl;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "\t\t\t\t\t" << "NEW GAME" << endl;
	cout << "\t" << "1 - Player  VS  Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t\t\t\t\t\t" << "NEW GAME" << endl;
	cout << "\t\t" << "1 - Player  VS  Computer" << endl;
	cout << "Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t\t\t\t\t\t" << "NEW GAME" << endl;
	cout << "\t\t\t" << "1 - Player  VS  Computer" << endl;
	cout << "2 - Computer VS Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t\t\t\t\t\t" << "NEW GAME" << endl;
	cout << "\t\t\t\t" << "1 - Player  VS  Computer" << endl;
	cout << "\t" << "2 - Computer VS Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t\t\t\t\t\t" << "NEW GAME" << endl;
	cout << "\t\t\t\t\t" << "1 - Player  VS  Computer" << endl;
	cout << "\t\t" << "2 - Computer VS Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t\t\t\t\t\t" << "NEW GAME" << endl;
	cout << "\t\t\t\t\t" << "1 - Player  VS  Computer" << endl;
	cout << "\t\t\t" << "2 - Computer VS Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t\t\t\t\t\t" << "NEW GAME" << endl;;
	cout << "\t\t\t\t\t" << "1 - Player  VS  Computer" << endl;
	cout << "\t\t\t\t" << "2 - Computer VS Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t" << "####### " << "####### " << "    #     " << "    " << "######  " << "    #     " << "######## " << "######## " << "##      " << "#######" << endl;
	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t\t\t\t\t\t" << "NEW GAME" << endl;
	cout << "\t\t\t\t\t" << "1 - Player  VS  Computer" << endl;
	cout << "\t\t\t\t\t" << "2 - Computer VS Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	system("cls");
	Sleep(50);
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;

	cout << "\t\t" << "##      " << "##      " << "   ###    " << "    " << "##   ## " << "   ###    " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t\t\t\t\t" << "NEW GAME" << endl;
	cout << "\t\t\t\t" << "1 - Player  VS  Computer" << endl;
	cout << "\t\t\t\t" << "2 - Computer VS Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;


	cout << "\t\t" << "####### " << "####### " << "  ## ##   " << "    " << "######  " << "  ## ##   " << "   ##    " << "   ##    " << "##      " << "#######" << endl;
	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t\t\t\t" << "NEW GAME" << endl;
	cout << "\t\t\t" << "1 - Player  VS  Computer" << endl;
	cout << "\t\t\t" << "2 - Computer VS Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;



	cout << "\t\t" << "     ## " << "##      " << " #######  " << "    " << "##   ## " << " #######  " << "   ##    " << "   ##    " << "##      " << "##     " << endl;
	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t\t\t" << "NEW GAME" << endl;
	cout << "\t\t" << "1 - Player  VS  Computer" << endl;
	cout << "\t\t" << "2 - Computer VS Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;




	cout << "\t\t" << "####### " << "####### " << "###   ### " << "    " << "######  " << "###   ### " << "   ##    " << "   ##    " << "####### " << "#######" << endl;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t\t" << "NEW GAME" << endl;
	cout << "\t" << "1 - Player  VS  Computer" << endl;
	cout << "\t" << "2 - Computer VS Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;
	cout << endl;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t" << "NEW GAME" << endl;
	cout << "1 - Player  VS  Computer" << endl;
	cout << "2 - Computer VS Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;
	cout << endl;


	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t" << "NEW GAME" << endl;
	cout << "1 - Player  VS  Computer" << endl;
	cout << "2 - Computer VS Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);

	Sleep(50);
	system("cls");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 9);


	cout << endl;


	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 14);
	cout << endl;
	cout << "\t" << "NEW GAME" << endl;
	cout << "1 - Player  VS  Computer" << endl;
	cout << "2 - Computer VS Computer";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 7);
	Sleep(50);

}
