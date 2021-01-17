#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int day;
	int month;
	printf(" Введите номер дня и месяца: ");
	scanf_s("%d %d", &day, &month); 
	if ((day == 0) || (day > 31) || ( month == 0) || (month > 12))
	{
		printf("некорректная дата");
		return 0;
	}

	printf("%d.%d - ",day,month);
	if ((day % 10) == 0) 
	{
		switch (day / 10)
		{
		case 1:
			printf("десятое"); break;
		case 2:
			printf("двадцатое"); break;
		case 3:
			printf("тридцатое"); break;
		}
	}
	else if ((day / 10) == 1)
	{

		switch (day % 10)
		{
		case 1:
			printf("одиннадцатое"); break;
		case 2:
			printf("двенадцатое"); break;
		case 3:
			printf("тринадцатое"); break;
		case 4:
			printf("четырнадцатое"); break;
		case 5:
			printf("пятнадцатое"); break;
		case 6:
			printf("шестнадцатое"); break;
		case 7:
			printf("семнадцатое"); break;
		case 8:
			printf("восемнадцатое"); break;
		case 9:
			printf("девятнадцатое"); break;
		}
	}

	else
	{
		int tens;
		tens = day / 10;
		switch (tens)
		{
		case 2:
			printf("двадцать "); break;
		case 3:
			printf("тридцать "); break;
		case 1:
			break;
		case 0:
			break;
		}

		int ones = day % 10;
		switch (ones)
		{
		case 1:
			printf("первое"); break;
		case 2:
			printf("второе"); break;
		case 3:
			printf("третье"); break;
		case 4:
			printf("четвертое"); break;
		case 5:
			printf("пятое"); break;
		case 6:
			printf("шестое"); break;
		case 7:
			printf("седьмое"); break;
		case 8:
			printf("восьмое"); break;
		case 9:
			printf("девятое"); break;
		defoult:
			printf("деcятое"); break;
		}
		
	}
	
	switch (month)
	{
		case 1:
			printf(" января"); break;
		case 2:
			printf(" февраля"); break;
		case 3:
			printf(" марта"); break;
		case 4:
			printf(" апреля"); break;
		case 5:
			printf(" мая"); break;
		case 6:
			printf(" июня"); break;
		case 7:
			printf(" июля"); break;
		case 8:
			printf(" августа"); break;
		case 9:
			printf(" сентября"); break;
		case 10:
			printf(" октября"); break;
		case 11:
			printf(" ноября"); break;
		case 12:
			printf(" декабря"); break;
	}
	return 0;
}
