#include<stdio.h>
#include<Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char C;
	int N;
	printf("Введите первую букву стороны света, в которую сейчас смотрит робот, и номер команды: ");
	scanf_s("%c", &C );
	scanf_s("%d", &N);
	if (N == 0)
	{
		switch (C)
		{
		case 'С':
			printf("Север"); break;
		case 'В':
			printf("Восток"); break;
		case 'Ю':
			printf("Юг"); break;
		case 'З':
			printf("Запад"); break;
		}
	}
	else if (N == 1)
	{
		switch (C)
		{
		case 'С':
			printf("Запад"); break;
		case 'В':
			printf("Север"); break;
		case 'Ю':
			printf("Восток"); break;
		case 'З':
			printf("Юг"); break;
		}
	}
	else if (N == -1)
	{
		switch (C)
		{
		case 'С':
			printf("Восток"); break;
		case 'В':
			printf("Юг"); break;
		case 'Ю':
			printf("аЗпад"); break;
		case 'З':
			printf("Север"); break;
		}
	}
	return 0;
}
		

