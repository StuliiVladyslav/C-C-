#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h> 
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <string.h>
#include <string>
#include <iostream>
#include <time.h>
#include <sstream>
#include <string.h>
#include "print.h"
#include "foo.h"
#include <mmsystem.h>


class MapPC
{

public:
	int x, y, z, check;

	int arr[10][10];
	void cleanMap() { for (int i = 0; i < 10; i++) for (int j = 0; j < 10; j++) arr[i][j] = 0; }
	void show()
	{
		system("cls");
		cout << "\t";
		printRedEndl("ИГРОВОЕ ПОЛЕ PC - 1");
		printYellow("# |"); printBlue("  0"); printYellow("|"); printBlue("  1"); printYellow("|"); printBlue("  2"); printYellow("|"); printBlue("  3"); printYellow("|"); printBlue("  4");
		printYellow("|"); printBlue("  5"); printYellow("|"); printBlue("  6"); printYellow("|"); printBlue("  7"); printYellow("|"); printBlue("  8"); printYellow("|"); printBlue("  9"); printYellow("|");
		cout << endl;
		printYellowEndl("___________________________________________");
		for (int i = 0; i < 10; i++)
		{
			printBlue(i); printYellow(" |");
			for (int j = 0; j < 10; j++)
			{
				if (arr[i][j] == 1)
				{
					cout << "  "; printYellow("#"); printYellow("|");
				}
				if (arr[i][j] == 0)
				{
					cout << "  "; printYellow("#"); printYellow("|");
				}
				if (arr[i][j] == 2)
				{
					cout << "  "; printBlack("#"); printYellow("|");
				}
				if (arr[i][j] == 3)
				{
					cout << "  "; printRed("#"); printYellow("|");
				}

			}
			cout << endl;
			printYellowEndl("___________________________________________");
		}
	}
	void showAll()
	{
		system("cls");
		cout << "\t";
		printRedEndl("ИГРОВОЕ ПОЛЕ PC - 1");
		printYellow("# |"); printBlue("  0"); printYellow("|"); printBlue("  1"); printYellow("|"); printBlue("  2"); printYellow("|"); printBlue("  3"); printYellow("|"); printBlue("  4");
		printYellow("|"); printBlue("  5"); printYellow("|"); printBlue("  6"); printYellow("|"); printBlue("  7"); printYellow("|"); printBlue("  8"); printYellow("|"); printBlue("  9"); printYellow("|");
		cout << endl;
		printYellowEndl("___________________________________________");
		for (int i = 0; i < 10; i++)
		{
			printBlue(i); printYellow(" |");
			for (int j = 0; j < 10; j++)
			{
				if (arr[i][j] == 1)
				{
					cout << "  "; printBlue("#"); printYellow("|");
				}
				if (arr[i][j] == 0)
				{
					cout << "  "; printYellow("#"); printYellow("|");
				}
				if (arr[i][j] == 2)
				{
					cout << "  "; printBlack("#"); printYellow("|");
				}
				if (arr[i][j] == 3)
				{
					cout << "  "; printRed("#"); printYellow("|");
				}

			}
			cout << endl;
			printYellowEndl("___________________________________________");
		}
	}
	void newShipRandom()
	{
		//4 palub
		int count = 0;
		while (count < 1)
		{
			system("cls");


			x = rand() % 10;
			y = rand() % 10;
			z = rand() % 5;

			if (z == 2) //down
			{

				if (arr[x][y] == 1 || x + 3 > 9 || arr[x][y] == 1 || arr[x - 1][y] == 1 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 ||
					arr[x + 3][y] == 1 || arr[x + 4][y] == 1 || (arr[x - 1][y - 1] == 1 && y != 0) || (arr[x][y - 1] == 1 && y != 0) ||
					(arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0) || (arr[x + 3][y - 1] == 1 && y != 0) ||
					(arr[x + 4][y - 1] == 1 && y != 0) || (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) ||
					(arr[x + 1][y + 1] == 1 && y != 9) || (arr[x + 2][y + 1] == 1 && y != 9) || (arr[x + 3][y + 1] == 1 && y != 9) ||
					(arr[x + 4][y + 1] == 1 && y != 9))
				{

				}
				else
				{

					arr[x][y] = 1;
					arr[x + 1][y] = 1;
					arr[x + 2][y] = 1;
					arr[x + 3][y] = 1;

					count++;
				}


			}
			if (z == 1) //up // 
			{
				if (arr[x][y] == 1 || x < 3 || arr[x - 1][y] == 1 || arr[x - 2][y] == 1 || arr[x - 3][y] == 1 ||
					(arr[x - 4][y] == 1 && x != 3) || (arr[x - 4][y - 1] == 1 && x != 3) || (arr[x - 4][y + 1] == 1 && x != 3)
					|| (arr[x + 1][y] == 1 && x != 9) || (arr[x + 1][y - 1] == 1 && x != 9) || (arr[x + 1][y + 1] == 1 && x != 9)
					|| (arr[x][y + 1] == 1 && y != 9) || (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x - 2][y + 1] == 1 && y != 9)
					|| (arr[x - 3][y + 1] == 1 && y != 9) || (arr[x][y - 1] == 1 && y != 0) || (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x - 2][y - 1] == 1 && y != 0) || (arr[x - 3][y - 1] == 1 && y != 0))
				{

				}

				else
				{
					arr[x][y] = 1;
					arr[x - 1][y] = 1;
					arr[x - 2][y] = 1;
					arr[x - 3][y] = 1;

					count++;
				}

			}
			if (z == 3) //right
			{
				if (arr[x][y] == 1 || y > 6 || arr[x][y + 1] == 1 || arr[x][y + 2] == 1 || arr[x][y + 3] == 1 ||
					(arr[x][y + 4] == 1 && y + 3 > 9) || (arr[x - 1][y + 4] == 1 && y + 3 > 9) || (arr[x + 1][y + 4] == 1 && y + 3 > 9)
					|| arr[x][y - 1] == 1 || (arr[x + 1][y - 1] == 1 && x != 0) || (arr[x - 1][y - 1] == 1 && x != 0)
					|| (arr[x - 1][y] == 1 && x != 0) || (arr[x - 1][y + 1] == 1 && x != 0) || (arr[x - 1][y + 2] == 1 && x != 0)
					|| (arr[x - 1][y + 3] == 1 && x != 0) || (arr[x + 1][y] == 1 && x != 9) || (arr[x + 1][y + 1] == 1 && x != 9)
					|| (arr[x + 1][y + 2] == 1 && x != 9) || (arr[x + 1][y + 3] == 1 && x != 9))

				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x][y + 1] = 1;
					arr[x][y + 2] = 1;
					arr[x][y + 3] = 1;
					count++;
				}
			}
			if (z == 4) //left
			{
				if (arr[x][y] == 1 || y < 3 || arr[x][y - 1] == 1 || arr[x][y - 2] == 1 || arr[x][y - 3] == 1
					|| (arr[x][y - 4] == 1 && y != 3) || (arr[x][y + 1] == 1 && y != 9) || arr[x - 1][y - 1] == 1
					|| arr[x - 1][y - 2] == 1 || arr[x - 1][y - 3] == 1 || arr[x + 1][y] == 1
					|| arr[x + 1][y - 1] == 1 || arr[x + 1][y - 2] == 1 || arr[x + 1][y - 3] == 1
					|| arr[x + 1][y - 4] == 1 || arr[x - 1][y - 4] == 1 || arr[x - 1][y + 1] == 1 || arr[x + 1][y + 1] == 1)
				{

				}

				else
				{


					arr[x][y] = 1;
					arr[x][y - 1] = 1;
					arr[x][y - 2] = 1;
					arr[x][y - 3] = 1;
					count++;
				}
			}

		}
		//3 palub
		count = 0;
		while (count < 2)
		{
			system("cls");
			x = rand() % 10;
			y = rand() % 10;
			z = rand() % 5;

			if (z == 2) //down +
			{

				if (arr[x][y] == 1 || x > 7 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 || arr[x + 3][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9)
					|| (arr[x + 2][y + 1] == 1 && y != 9) || (arr[x + 3][y + 1] == 1 && y != 9) || (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0)
					|| (arr[x + 3][y - 1] == 1 && y != 0))
				{

				}
				else
				{

					arr[x][y] = 1;
					arr[x + 1][y] = 1;
					arr[x + 2][y] = 1;


					count++;
				}


			}
			if (z == 1) //up // +
			{
				if (arr[x][y] == 1 || x < 2 || arr[x][y] == 1 || arr[x - 1][y] == 1 || arr[x - 2][y] == 1 || (arr[x - 3][y] == 1 && y != 9)
					|| arr[x + 1][y] == 1 || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x][y - 1] == 1 && y != 0)
					|| (arr[x - 1][y - 1] == 1 && y != 0) || (arr[x - 2][y - 1] == 1 && y != 0) || (arr[x - 3][y - 1] == 1 && y != 0)
					|| (arr[x + 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x - 1][y + 1] == 1 && y != 9)
					|| (arr[x - 2][y + 1] == 1 && y != 9) || (arr[x - 3][y + 1] == 1 && y != 9))
				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x - 1][y] = 1;
					arr[x - 2][y] = 1;


					count++;
				}

			}
			if (z == 3) //right +
			{
				if (arr[x][y] == 1 || y > 7 || arr[x][y + 1] == 1 || arr[x][y + 2] == 1 || (arr[x][y + 3] == 1 && y != 7) || arr[x][y - 1] == 1 ||


					arr[x - 1][y - 1] == 1 || arr[x - 1][y] == 1 || arr[x - 1][y + 1] == 1 || arr[x - 1][y + 2] == 1 || (arr[x - 1][y + 3] == 1 && y != 7) ||

					arr[x + 1][y - 1] == 1 || arr[x + 1][y] == 1 || arr[x + 1][y + 1] == 1 || arr[x + 1][y + 2] == 1 || (arr[x + 1][y + 3] == 1 && y != 7))
				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x][y + 1] = 1;
					arr[x][y + 2] = 1;

					count++;
				}
			}
			if (z == 4) //left +
			{
				if (arr[x][y] == 1 || y < 2 || arr[x][y - 1] == 1 || arr[x][y - 2] == 1 || (arr[x][y - 3] == 1 && y != 2) || (arr[x][y + 1] == 1 && y != 9) ||


					(arr[x - 1][y + 1] == 1 && y != 9) || arr[x - 1][y] == 1 || arr[x - 1][y - 1] == 1 || arr[x - 1][y - 2] == 1 || (arr[x - 1][y - 3] == 1 && y != 2) ||

					(arr[x + 1][y + 1] == 1 && y != 9) || arr[x + 1][y] == 1 || arr[x + 1][y - 1] == 1 || arr[x + 1][y - 2] == 1 || (arr[x + 1][y - 3] == 1 && y != 2))
				{

				}

				else
				{


					arr[x][y] = 1;
					arr[x][y - 1] = 1;
					arr[x][y - 2] = 1;

					count++;
				}

			}

		}
		//2 palub
		count = 0;
		while (count < 3)
		{
			system("cls");
			x = rand() % 10;
			y = rand() % 10;
			z = rand() % 5;

			if (z == 2) //down +
			{

				if (arr[x][y] == 1 || x > 8 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9)
					|| (arr[x + 2][y + 1] == 1 && y != 9) || (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0))

				{

				}
				else
				{

					arr[x][y] = 1;
					arr[x + 1][y] = 1;



					count++;
				}


			}
			if (z == 1) //up // +
			{
				if (arr[x][y] == 1 || x < 1 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y - 1] == 1 && y != 0) || (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0)
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9) || (arr[x + 2][y + 1] == 1 && y != 9))
				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x - 1][y] = 1;



					count++;
				}

			}
			if (z == 3) //right 
			{
				if (arr[x][y] == 1 || y > 8 || arr[x][y + 1] == 1 || arr[x][y + 2] == 1 || arr[x][y - 1] == 1 ||


					arr[x - 1][y - 1] == 1 || arr[x - 1][y] == 1 || arr[x - 1][y + 1] == 1 || (arr[x - 1][y + 2] == 1 && y != 8) ||

					(arr[x + 1][y - 1] == 1 && x != 0) || arr[x + 1][y] == 1 || arr[x + 1][y + 1] == 1 || (arr[x + 1][y + 2] == 1 && y != 8))
				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x][y + 1] = 1;


					count++;
				}
			}
			if (z == 4) //left +
			{
				if (arr[x][y] == 1 || y < 1 || arr[x][y - 1] == 1 || (arr[x][y - 2] == 1 && y != 2) || (arr[x][y + 1] == 1 && y != 9) ||


					(arr[x - 1][y + 1] == 1 && y != 9) || arr[x - 1][y] == 1 || arr[x - 1][y - 1] == 1 || (arr[x - 1][y - 2] == 1 && y != 1) ||

					(arr[x + 1][y + 1] == 1 && y != 9) || arr[x + 1][y] == 1 || arr[x + 1][y - 1] == 1 || (arr[x + 1][y - 2] == 1 && y != 1))
				{

				}

				else
				{


					arr[x][y] = 1;
					arr[x][y - 1] = 1;


					count++;
				}

			}

		}
		//1 palub
		count = 0;
		while (count < 4)
		{
			system("cls");
			x = rand() % 10;
			y = rand() % 10;

			z = 2;

			if (z == 2) //down 
			{

				if (arr[x][y] == 1 || arr[x + 1][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9)
					|| (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0))

				{

				}
				else
				{

					arr[x][y] = 1;


					count++;
				}


			}


		}
	}
	void attackPC()
	{
		int count = 0;
		while (count < 1)
		{
			show();
			cout << endl;

			printYellowEndl("Капитан, куда желаете шмальнуть?");
			printYellowEndl("Введите координаты 'х' и 'у'");
			printYellow("Введите координату 'х' (ПО ВЕРТИКАЛИ)-->"); cin >> x;
			printYellow("Введите координату 'y' (ПО ГОРИЗОНТАЛИ)-->"); cin >> y;
			//x = rand() % 10;
			//y = rand() % 10;
			//while (arr[x][y] == 2 || arr[x][y] == 3)
			//{ 
			//x = rand() % 10;
			//y = rand() % 10;
			//} //wh


			if (arr[x][y] == 0) // пусто
			{
				arr[x][y] = 2;
				system("cls");
				show();
				cout << endl;
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				printRedEndl("Промах! :(");
				/*count++;*/
				PlaySound(TEXT("miss.wav"), NULL, SND_FILENAME | SND_ASYNC);
				Sleep(2000);
				count++;

			}
			else if (arr[x][y] == 1) // корабль
			{
				arr[x][y] = 3;
				//test
				if (arr[x + 1][y] != 1 && arr[x - 1][y] != 1 && arr[x][y + 1] != 1 && arr[x][y - 1] != 1)
				{
					if (arr[x + 1][y] != 3)arr[x + 1][y] = 2;
					if (arr[x + 1][y - 1] != 3)arr[x + 1][y - 1] = 2;
					if (arr[x + 1][y + 1] != 3)arr[x + 1][y + 1] = 2;
					if (arr[x - 1][y] != 3)arr[x - 1][y] = 2;
					if (arr[x - 1][y + 1] != 3)arr[x - 1][y + 1] = 2;
					if (arr[x - 1][y - 1] != 3)arr[x - 1][y - 1] = 2;
					if (arr[x][y - 1] != 3)arr[x][y - 1] = 2;
					if (arr[x][y + 1] != 3)arr[x][y + 1] = 2;

				}
				//test
				system("cls");
				show();
				cout << endl;
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				printGreenEndl("Ха - Ха! Прямое попадание");
				PlaySound(TEXT("boom.wav"), NULL, SND_FILENAME | SND_ASYNC);
				Sleep(2000);
				if (LoseCheck() == 0)
				{
					return;
				}
			}
			else if (arr[x][y] == 2) // уже стрелял
			{

				system("cls");
				show();
				cout << endl;
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				printRedEndl("Капитан, что с прицелом? Повторите выстрел.");
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);
			}
			else if (arr[x][y] == 3) // подбитый
			{
				system("cls");
				show();
				cout << endl;
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				printRedEndl("Капитан, что с прицелом? Повторите выстрел.");
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);


			}


		}
	}
	void attackPCvsPC()
	{
		int count = 0;
		while (count < 1)
		{
			showAll();
			cout << endl;
			printBlueEndl("Ход PC - 2");
			Sleep(2000);

			x = rand() % 10;
			y = rand() % 10;
			while (arr[x][y] == 2 || arr[x][y] == 3)
			{
				x = rand() % 10;
				y = rand() % 10;
			} //wh


			if (arr[x][y] == 0) // пусто
			{
				arr[x][y] = 2;
				system("cls");
				showAll();

				cout << endl;
				printBlueEndl("Ход PC - 2");
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);

				printBlueEndl("Промазал!");
				/*count++;*/
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);
				count++;

			}
			else if (arr[x][y] == 1) // корабль
			{
				arr[x][y] = 3;
				//test
				if (arr[x + 1][y] != 1 && arr[x - 1][y] != 1 && arr[x][y + 1] != 1 && arr[x][y - 1] != 1)
				{
					if (arr[x + 1][y] != 3)arr[x + 1][y] = 2;
					if (arr[x + 1][y - 1] != 3)arr[x + 1][y - 1] = 2;
					if (arr[x + 1][y + 1] != 3)arr[x + 1][y + 1] = 2;
					if (arr[x - 1][y] != 3)arr[x - 1][y] = 2;
					if (arr[x - 1][y + 1] != 3)arr[x - 1][y + 1] = 2;
					if (arr[x - 1][y - 1] != 3)arr[x - 1][y - 1] = 2;
					if (arr[x][y - 1] != 3)arr[x][y - 1] = 2;
					if (arr[x][y + 1] != 3)arr[x][y + 1] = 2;

				}
				//test
				system("cls");
				showAll();

				cout << endl;
				printBlueEndl("Ход PC - 2");
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);

				printBlueEndl("Прямое попадание");
				/*PlaySound(TEXT("D:\\boom.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);
				if (LoseCheck() == 0)
				{
					return;
				}
			}
			else if (arr[x][y] == 2) // уже стрелял
			{

				system("cls");
				showAll();

				cout << endl;
				printBlueEndl("Ход PC - 2");
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				/*printRedEndl("Капитан, что с прицелом? Повторите выстрел.");*/
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);
			}
			else if (arr[x][y] == 3) // подбитый
			{
				system("cls");
				showAll();

				cout << endl;
				printBlueEndl("Ход PC - 2");
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				/*printRedEndl("Капитан, что с прицелом? Повторите выстрел.");*/
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);


			}


		}
	}
	int LoseCheck()
	{
		check = 0;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (arr[i][j] == 1)
				{
					check++;
				}
			}
		}
		return check;

	}
};
class MapPC2
{

public:
	int x, y, z, check;
	int arr[10][10];
	void cleanMap() { for (int i = 0; i < 10; i++) for (int j = 0; j < 10; j++) arr[i][j] = 0; }
	void show()
	{
		system("cls");
		cout << "\t";
		printBlueEndl("ИГРОВОЕ ПОЛЕ PC - 2");
		printYellow("# |"); printBlue("  0"); printYellow("|"); printBlue("  1"); printYellow("|"); printBlue("  2"); printYellow("|"); printBlue("  3"); printYellow("|"); printBlue("  4");
		printYellow("|"); printBlue("  5"); printYellow("|"); printBlue("  6"); printYellow("|"); printBlue("  7"); printYellow("|"); printBlue("  8"); printYellow("|"); printBlue("  9"); printYellow("|");
		cout << endl;
		printYellowEndl("___________________________________________");
		for (int i = 0; i < 10; i++)
		{
			printBlue(i); printYellow(" |");
			for (int j = 0; j < 10; j++)
			{
				if (arr[i][j] == 1)
				{
					cout << "  "; printYellow("#"); printYellow("|");
				}
				if (arr[i][j] == 0)
				{
					cout << "  "; printYellow("#"); printYellow("|");
				}
				if (arr[i][j] == 2)
				{
					cout << "  "; printBlack("#"); printYellow("|");
				}
				if (arr[i][j] == 3)
				{
					cout << "  "; printRed("#"); printYellow("|");
				}

			}
			cout << endl;
			printYellowEndl("___________________________________________");
		}
	}
	void showAll()
	{
		system("cls");
		cout << "\t";
		printBlueEndl("ИГРОВОЕ ПОЛЕ PC - 2");
		printYellow("# |"); printBlue("  0"); printYellow("|"); printBlue("  1"); printYellow("|"); printBlue("  2"); printYellow("|"); printBlue("  3"); printYellow("|"); printBlue("  4");
		printYellow("|"); printBlue("  5"); printYellow("|"); printBlue("  6"); printYellow("|"); printBlue("  7"); printYellow("|"); printBlue("  8"); printYellow("|"); printBlue("  9"); printYellow("|");
		cout << endl;
		printYellowEndl("___________________________________________");
		for (int i = 0; i < 10; i++)
		{
			printBlue(i); printYellow(" |");
			for (int j = 0; j < 10; j++)
			{
				if (arr[i][j] == 1)
				{
					cout << "  "; printBlue("#"); printYellow("|");
				}
				if (arr[i][j] == 0)
				{
					cout << "  "; printYellow("#"); printYellow("|");
				}
				if (arr[i][j] == 2)
				{
					cout << "  "; printBlack("#"); printYellow("|");
				}
				if (arr[i][j] == 3)
				{
					cout << "  "; printRed("#"); printYellow("|");
				}

			}
			cout << endl;
			printYellowEndl("___________________________________________");
		}
	}
	void newShipRandom()
	{
		//4 palub
		int count = 0;
		while (count < 1)
		{
			system("cls");


			x = rand() % 10;
			y = rand() % 10;
			z = rand() % 5;

			if (z == 2) //down
			{

				if (arr[x][y] == 1 || x + 3 > 9 || arr[x][y] == 1 || arr[x - 1][y] == 1 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 ||
					arr[x + 3][y] == 1 || arr[x + 4][y] == 1 || (arr[x - 1][y - 1] == 1 && y != 0) || (arr[x][y - 1] == 1 && y != 0) ||
					(arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0) || (arr[x + 3][y - 1] == 1 && y != 0) ||
					(arr[x + 4][y - 1] == 1 && y != 0) || (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) ||
					(arr[x + 1][y + 1] == 1 && y != 9) || (arr[x + 2][y + 1] == 1 && y != 9) || (arr[x + 3][y + 1] == 1 && y != 9) ||
					(arr[x + 4][y + 1] == 1 && y != 9))
				{

				}
				else
				{

					arr[x][y] = 1;
					arr[x + 1][y] = 1;
					arr[x + 2][y] = 1;
					arr[x + 3][y] = 1;

					count++;
				}


			}
			if (z == 1) //up // 
			{
				if (arr[x][y] == 1 || x < 3 || arr[x - 1][y] == 1 || arr[x - 2][y] == 1 || arr[x - 3][y] == 1 ||
					(arr[x - 4][y] == 1 && x != 3) || (arr[x - 4][y - 1] == 1 && x != 3) || (arr[x - 4][y + 1] == 1 && x != 3)
					|| (arr[x + 1][y] == 1 && x != 9) || (arr[x + 1][y - 1] == 1 && x != 9) || (arr[x + 1][y + 1] == 1 && x != 9)
					|| (arr[x][y + 1] == 1 && y != 9) || (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x - 2][y + 1] == 1 && y != 9)
					|| (arr[x - 3][y + 1] == 1 && y != 9) || (arr[x][y - 1] == 1 && y != 0) || (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x - 2][y - 1] == 1 && y != 0) || (arr[x - 3][y - 1] == 1 && y != 0))
				{

				}

				else
				{
					arr[x][y] = 1;
					arr[x - 1][y] = 1;
					arr[x - 2][y] = 1;
					arr[x - 3][y] = 1;

					count++;
				}

			}
			if (z == 3) //right
			{
				if (arr[x][y] == 1 || y > 6 || arr[x][y + 1] == 1 || arr[x][y + 2] == 1 || arr[x][y + 3] == 1 ||
					(arr[x][y + 4] == 1 && y + 3 > 9) || (arr[x - 1][y + 4] == 1 && y + 3 > 9) || (arr[x + 1][y + 4] == 1 && y + 3 > 9)
					|| arr[x][y - 1] == 1 || (arr[x + 1][y - 1] == 1 && x != 0) || (arr[x - 1][y - 1] == 1 && x != 0)
					|| (arr[x - 1][y] == 1 && x != 0) || (arr[x - 1][y + 1] == 1 && x != 0) || (arr[x - 1][y + 2] == 1 && x != 0)
					|| (arr[x - 1][y + 3] == 1 && x != 0) || (arr[x + 1][y] == 1 && x != 9) || (arr[x + 1][y + 1] == 1 && x != 9)
					|| (arr[x + 1][y + 2] == 1 && x != 9) || (arr[x + 1][y + 3] == 1 && x != 9))

				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x][y + 1] = 1;
					arr[x][y + 2] = 1;
					arr[x][y + 3] = 1;
					count++;
				}
			}
			if (z == 4) //left
			{
				if (arr[x][y] == 1 || y < 3 || arr[x][y - 1] == 1 || arr[x][y - 2] == 1 || arr[x][y - 3] == 1
					|| (arr[x][y - 4] == 1 && y != 3) || (arr[x][y + 1] == 1 && y != 9) || arr[x - 1][y - 1] == 1
					|| arr[x - 1][y - 2] == 1 || arr[x - 1][y - 3] == 1 || arr[x + 1][y] == 1
					|| arr[x + 1][y - 1] == 1 || arr[x + 1][y - 2] == 1 || arr[x + 1][y - 3] == 1
					|| arr[x + 1][y - 4] == 1 || arr[x - 1][y - 4] == 1 || arr[x - 1][y + 1] == 1 || arr[x + 1][y + 1] == 1)
				{

				}

				else
				{


					arr[x][y] = 1;
					arr[x][y - 1] = 1;
					arr[x][y - 2] = 1;
					arr[x][y - 3] = 1;
					count++;
				}
			}

		}
		//3 palub
		count = 0;
		while (count < 2)
		{
			system("cls");
			x = rand() % 10;
			y = rand() % 10;
			z = rand() % 5;

			if (z == 2) //down +
			{

				if (arr[x][y] == 1 || x > 7 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 || arr[x + 3][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9)
					|| (arr[x + 2][y + 1] == 1 && y != 9) || (arr[x + 3][y + 1] == 1 && y != 9) || (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0)
					|| (arr[x + 3][y - 1] == 1 && y != 0))
				{

				}
				else
				{

					arr[x][y] = 1;
					arr[x + 1][y] = 1;
					arr[x + 2][y] = 1;


					count++;
				}


			}
			if (z == 1) //up // +
			{
				if (arr[x][y] == 1 || x < 2 || arr[x][y] == 1 || arr[x - 1][y] == 1 || arr[x - 2][y] == 1 || (arr[x - 3][y] == 1 && y != 9)
					|| arr[x + 1][y] == 1 || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x][y - 1] == 1 && y != 0)
					|| (arr[x - 1][y - 1] == 1 && y != 0) || (arr[x - 2][y - 1] == 1 && y != 0) || (arr[x - 3][y - 1] == 1 && y != 0)
					|| (arr[x + 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x - 1][y + 1] == 1 && y != 9)
					|| (arr[x - 2][y + 1] == 1 && y != 9) || (arr[x - 3][y + 1] == 1 && y != 9))
				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x - 1][y] = 1;
					arr[x - 2][y] = 1;


					count++;
				}

			}
			if (z == 3) //right +
			{
				if (arr[x][y] == 1 || y > 7 || arr[x][y + 1] == 1 || arr[x][y + 2] == 1 || (arr[x][y + 3] == 1 && y != 7) || arr[x][y - 1] == 1 ||


					arr[x - 1][y - 1] == 1 || arr[x - 1][y] == 1 || arr[x - 1][y + 1] == 1 || arr[x - 1][y + 2] == 1 || (arr[x - 1][y + 3] == 1 && y != 7) ||

					arr[x + 1][y - 1] == 1 || arr[x + 1][y] == 1 || arr[x + 1][y + 1] == 1 || arr[x + 1][y + 2] == 1 || (arr[x + 1][y + 3] == 1 && y != 7))
				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x][y + 1] = 1;
					arr[x][y + 2] = 1;

					count++;
				}
			}
			if (z == 4) //left +
			{
				if (arr[x][y] == 1 || y < 2 || arr[x][y - 1] == 1 || arr[x][y - 2] == 1 || (arr[x][y - 3] == 1 && y != 2) || (arr[x][y + 1] == 1 && y != 9) ||


					(arr[x - 1][y + 1] == 1 && y != 9) || arr[x - 1][y] == 1 || arr[x - 1][y - 1] == 1 || arr[x - 1][y - 2] == 1 || (arr[x - 1][y - 3] == 1 && y != 2) ||

					(arr[x + 1][y + 1] == 1 && y != 9) || arr[x + 1][y] == 1 || arr[x + 1][y - 1] == 1 || arr[x + 1][y - 2] == 1 || (arr[x + 1][y - 3] == 1 && y != 2))
				{

				}

				else
				{


					arr[x][y] = 1;
					arr[x][y - 1] = 1;
					arr[x][y - 2] = 1;

					count++;
				}

			}

		}
		//2 palub
		count = 0;
		while (count < 3)
		{
			system("cls");
			x = rand() % 10;
			y = rand() % 10;
			z = rand() % 5;

			if (z == 2) //down +
			{

				if (arr[x][y] == 1 || x > 8 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9)
					|| (arr[x + 2][y + 1] == 1 && y != 9) || (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0))

				{

				}
				else
				{

					arr[x][y] = 1;
					arr[x + 1][y] = 1;



					count++;
				}


			}
			if (z == 1) //up // +
			{
				if (arr[x][y] == 1 || x < 1 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y - 1] == 1 && y != 0) || (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0)
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9) || (arr[x + 2][y + 1] == 1 && y != 9))
				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x - 1][y] = 1;



					count++;
				}

			}
			if (z == 3) //right 
			{
				if (arr[x][y] == 1 || y > 8 || arr[x][y + 1] == 1 || arr[x][y + 2] == 1 || arr[x][y - 1] == 1 ||


					arr[x - 1][y - 1] == 1 || arr[x - 1][y] == 1 || arr[x - 1][y + 1] == 1 || (arr[x - 1][y + 2] == 1 && y != 8) ||

					(arr[x + 1][y - 1] == 1 && x != 0) || arr[x + 1][y] == 1 || arr[x + 1][y + 1] == 1 || (arr[x + 1][y + 2] == 1 && y != 8))
				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x][y + 1] = 1;


					count++;
				}
			}
			if (z == 4) //left +
			{
				if (arr[x][y] == 1 || y < 1 || arr[x][y - 1] == 1 || (arr[x][y - 2] == 1 && y != 2) || (arr[x][y + 1] == 1 && y != 9) ||


					(arr[x - 1][y + 1] == 1 && y != 9) || arr[x - 1][y] == 1 || arr[x - 1][y - 1] == 1 || (arr[x - 1][y - 2] == 1 && y != 1) ||

					(arr[x + 1][y + 1] == 1 && y != 9) || arr[x + 1][y] == 1 || arr[x + 1][y - 1] == 1 || (arr[x + 1][y - 2] == 1 && y != 1))
				{

				}

				else
				{


					arr[x][y] = 1;
					arr[x][y - 1] = 1;


					count++;
				}

			}

		}
		//1 palub
		count = 0;
		while (count < 4)
		{
			system("cls");
			x = rand() % 10;
			y = rand() % 10;

			z = 2;

			if (z == 2) //down 
			{

				if (arr[x][y] == 1 || arr[x + 1][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9)
					|| (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0))

				{

				}
				else
				{

					arr[x][y] = 1;


					count++;
				}


			}


		}
	}
	void attackPC()
	{
		int count = 0;
		while (count < 1)
		{
			show();
			cout << endl;

			printYellowEndl("Капитан, куда желаете шмальнуть?");
			printYellowEndl("Введите координаты 'х' и 'у'");
			printYellow("Введите координату 'х' (ПО ВЕРТИКАЛИ)-->"); cin >> x;
			printYellow("Введите координату 'y' (ПО ГОРИЗОНТАЛИ)-->"); cin >> y;
			//x = rand() % 10;
			//y = rand() % 10;
			//while (arr[x][y] == 2 || arr[x][y] == 3)
			//{ 
			//x = rand() % 10;
			//y = rand() % 10;
			//} //wh


			if (arr[x][y] == 0) // пусто
			{
				arr[x][y] = 2;
				system("cls");
				show();
				cout << endl;
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				printRedEndl("Промах! :(");
				/*count++;*/
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);
				count++;

			}
			else if (arr[x][y] == 1) // корабль
			{
				arr[x][y] = 3;
				//test
				if (arr[x + 1][y] != 1 && arr[x - 1][y] != 1 && arr[x][y + 1] != 1 && arr[x][y - 1] != 1)
				{
					if (arr[x + 1][y] != 3)arr[x + 1][y] = 2;
					if (arr[x + 1][y - 1] != 3)arr[x + 1][y - 1] = 2;
					if (arr[x + 1][y + 1] != 3)arr[x + 1][y + 1] = 2;
					if (arr[x - 1][y] != 3)arr[x - 1][y] = 2;
					if (arr[x - 1][y + 1] != 3)arr[x - 1][y + 1] = 2;
					if (arr[x - 1][y - 1] != 3)arr[x - 1][y - 1] = 2;
					if (arr[x][y - 1] != 3)arr[x][y - 1] = 2;
					if (arr[x][y + 1] != 3)arr[x][y + 1] = 2;

				}
				//test
				system("cls");
				show();
				cout << endl;
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				printGreenEndl("Ха - Ха! Прямое попадание");
				/*PlaySound(TEXT("D:\\boom.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);
				if (LoseCheck() == 0)
				{
					return;
				}
			}
			else if (arr[x][y] == 2) // уже стрелял
			{

				system("cls");
				show();
				cout << endl;
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				printRedEndl("Капитан, что с прицелом? Повторите выстрел.");
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);
			}
			else if (arr[x][y] == 3) // подбитый
			{
				system("cls");
				show();
				cout << endl;
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				printRedEndl("Капитан, что с прицелом? Повторите выстрел.");
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);


			}


		}
	}
	void attackPCvsPC()
	{
		int count = 0;
		while (count < 1)
		{
			showAll();

			cout << endl;

			printRedEndl("Ход PC - 1");
			Sleep(2000);

			x = rand() % 10;
			y = rand() % 10;
			while (arr[x][y] == 2 || arr[x][y] == 3)
			{
				x = rand() % 10;
				y = rand() % 10;
			} //wh


			if (arr[x][y] == 0) // пусто
			{
				arr[x][y] = 2;
				system("cls");
				showAll();

				cout << endl;
				printRedEndl("Ход PC - 1");
				printRed("Координаты: "); printRed(x); printRed(" "); printRed(y);
				cout << endl;
				printRedEndl("Промазал!");
				/*count++;*/
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);
				count++;

			}
			else if (arr[x][y] == 1) // корабль
			{
				arr[x][y] = 3;
				//test
				if (arr[x + 1][y] != 1 && arr[x - 1][y] != 1 && arr[x][y + 1] != 1 && arr[x][y - 1] != 1)
				{
					if (arr[x + 1][y] != 3)arr[x + 1][y] = 2;
					if (arr[x + 1][y - 1] != 3)arr[x + 1][y - 1] = 2;
					if (arr[x + 1][y + 1] != 3)arr[x + 1][y + 1] = 2;
					if (arr[x - 1][y] != 3)arr[x - 1][y] = 2;
					if (arr[x - 1][y + 1] != 3)arr[x - 1][y + 1] = 2;
					if (arr[x - 1][y - 1] != 3)arr[x - 1][y - 1] = 2;
					if (arr[x][y - 1] != 3)arr[x][y - 1] = 2;
					if (arr[x][y + 1] != 3)arr[x][y + 1] = 2;

				}
				//test
				system("cls");
				showAll();

				cout << endl;
				printRedEndl("Ход PC - 1");
				printRed("Координаты: "); printRed(x); printRed(" "); printRedEndl(y);

				printRedEndl("Прямое попадание");
				/*PlaySound(TEXT("D:\\boom.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);
				if (LoseCheck() == 0)
				{
					return;
				}
			}
			else if (arr[x][y] == 2) // уже стрелял
			{

				system("cls");
				showAll();

				cout << endl;
				printRedEndl("Ход PC - 1");
				printRed("Координаты: "); printRed(x); printRed(" "); printRedEndl(y);

				/*printRedEndl("Капитан, что с прицелом? Повторите выстрел.");*/
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);
			}
			else if (arr[x][y] == 3) // подбитый
			{
				system("cls");
				showAll();

				cout << endl;
				printRedEndl("Ход PC - 1");
				printRedEndl("Координаты: "); printRed(x); printRed(" "); printRedEndl(y);

				/*printRedEndl("Капитан, что с прицелом? Повторите выстрел.");*/
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);


			}


		}
	}
	int LoseCheck()
	{
		check = 0;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (arr[i][j] == 1)
				{
					check++;
				}
			}
		}
		return check;

	}
};
class Map
{
public:
	int x, y, z, check;
	int arr[10][10];
	void cleanMap() { for (int i = 0; i < 10; i++) for (int j = 0; j < 10; j++) arr[i][j] = 0; }
	void show()
	{
		system("cls");
		cout << "\t";
		printGreenEndl("ВАШЕ ИГРОВОЕ ПОЛЕ");
		printYellow("# |"); printBlue("  0"); printYellow("|"); printBlue("  1"); printYellow("|"); printBlue("  2"); printYellow("|"); printBlue("  3"); printYellow("|"); printBlue("  4");
		printYellow("|"); printBlue("  5"); printYellow("|"); printBlue("  6"); printYellow("|"); printBlue("  7"); printYellow("|"); printBlue("  8"); printYellow("|"); printBlue("  9"); printYellow("|");
		cout << endl;
		printYellowEndl("___________________________________________");
		for (int i = 0; i < 10; i++)
		{
			printBlue(i); printYellow(" |");
			for (int j = 0; j < 10; j++)
			{
				if (arr[i][j] == 1)
				{
					cout << "  "; printBlue("#"); printYellow("|");
				}
				if (arr[i][j] == 0)
				{
					cout << "  "; printYellow("#"); printYellow("|");
				}
				if (arr[i][j] == 2)
				{
					cout << "  "; printBlack("#"); printYellow("|");
				}
				if (arr[i][j] == 3)
				{
					cout << "  "; printRed("#"); printYellow("|");
				}

			}
			cout << endl;
			printYellowEndl("___________________________________________");
		}
	}
	void newShip()
	{
		//4 palub
		int count = 0;
		while (count < 1)
		{
			system("cls");
			show();
			cout << endl;
			printYellowEndl("Капитан, куда желаете разместить свою посудину?");
			printYellowEndl("#### - Четырехпалубный корабль.");
			printYellowEndl("Введите координаты 'х' и 'у'");
			printYellow("Введите координату 'х' (ПО ВЕРТИКАЛИ)-->"); cin >> x; /*x = rand() % 10;*/
			printYellow("Введите координату 'y' (ПО ГОРИЗОНТАЛИ)-->"); cin >> y; /*y = rand() % 10;*/
			printYellow("Направление корабля (1 - UP, 2 - DOWN, 3 - RIGHT, 4 - LEFT)-->"); cin >> z;

			if (z == 2) //down +
			{

				if (arr[x][y] == 1 || x + 3 > 9 || arr[x][y] == 1 || arr[x - 1][y] == 1 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 ||
					arr[x + 3][y] == 1 || arr[x + 4][y] == 1 || (arr[x - 1][y - 1] == 1 && y != 0) || (arr[x][y - 1] == 1 && y != 0) ||
					(arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0) || (arr[x + 3][y - 1] == 1 && y != 0) ||
					(arr[x + 4][y - 1] == 1 && y != 0) || (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) ||
					(arr[x + 1][y + 1] == 1 && y != 9) || (arr[x + 2][y + 1] == 1 && y != 9) || (arr[x + 3][y + 1] == 1 && y != 9) ||
					(arr[x + 4][y + 1] == 1 && y != 9))
				{
					/*PlaySound(TEXT("D:\\error.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					printRedEndl("Ошибка! Корабль не должен соприкосаться с другими кораблями или выходить за пределы поля.");
					printRedEndl("Произведите повторное размещение корабля.");
					Sleep(3000);
				}
				else
				{
					/*PlaySound(TEXT("D:\\add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					arr[x][y] = 1;
					arr[x + 1][y] = 1;
					arr[x + 2][y] = 1;
					arr[x + 3][y] = 1;

					count++;
				}


			}
			if (z == 1) //up +
			{
				if (arr[x][y] == 1 || x < 3 || arr[x - 1][y] == 1 || arr[x - 2][y] == 1 || arr[x - 3][y] == 1 ||
					(arr[x - 4][y] == 1 && x != 3) || (arr[x - 4][y - 1] == 1 && x != 3) || (arr[x - 4][y + 1] == 1 && x != 3)
					|| (arr[x + 1][y] == 1 && x != 9) || (arr[x + 1][y - 1] == 1 && x != 9) || (arr[x + 1][y + 1] == 1 && x != 9)
					|| (arr[x][y + 1] == 1 && y != 9) || (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x - 2][y + 1] == 1 && y != 9)
					|| (arr[x - 3][y + 1] == 1 && y != 9) || (arr[x][y - 1] == 1 && y != 0) || (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x - 2][y - 1] == 1 && y != 0) || (arr[x - 3][y - 1] == 1 && y != 0))
				{
					/*PlaySound(TEXT("D:\\error.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					printRedEndl("Ошибка! Корабль не должен соприкосаться с другими кораблями или выходить за пределы поля.");
					printRedEndl("Произведите повторное размещение корабля.");
					Sleep(3000);
				}

				else
				{
					/*PlaySound(TEXT("D:\\add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					arr[x][y] = 1;
					arr[x - 1][y] = 1;
					arr[x - 2][y] = 1;
					arr[x - 3][y] = 1;

					count++;
				}

			}
			if (z == 3) //right +
			{
				if (arr[x][y] == 1 || y > 6 || arr[x][y + 1] == 1 || arr[x][y + 2] == 1 || arr[x][y + 3] == 1 ||
					(arr[x][y + 4] == 1 && y + 3 > 9) || (arr[x - 1][y + 4] == 1 && y + 3 > 9) || (arr[x + 1][y + 4] == 1 && y + 3 > 9)
					|| arr[x][y - 1] == 1 || (arr[x + 1][y - 1] == 1 && x != 0) || (arr[x - 1][y - 1] == 1 && x != 0)
					|| (arr[x - 1][y] == 1 && x != 0) || (arr[x - 1][y + 1] == 1 && x != 0) || (arr[x - 1][y + 2] == 1 && x != 0)
					|| (arr[x - 1][y + 3] == 1 && x != 0) || (arr[x + 1][y] == 1 && x != 9) || (arr[x + 1][y + 1] == 1 && x != 9)
					|| (arr[x + 1][y + 2] == 1 && x != 9) || (arr[x + 1][y + 3] == 1 && x != 9))

				{
					/*PlaySound(TEXT("D:\\error.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					printRedEndl("Ошибка! Корабль не должен соприкосаться с другими кораблями или выходить за пределы поля.");
					printRedEndl("Произведите повторное размещение корабля.");
					Sleep(3000);
				}

				else
				{
					/*PlaySound(TEXT("D:\\add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					arr[x][y] = 1;
					arr[x][y + 1] = 1;
					arr[x][y + 2] = 1;
					arr[x][y + 3] = 1;
					count++;
				}
			}
			if (z == 4) //left +
			{
				if (arr[x][y] == 1 || y < 3 || arr[x][y - 1] == 1 || arr[x][y - 2] == 1 || arr[x][y - 3] == 1
					|| (arr[x][y - 4] == 1 && y != 3) || (arr[x][y + 1] == 1 && y != 9) || arr[x - 1][y - 1] == 1
					|| arr[x - 1][y - 2] == 1 || arr[x - 1][y - 3] == 1 || arr[x + 1][y] == 1
					|| arr[x + 1][y - 1] == 1 || arr[x + 1][y - 2] == 1 || arr[x + 1][y - 3] == 1
					|| arr[x + 1][y - 4] == 1 || arr[x - 1][y - 4] == 1 || arr[x - 1][y + 1] == 1 || arr[x + 1][y + 1] == 1)
				{
					/*PlaySound(TEXT("D:\\error.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					printRedEndl("Ошибка! Корабль не должен соприкосаться с другими кораблями или выходить за пределы поля.");
					printRedEndl("Произведите повторное размещение корабля.");
					Sleep(3000);
				}

				else
				{

					/*PlaySound(TEXT("D:\\add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					arr[x][y] = 1;
					arr[x][y - 1] = 1;
					arr[x][y - 2] = 1;
					arr[x][y - 3] = 1;
					count++;
				}
			}

		}
		//3 palub
		count = 0;
		while (count < 2)
		{
			system("cls");
			show();
			cout << endl;
			printYellowEndl("Капитан, куда желаете разместить свою посудину?");
			printYellowEndl("### - Трехпалубный корабль.");
			printYellowEndl("Введите координаты 'х' и 'у'");
			printYellow("Введите координату 'х' (ПО ВЕРТИКАЛИ)-->"); cin >> x; /*x = rand() % 10;*/
			printYellow("Введите координату 'y' (ПО ГОРИЗОНТАЛИ)-->"); cin >> y; /*y = rand() % 10;*/
			printYellow("Направление корабля (1 - UP, 2 - DOWN, 3 - RIGHT, 4 - LEFT)-->"); cin >> z;

			if (z == 2) //down +
			{

				if (arr[x][y] == 1 || x > 7 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 || arr[x + 3][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9)
					|| (arr[x + 2][y + 1] == 1 && y != 9) || (arr[x + 3][y + 1] == 1 && y != 9) || (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0)
					|| (arr[x + 3][y - 1] == 1 && y != 0))
				{
					/*PlaySound(TEXT("D:\\error.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					printRedEndl("Ошибка! Корабль не должен соприкосаться с другими кораблями или выходить за пределы поля.");
					printRedEndl("Произведите повторное размещение корабля.");
					Sleep(3000);
				}
				else
				{
					/*PlaySound(TEXT("D:\\add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					arr[x][y] = 1;
					arr[x + 1][y] = 1;
					arr[x + 2][y] = 1;


					count++;
				}


			}
			if (z == 1) //up // +
			{
				if (arr[x][y] == 1 || x < 2 || arr[x][y] == 1 || arr[x - 1][y] == 1 || arr[x - 2][y] == 1 || (arr[x - 3][y] == 1 && y != 9)
					|| arr[x + 1][y] == 1 || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x][y - 1] == 1 && y != 0)
					|| (arr[x - 1][y - 1] == 1 && y != 0) || (arr[x - 2][y - 1] == 1 && y != 0) || (arr[x - 3][y - 1] == 1 && y != 0)
					|| (arr[x + 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x - 1][y + 1] == 1 && y != 9)
					|| (arr[x - 2][y + 1] == 1 && y != 9) || (arr[x - 3][y + 1] == 1 && y != 9))
				{
					/*PlaySound(TEXT("D:\\error.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					printRedEndl("Ошибка! Корабль не должен соприкосаться с другими кораблями или выходить за пределы поля.");
					printRedEndl("Произведите повторное размещение корабля.");
					Sleep(3000);
				}

				else
				{
					/*PlaySound(TEXT("D:\\add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					arr[x][y] = 1;
					arr[x - 1][y] = 1;
					arr[x - 2][y] = 1;


					count++;
				}

			}
			if (z == 3) //right +
			{
				if (arr[x][y] == 1 || y > 7 || arr[x][y + 1] == 1 || arr[x][y + 2] == 1 || (arr[x][y + 3] == 1 && y != 7) || arr[x][y - 1] == 1 ||


					arr[x - 1][y - 1] == 1 || arr[x - 1][y] == 1 || arr[x - 1][y + 1] == 1 || arr[x - 1][y + 2] == 1 || (arr[x - 1][y + 3] == 1 && y != 7) ||

					arr[x + 1][y - 1] == 1 || arr[x + 1][y] == 1 || arr[x + 1][y + 1] == 1 || arr[x + 1][y + 2] == 1 || (arr[x + 1][y + 3] == 1 && y != 7))
				{
					/*PlaySound(TEXT("D:\\error.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					printRedEndl("Ошибка! Корабль не должен соприкосаться с другими кораблями или выходит	ь за пределы поля.");
					printRedEndl("Произведите повторное размещение корабля.");
					Sleep(3000);
				}

				else
				{
					/*PlaySound(TEXT("D:\\add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					arr[x][y] = 1;
					arr[x][y + 1] = 1;
					arr[x][y + 2] = 1;

					count++;
				}
			}
			if (z == 4) //left +
			{
				if (arr[x][y] == 1 || y < 2 || arr[x][y - 1] == 1 || arr[x][y - 2] == 1 || (arr[x][y - 3] == 1 && y != 2) || (arr[x][y + 1] == 1 && y != 9) ||


					(arr[x - 1][y + 1] == 1 && y != 9) || arr[x - 1][y] == 1 || arr[x - 1][y - 1] == 1 || arr[x - 1][y - 2] == 1 || (arr[x - 1][y - 3] == 1 && y != 2) ||

					(arr[x + 1][y + 1] == 1 && y != 9) || arr[x + 1][y] == 1 || arr[x + 1][y - 1] == 1 || arr[x + 1][y - 2] == 1 || (arr[x + 1][y - 3] == 1 && y != 2))
				{
					/*PlaySound(TEXT("D:\\error.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					printRedEndl("Ошибка! Корабль не должен соприкосаться с другими кораблями или выходить за пределы поля.");
					printRedEndl("Произведите повторное размещение корабля.");
					Sleep(3000);
				}

				else
				{

					/*PlaySound(TEXT("D:\\add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					arr[x][y] = 1;
					arr[x][y - 1] = 1;
					arr[x][y - 2] = 1;

					count++;
				}

			}

		}
		//2 palub
		count = 0;
		while (count < 3)
		{
			system("cls");
			show();
			cout << endl;
			printYellowEndl("Капитан, куда желаете разместить свою посудину?");
			printYellowEndl("## - Двухпалубный корабль.");
			printYellowEndl("Введите координаты 'х' и 'у'");
			printYellow("Введите координату 'х' (ПО ВЕРТИКАЛИ)-->"); cin >> x; /*x = rand() % 10;*/
			printYellow("Введите координату 'y' (ПО ГОРИЗОНТАЛИ)-->"); cin >> y; /*y = rand() % 10;*/
			printYellow("Направление корабля (1 - UP, 2 - DOWN, 3 - RIGHT, 4 - LEFT)-->"); cin >> z;

			if (z == 2) //down +
			{

				if (arr[x][y] == 1 || x > 8 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9)
					|| (arr[x + 2][y + 1] == 1 && y != 9) || (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0))

				{
					/*PlaySound(TEXT("D:\\error.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					printRedEndl("Ошибка! Корабль не должен соприкосаться с другими кораблями или выходить за пределы поля.");
					printRedEndl("Произведите повторное размещение корабля.");
					Sleep(3000);
				}
				else
				{
					/*PlaySound(TEXT("D:\\add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					arr[x][y] = 1;
					arr[x + 1][y] = 1;



					count++;
				}


			}
			if (z == 1) //up // +
			{
				if (arr[x][y] == 1 || x < 1 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y - 1] == 1 && y != 0) || (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0)
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9) || (arr[x + 2][y + 1] == 1 && y != 9))
				{
					/*PlaySound(TEXT("D:\\error.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					printRedEndl("Ошибка! Корабль не должен соприкосаться с другими кораблями или выходить за пределы поля.");
					printRedEndl("Произведите повторное размещение корабля.");
					Sleep(3000);
				}

				else
				{
					/*PlaySound(TEXT("D:\\add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					arr[x][y] = 1;
					arr[x - 1][y] = 1;



					count++;
				}

			}
			if (z == 3) //right 
			{
				if (arr[x][y] == 1 || y > 8 || arr[x][y + 1] == 1 || arr[x][y + 2] == 1 || arr[x][y - 1] == 1 ||


					arr[x - 1][y - 1] == 1 || arr[x - 1][y] == 1 || arr[x - 1][y + 1] == 1 || (arr[x - 1][y + 2] == 1 && y != 8) ||

					(arr[x + 1][y - 1] == 1 && x != 0) || arr[x + 1][y] == 1 || arr[x + 1][y + 1] == 1 || (arr[x + 1][y + 2] == 1 && y != 8))
				{
					/*PlaySound(TEXT("D:\\error.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					printRedEndl("Ошибка! Корабль не должен соприкосаться с другими кораблями или выходит	ь за пределы поля.");
					printRedEndl("Произведите повторное размещение корабля.");
					Sleep(3000);
				}

				else
				{
					/*PlaySound(TEXT("D:\\add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					arr[x][y] = 1;
					arr[x][y + 1] = 1;


					count++;
				}
			}
			if (z == 4) //left +
			{
				if (arr[x][y] == 1 || y < 1 || arr[x][y - 1] == 1 || (arr[x][y - 2] == 1 && y != 2) || (arr[x][y + 1] == 1 && y != 9) ||


					(arr[x - 1][y + 1] == 1 && y != 9) || arr[x - 1][y] == 1 || arr[x - 1][y - 1] == 1 || (arr[x - 1][y - 2] == 1 && y != 1) ||

					(arr[x + 1][y + 1] == 1 && y != 9) || arr[x + 1][y] == 1 || arr[x + 1][y - 1] == 1 || (arr[x + 1][y - 2] == 1 && y != 1))
				{
					/*PlaySound(TEXT("D:\\error.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					printRedEndl("Ошибка! Корабль не должен соприкосаться с другими кораблями или выходить за пределы поля.");
					printRedEndl("Произведите повторное размещение корабля.");
					Sleep(3000);
				}

				else
				{

					/*PlaySound(TEXT("D:\\add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					arr[x][y] = 1;
					arr[x][y - 1] = 1;


					count++;
				}

			}

		}
		//1 palub
		count = 0;
		while (count < 4)
		{
			system("cls");
			show();
			cout << endl;
			printYellowEndl("Капитан, куда желаете разместить свою посудину?");
			printYellowEndl("# - Однопадубный корабль.");
			printYellowEndl("Введите координаты 'х' и 'у'");
			printYellow("Введите координату 'х' (ПО ВЕРТИКАЛИ)-->"); cin >> x; /*x = rand() % 10;*/
			printYellow("Введите координату 'y' (ПО ГОРИЗОНТАЛИ)-->"); cin >> y; /*y = rand() % 10;*/
			z = 2;

			if (z == 2) //down 
			{

				if (arr[x][y] == 1 || arr[x + 1][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9)
					|| (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0))

				{
					/*PlaySound(TEXT("D:\\error.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					printRedEndl("Ошибка! Корабль не должен соприкосаться с другими кораблями или выходить за пределы поля.");
					printRedEndl("Произведите повторное размещение корабля.");
					Sleep(3000);
				}
				else
				{
					/*PlaySound(TEXT("D:\\add.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
					arr[x][y] = 1;


					count++;
				}


			}


		}
	}
	void newShipRandom()
	{
		//4 palub
		int count = 0;
		while (count < 1)
		{
			system("cls");


			x = rand() % 10;
			y = rand() % 10;
			z = rand() % 5;

			if (z == 2) //down
			{

				if (arr[x][y] == 1 || x + 3 > 9 || arr[x][y] == 1 || arr[x - 1][y] == 1 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 ||
					arr[x + 3][y] == 1 || arr[x + 4][y] == 1 || (arr[x - 1][y - 1] == 1 && y != 0) || (arr[x][y - 1] == 1 && y != 0) ||
					(arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0) || (arr[x + 3][y - 1] == 1 && y != 0) ||
					(arr[x + 4][y - 1] == 1 && y != 0) || (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) ||
					(arr[x + 1][y + 1] == 1 && y != 9) || (arr[x + 2][y + 1] == 1 && y != 9) || (arr[x + 3][y + 1] == 1 && y != 9) ||
					(arr[x + 4][y + 1] == 1 && y != 9))
				{

				}
				else
				{

					arr[x][y] = 1;
					arr[x + 1][y] = 1;
					arr[x + 2][y] = 1;
					arr[x + 3][y] = 1;

					count++;
				}


			}
			if (z == 1) //up // 
			{
				if (arr[x][y] == 1 || x < 3 || arr[x - 1][y] == 1 || arr[x - 2][y] == 1 || arr[x - 3][y] == 1 ||
					(arr[x - 4][y] == 1 && x != 3) || (arr[x - 4][y - 1] == 1 && x != 3) || (arr[x - 4][y + 1] == 1 && x != 3)
					|| (arr[x + 1][y] == 1 && x != 9) || (arr[x + 1][y - 1] == 1 && x != 9) || (arr[x + 1][y + 1] == 1 && x != 9)
					|| (arr[x][y + 1] == 1 && y != 9) || (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x - 2][y + 1] == 1 && y != 9)
					|| (arr[x - 3][y + 1] == 1 && y != 9) || (arr[x][y - 1] == 1 && y != 0) || (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x - 2][y - 1] == 1 && y != 0) || (arr[x - 3][y - 1] == 1 && y != 0))
				{

				}

				else
				{
					arr[x][y] = 1;
					arr[x - 1][y] = 1;
					arr[x - 2][y] = 1;
					arr[x - 3][y] = 1;

					count++;
				}

			}
			if (z == 3) //right
			{
				if (arr[x][y] == 1 || y > 6 || arr[x][y + 1] == 1 || arr[x][y + 2] == 1 || arr[x][y + 3] == 1 ||
					(arr[x][y + 4] == 1 && y + 3 > 9) || (arr[x - 1][y + 4] == 1 && y + 3 > 9) || (arr[x + 1][y + 4] == 1 && y + 3 > 9)
					|| arr[x][y - 1] == 1 || (arr[x + 1][y - 1] == 1 && x != 0) || (arr[x - 1][y - 1] == 1 && x != 0)
					|| (arr[x - 1][y] == 1 && x != 0) || (arr[x - 1][y + 1] == 1 && x != 0) || (arr[x - 1][y + 2] == 1 && x != 0)
					|| (arr[x - 1][y + 3] == 1 && x != 0) || (arr[x + 1][y] == 1 && x != 9) || (arr[x + 1][y + 1] == 1 && x != 9)
					|| (arr[x + 1][y + 2] == 1 && x != 9) || (arr[x + 1][y + 3] == 1 && x != 9))

				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x][y + 1] = 1;
					arr[x][y + 2] = 1;
					arr[x][y + 3] = 1;
					count++;
				}
			}
			if (z == 4) //left
			{
				if (arr[x][y] == 1 || y < 3 || arr[x][y - 1] == 1 || arr[x][y - 2] == 1 || arr[x][y - 3] == 1
					|| (arr[x][y - 4] == 1 && y != 3) || (arr[x][y + 1] == 1 && y != 9) || arr[x - 1][y - 1] == 1
					|| arr[x - 1][y - 2] == 1 || arr[x - 1][y - 3] == 1 || arr[x + 1][y] == 1
					|| arr[x + 1][y - 1] == 1 || arr[x + 1][y - 2] == 1 || arr[x + 1][y - 3] == 1
					|| arr[x + 1][y - 4] == 1 || arr[x - 1][y - 4] == 1 || arr[x - 1][y + 1] == 1 || arr[x + 1][y + 1] == 1)
				{

				}

				else
				{


					arr[x][y] = 1;
					arr[x][y - 1] = 1;
					arr[x][y - 2] = 1;
					arr[x][y - 3] = 1;
					count++;
				}
			}

		}
		//3 palub
		count = 0;
		while (count < 2)
		{
			system("cls");
			x = rand() % 10;
			y = rand() % 10;
			z = rand() % 5;

			if (z == 2) //down +
			{

				if (arr[x][y] == 1 || x > 7 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 || arr[x + 3][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9)
					|| (arr[x + 2][y + 1] == 1 && y != 9) || (arr[x + 3][y + 1] == 1 && y != 9) || (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0)
					|| (arr[x + 3][y - 1] == 1 && y != 0))
				{

				}
				else
				{

					arr[x][y] = 1;
					arr[x + 1][y] = 1;
					arr[x + 2][y] = 1;


					count++;
				}


			}
			if (z == 1) //up // +
			{
				if (arr[x][y] == 1 || x < 2 || arr[x][y] == 1 || arr[x - 1][y] == 1 || arr[x - 2][y] == 1 || (arr[x - 3][y] == 1 && y != 9)
					|| arr[x + 1][y] == 1 || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x][y - 1] == 1 && y != 0)
					|| (arr[x - 1][y - 1] == 1 && y != 0) || (arr[x - 2][y - 1] == 1 && y != 0) || (arr[x - 3][y - 1] == 1 && y != 0)
					|| (arr[x + 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x - 1][y + 1] == 1 && y != 9)
					|| (arr[x - 2][y + 1] == 1 && y != 9) || (arr[x - 3][y + 1] == 1 && y != 9))
				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x - 1][y] = 1;
					arr[x - 2][y] = 1;


					count++;
				}

			}
			if (z == 3) //right +
			{
				if (arr[x][y] == 1 || y > 7 || arr[x][y + 1] == 1 || arr[x][y + 2] == 1 || (arr[x][y + 3] == 1 && y != 7) || arr[x][y - 1] == 1 ||


					arr[x - 1][y - 1] == 1 || arr[x - 1][y] == 1 || arr[x - 1][y + 1] == 1 || arr[x - 1][y + 2] == 1 || (arr[x - 1][y + 3] == 1 && y != 7) ||

					arr[x + 1][y - 1] == 1 || arr[x + 1][y] == 1 || arr[x + 1][y + 1] == 1 || arr[x + 1][y + 2] == 1 || (arr[x + 1][y + 3] == 1 && y != 7))
				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x][y + 1] = 1;
					arr[x][y + 2] = 1;

					count++;
				}
			}
			if (z == 4) //left +
			{
				if (arr[x][y] == 1 || y < 2 || arr[x][y - 1] == 1 || arr[x][y - 2] == 1 || (arr[x][y - 3] == 1 && y != 2) || (arr[x][y + 1] == 1 && y != 9) ||


					(arr[x - 1][y + 1] == 1 && y != 9) || arr[x - 1][y] == 1 || arr[x - 1][y - 1] == 1 || arr[x - 1][y - 2] == 1 || (arr[x - 1][y - 3] == 1 && y != 2) ||

					(arr[x + 1][y + 1] == 1 && y != 9) || arr[x + 1][y] == 1 || arr[x + 1][y - 1] == 1 || arr[x + 1][y - 2] == 1 || (arr[x + 1][y - 3] == 1 && y != 2))
				{

				}

				else
				{


					arr[x][y] = 1;
					arr[x][y - 1] = 1;
					arr[x][y - 2] = 1;

					count++;
				}

			}

		}
		//2 palub
		count = 0;
		while (count < 3)
		{
			system("cls");
			x = rand() % 10;
			y = rand() % 10;
			z = rand() % 5;

			if (z == 2) //down +
			{

				if (arr[x][y] == 1 || x > 8 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9)
					|| (arr[x + 2][y + 1] == 1 && y != 9) || (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0))

				{

				}
				else
				{

					arr[x][y] = 1;
					arr[x + 1][y] = 1;



					count++;
				}


			}
			if (z == 1) //up // +
			{
				if (arr[x][y] == 1 || x < 1 || arr[x + 1][y] == 1 || arr[x + 2][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y - 1] == 1 && y != 0) || (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0) || (arr[x + 2][y - 1] == 1 && y != 0)
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9) || (arr[x + 2][y + 1] == 1 && y != 9))
				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x - 1][y] = 1;



					count++;
				}

			}
			if (z == 3) //right 
			{
				if (arr[x][y] == 1 || y > 8 || arr[x][y + 1] == 1 || arr[x][y + 2] == 1 || arr[x][y - 1] == 1 ||


					arr[x - 1][y - 1] == 1 || arr[x - 1][y] == 1 || arr[x - 1][y + 1] == 1 || (arr[x - 1][y + 2] == 1 && y != 8) ||

					(arr[x + 1][y - 1] == 1 && x != 0) || arr[x + 1][y] == 1 || arr[x + 1][y + 1] == 1 || (arr[x + 1][y + 2] == 1 && y != 8))
				{

				}

				else
				{

					arr[x][y] = 1;
					arr[x][y + 1] = 1;


					count++;
				}
			}
			if (z == 4) //left +
			{
				if (arr[x][y] == 1 || y < 1 || arr[x][y - 1] == 1 || (arr[x][y - 2] == 1 && y != 2) || (arr[x][y + 1] == 1 && y != 9) ||


					(arr[x - 1][y + 1] == 1 && y != 9) || arr[x - 1][y] == 1 || arr[x - 1][y - 1] == 1 || (arr[x - 1][y - 2] == 1 && y != 1) ||

					(arr[x + 1][y + 1] == 1 && y != 9) || arr[x + 1][y] == 1 || arr[x + 1][y - 1] == 1 || (arr[x + 1][y - 2] == 1 && y != 1))
				{

				}

				else
				{


					arr[x][y] = 1;
					arr[x][y - 1] = 1;


					count++;
				}

			}

		}
		//1 palub
		count = 0;
		while (count < 4)
		{
			system("cls");
			x = rand() % 10;
			y = rand() % 10;

			z = 2;

			if (z == 2) //down 
			{

				if (arr[x][y] == 1 || arr[x + 1][y] == 1 || arr[x - 1][y] == 1
					|| (arr[x - 1][y + 1] == 1 && y != 9) || (arr[x][y + 1] == 1 && y != 9) || (arr[x + 1][y + 1] == 1 && y != 9)
					|| (arr[x - 1][y - 1] == 1 && y != 0)
					|| (arr[x][y - 1] == 1 && y != 0) || (arr[x + 1][y - 1] == 1 && y != 0))

				{

				}
				else
				{

					arr[x][y] = 1;


					count++;
				}


			}


		}
	}
	void attackMe()
	{
		int count = 0;
		while (count < 1)
		{
			show();
			cout << endl;

			printRedEndl("Ход противника...");
			Sleep(2000);

			x = rand() % 10;
			y = rand() % 10;
			while (arr[x][y] == 2 || arr[x][y] == 3)
			{
				x = rand() % 10;
				y = rand() % 10;
			} //wh


			if (arr[x][y] == 0) // пусто
			{
				arr[x][y] = 2;
				system("cls");
				show();
				cout << endl;

				printRedEndl("Ход противника...");
				Sleep(2000);
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				printGreenEndl("Ха - Ха! Промазал!");
				/*count++;*/
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);
				count++;

			}
			else if (arr[x][y] == 1) // корабль
			{
				arr[x][y] = 3;
				//test
				if (arr[x + 1][y] != 1 && arr[x - 1][y] != 1 && arr[x][y + 1] != 1 && arr[x][y - 1] != 1)
				{
					if (arr[x + 1][y] != 3)arr[x + 1][y] = 2;
					if (arr[x + 1][y - 1] != 3)arr[x + 1][y - 1] = 2;
					if (arr[x + 1][y + 1] != 3)arr[x + 1][y + 1] = 2;
					if (arr[x - 1][y] != 3)arr[x - 1][y] = 2;
					if (arr[x - 1][y + 1] != 3)arr[x - 1][y + 1] = 2;
					if (arr[x - 1][y - 1] != 3)arr[x - 1][y - 1] = 2;
					if (arr[x][y - 1] != 3)arr[x][y - 1] = 2;
					if (arr[x][y + 1] != 3)arr[x][y + 1] = 2;

				}
				//test
				system("cls");
				show();
				cout << endl;
				printRedEndl("Ход противника...");
				Sleep(2000);
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				printRedEndl("Ой! Прямое попадание");
				/*PlaySound(TEXT("D:\\boom.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);
				if (LoseCheck() == 0)
				{
					return;
				}
			}
			else if (arr[x][y] == 2) // уже стрелял
			{

				system("cls");
				show();
				cout << endl;
				printRedEndl("Ход противника...");
				Sleep(2000);
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				/*printRedEndl("Капитан, что с прицелом? Повторите выстрел.");*/
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);
			}
			else if (arr[x][y] == 3) // подбитый
			{
				system("cls");
				show();
				cout << endl;
				printRedEndl("Ход противника...");
				Sleep(2000);
				printBlue("Координаты: "); printBlue(x); printBlue(" "); printBlueEndl(y);
				cout << endl;
				/*printRedEndl("Капитан, что с прицелом? Повторите выстрел.");*/
				/*PlaySound(TEXT("D:\\miss.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
				Sleep(2000);


			}


		}
	}
	bool LoseCheck()
	{
		check = 0;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (arr[i][j] == 1)
				{
					check++;
				}
			}
		}
		return check;
	}
};
//using namespace audiere;
using namespace std;
int main()
{
	srand(time(NULL));
#pragma comment(lib, "winmm")
	clock_t start, finish;
	float time;
	start = clock(); // начало отсчёта



	setlocale(LC_ALL, "Rus");

MAINMENU:

	PlaySound(TEXT("D:\\Programs\\Visual Studio\\Repos\\Exam2\\Exam2\\start.wav"), NULL, SND_FILENAME | SND_ASYNC);
	Loading();
	LoadingMenu();
	cout << endl;
	cout << endl;
	Map Fill_one;
	MapPC Fill_PC;
	MapPC2 Fill_PC2;

	int mode, mode2;
	// mode 1 - P vs PC
	// mode 2 - PC vs PC
	cout << endl;

	printYellow("Выберите режим игры: "); cin >> mode;
	cout << endl;
	if (mode == 1)
	{
		printYellowEndl("1 - Авто расстановка кораблей.");
		printYellowEndl("2 - Ручная расстановка кораблей."); cin >> mode2;
		if (mode2 == 1)
		{
			Fill_PC.cleanMap();
			Fill_one.cleanMap();
			Fill_PC.newShipRandom();
			Fill_one.newShipRandom();
			while (true)
			{

				Fill_PC.attackPC();
				if (Fill_one.LoseCheck() == 0)
				{
					goto PC1LOSEvs;

				}
				if (Fill_PC.LoseCheck() == 0)
				{
					goto PC2LOSEvs;

				}
				Fill_one.attackMe();
				if (Fill_one.LoseCheck() == 0)
				{
					goto PC1LOSEvs;

				}
				if (Fill_PC.LoseCheck() == 0)
				{
					goto PC2LOSEvs;

				}



			}
		}
		if (mode2 == 2)
		{
			Fill_PC.cleanMap();
			Fill_one.cleanMap();
			Fill_PC.newShipRandom();
			Fill_one.newShip();
			while (true)
			{
				Fill_PC.attackPC();
				if (Fill_one.LoseCheck() == 0)
				{
					goto PC1LOSEvs;

				}


				if (Fill_PC.LoseCheck() == 0)
				{
					goto PC2LOSEvs;

				}
				Fill_one.attackMe();
				if (Fill_one.LoseCheck() == 0)
				{
					goto PC1LOSEvs;

				}


				if (Fill_PC.LoseCheck() == 0)
				{
					goto PC2LOSEvs;

				}

			}
		}

	}
	if (mode == 2)
	{
		// PC VS PC
		Fill_PC.cleanMap();
		Fill_PC2.cleanMap();
		Fill_PC.newShipRandom();
		Fill_PC2.newShipRandom();
		while (true)
		{

			Fill_PC.attackPCvsPC();
			if (Fill_PC.LoseCheck() == 0)
			{
				goto PC1LOSE;

			}
			if (Fill_PC2.LoseCheck() == 0)
			{
				goto PC2LOSE;
			}
			Fill_PC2.attackPCvsPC();
			if (Fill_PC.LoseCheck() == 0)
			{
				goto PC1LOSE;

			}
			if (Fill_PC2.LoseCheck() == 0)
			{
				goto PC2LOSE;
			}



		}
	}

	/*Fill_one.cleanMap();
	Fill_one.newShip();*/


PC1LOSE:
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t\t"; printBlue("ПОБЕДИЛ PC-1");

	cout << endl;
	cout << "\t\t\t";
	finish = clock(); // конец отсчёта
	time = (finish - start) / CLK_TCK;
	printGreen("Время боя: "); printYellow(time / 60); printYellow(" минут");
	PlaySound(TEXT("D:\\pcwin.wav"), NULL, SND_FILENAME | SND_ASYNC);
	_getch();
	goto MAINMENU;
PC2LOSE:
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t\t"; printRed("ПОБЕДИЛ PC-2");
	finish = clock(); // конец отсчёта
	time = (finish - start) / CLK_TCK;
	printGreen("Время боя: "); printYellow(time / 60); printYellow(" минут");
	PlaySound(TEXT("D:\\pcwin.wav"), NULL, SND_FILENAME | SND_ASYNC);
	_getch();
	goto MAINMENU;
PC1LOSEvs:
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t\t"; printRed("ВЫ ПРОИГРАЛИ! ");
	finish = clock(); // конец отсчёта
	time = (finish - start) / CLK_TCK;
	printGreen("Время боя: "); printYellow(time / 60); printYellow(" минут");
	PlaySound(TEXT("D:\\lose.wav"), NULL, SND_FILENAME | SND_ASYNC);
	_getch();
	goto MAINMENU;

PC2LOSEvs:
	system("cls");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t\t"; printBlue("ВЫ ПОБЕДИЛИ! ");
	finish = clock(); // конец отсчёта
	time = (finish - start) / CLK_TCK;
	printGreen("Время боя: "); printYellow(time / 60); printYellow(" минут");
	PlaySound(TEXT("D:\\victory.wav"), NULL, SND_FILENAME | SND_ASYNC);
	_getch();
	goto MAINMENU;

	/*Fill_one.newShipRandom();*/
	/*Fill_one.show();*/




}