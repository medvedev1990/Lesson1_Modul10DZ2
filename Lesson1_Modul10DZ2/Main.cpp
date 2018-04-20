#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include"Header.h"

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int n, quit;
	do
	{
		printf("введите номер задания: ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			tovarooborot();
			break;
		case 2:
			
			break;
		case 3:
			student();
			break;
		case 4:
			rabotnik();
			break;
		case 5:
			DorogoyTovar();
			break;
		case 6:

			break;
		case 7:
			Engeneer();
			break;
		case 8:
			Fizik();
			break;
		case 9:
			old_Tovar();
			break;
		case 10:

			break;
		default:
			break;
		}
		printf("continue? 1-Yes: ");
		scanf("%d", &quit);
		printf("\n");

	} while (quit == 1);
}