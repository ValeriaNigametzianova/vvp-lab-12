#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int number;
	int i=0; //метка
	printf(" Введите число: ");
	scanf_s("%d", &number);

	if ((number > 40) || (number < 10))
	{
		return 0;
	}

	if (number / 10 == 1)
	{
		switch (number % 10)
		{
		case 1:
			printf("одиннадцать"); break;
		case 2:
			printf("двенадцать"); break;
		case 3:
			printf("тринадцать"); break;
		case 4:
			printf("четырнадцать"); break;
		case 5:
			printf("пятнадцать"); break;
		case 6:
			printf("шестнадцать"); break;
		case 7:
			printf("семнадцать"); break;
		case 8:
			printf("восемнадцать"); break;
		case 9:
			printf("девятнадцать"); break;
		}
	}
	else if (number / 10 != 1)
	{
		switch (number / 10)
		{
		case 1:
			printf("десять "); break;
		case 2:
			printf("двадцать "); break;
		case 3:
			printf("тридцать "); break;
		case 4:
			printf("сорок "); break;
		}
		if (number % 10 != 0)
		{
			i = 1;
				switch (number % 10)
				{
				case 1:
					printf("одно");
					printf(" учебное задание"); break;
				case 2:
					printf("два");
					printf(" учебных задания"); break;
				case 3:
					printf("три");
					printf(" учебных задания"); break;
				case 4:
					printf("четыре");
					printf(" учебных задания"); break;
				case 5:
					printf("пять");
					printf(" учебных заданий"); break;
				case 6:
					printf("шесть");
					printf(" учебных заданий"); break;
				case 7:
					printf("семь");
					printf(" учебных заданий"); break;
				case 8:
					printf("свосемь");
					printf(" учебных заданий"); break;
				case 9:
					printf("девять");
					printf(" учебных заданий"); break;
				}
		}
	}
	if (i != 1)
	{
		printf(" учебных заданий");
	}
	return 0;
}
