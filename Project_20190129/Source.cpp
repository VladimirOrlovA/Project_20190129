#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Подготовка к экзамену 2019 01 29   c 41 задачи //

void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 5, n=2;
	int a[ind][ind], l, c, sum;
	int b[n][ind] = { 0 }, i=0, j=0, buf=0;

	for (l = 0; l < ind; l++)
	{
		for (c = 0; c < ind; c++)
		{
			a[l][c] = 1 + rand() % 3;
			printf("%d  ", a[l][c]);
		}
		printf("\n");
	}


	for (l = 0; l < ind; l++)
	{
		
		sum = 0;

		for (c = 0; c < ind; c++)
		{
			sum += a[l][c];
		}
		
		b[0][l] = sum;
		b[1][l] = i;
		i++;
	}

	printf("\n\n");

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < ind; j++)
		{
			printf("%3d  ", b[i][j]);
		}
		printf("\n");
	}


	printf("\n\n");

	int x;
	for (i = 0; i < ind - 1; i++)		
		for (j = ind - 2; j >= i; j--)	
			if (b[0][j] < b[0][j + 1])	
			{
				buf = b[0][j];			
				b[0][j] = b[0][j + 1];	
				b[0][j + 1]= buf;

				x = b[1][j];
				b[1][j] = b[1][j + 1];
				b[1][j + 1] = x;
			}



	printf("\n\n");

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < ind; j++)
		{
			printf("%3d  ", b[i][j]);
		}
		printf("\n");
	}
			
	printf("\n\n");

	for (l = 0; l < ind; l++)
	{
		for (c = 0; c < ind; c++)
		{
			printf("%d  ", a[b[1][l]][c]);
		}
		printf("\n");
	}


}


void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const line = 10, column = 5;
	int a[line][column], l, c, i, j;

	for (l = 0; l < line; l++)
	{
		a[l][0]=l+1;
		

		for (c = 0; c < column; c++)
		{
			
			
			for (i = 0; i < line; i++)
				for (j = 1; j < column; j++)
					a[i][j] = 2 + rand() % 4;

		}

	}

	printf("\n\n a)	печать успеваемости (вывод массива на экран).\n\n");

	for (l = 0; l < line; l++)
	{
		for (c = 0; c < column; c++)
		{
			printf("%3d  ", a[l][c]);
		}
		printf("\n");
	}

	printf("\n\n b)	количество несданных экзаменов у студента (по номеру строки).\n\n");

	printf("Введите номер студента => ");
	scanf_s("%d", &i);

	j = 0;

	for (c = 1; c < column; c++)
	{
		if (a[i-1][c] <= 2) j++;		
	}
	
	printf("\n Не сданно экзаменов = %d", j);


	printf("\n\n c)	количество сданных экзаменов у студента (по номеру строки)\n\n");

	printf("Введите номер студента => ");
	scanf_s("%d", &i);

	j = 0;

	for (c = 1; c < column; c++)
	{
		if (a[i - 1][c] >= 3) j++;
	}

	printf("\n Cданно экзаменов = %d", j);


}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task10()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask10\n\n");
	printf("\nВ разработке.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}



int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (10) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;
		case 10: {Task10(); } break;

		default: printf("\nEntered number of Task does not exist...\n\n");

		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);

		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);

	} while (flag == 1);



	if (flag == 1)
		system("pause");


}