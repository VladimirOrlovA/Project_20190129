#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// ���������� � �������� 2019 01 29   c 41 ������ //

void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int const ind = 5, line=2, column=5;
	int a[ind][ind], l, c, sum;
	int b[line][column] = { 0 }, i=0, j=0, buf=0;

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
			b[l][c] = sum;
			b[l][c] = i;
		}
		
		for (l = 0; l < line; l++)
		{
			for (c = 0; c < column; c++)
			{
				b[0][c] = sum;
				b[1][c] = i;
				printf("%d  ", b[l][c]);
			}
			b[l][c]=
			printf("\n");
		}
	}

	printf("\n\n");

	for (i = 0; i < ind; i++)
		for (j = 0; j < ind; j++)
			printf("%d  ", b[i][j]);


	for (i = 0; i < ind - 1; i++)		
		for (j = ind - 2; j >= i; j--)	
			if (b[j][0] < b[j + 1][0])	
			{
				buf = b[j][0];			
				b[j][0] = b[j + 1][0];	
				b[j + 1][0] = buf;
			}

	printf("\n\n");

	for (i = 0; i < ind; i++)
		for (j = 0; j < ind; j++)
			printf("%d  ", b[i][j]);
			
			



}


void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	printf("\n� ����������.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	printf("\n� ����������.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	printf("\n� ����������.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	printf("\n� ����������.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	printf("\n� ����������.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	printf("\n� ����������.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	printf("\n� ����������.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\n� ����������.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task10()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask10\n\n");
	printf("\n� ����������.... \n\n");
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