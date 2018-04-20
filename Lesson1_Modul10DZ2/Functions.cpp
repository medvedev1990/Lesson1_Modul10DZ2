#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include"Header.h"

int i;

char* MassFamiliya()
{
	char *massFamiliya[] = { "Francis", "Ethel", "Audrey", "Jorge", "Glenda", "Alvin", "Alberto" };
	char *Familiya = *(massFamiliya + (0 + rand() % 7));
	return Familiya;
}
char *zavod()
{
	char *zavod[] = { "ETKON","AksayNan","Maslodel","Coca-Cola","Roshen","Zhiguli_Beer" };
	char *zavod1 = *(zavod + (0 + rand() % 6));
	return  zavod1;
}
char *POST()
{
	char *postal[] = { "Engener", "Laborant", "Administrator", "BOSS", "General", "Secretar", "Ofice-Manager" };
	return *(postal + (0 + rand() % 7));
}
char *VUZ()
{
	char *univer[] = { "Bakalavr","Magistratura","PhD Doctorantura" };
	return *(univer + (0 + rand() % 3));
}
char *naimenovanie()
{
	char *tovarr[] = { "kolbasa","Coca-cola","Sugar","Konfeti","Beer","Oil","Broad" };
	return  *(tovarr + (0 + rand() % 7));
}
void tovarooborot()
{
	//	Определить товар, количество которого больше всего на складе, и напечатать все сведения о нем.
	int max = 0;
	int index = 0;
	tovar *product = (tovar*)calloc(10, sizeof(tovar));
	if (product != NULL)
	{
		for (i = 0;i < 10;i++)
		{
			strcpy((product + i)->proizvoditel, zavod());
			strcpy((product + i)->naimenovanie, naimenovanie());
			(product + i)->kolichestvo = 10 + rand() % 10000;
			(product + i)->god_Vipuska = 2016 + rand() % 3;
			(product + i)->Sale = 160 + rand() % 2000;
			if ((product + i)->kolichestvo > max)
			{
				max = (product + i)->kolichestvo;
				index = i;

			}
		}
		printf("Naimenovanie: %s\nSale: %d\nGod Vipuska: %d\nProizvoditel: %s\n Na sklade: %d\n\n", (product + index)->naimenovanie,
			(product + index)->Sale,
			(product + index)->god_Vipuska,
			(product + index)->proizvoditel,
			(product + index)->kolichestvo);

	}
	free(product);
}
void student()
{
	Personal *student = (Personal*)calloc(10, sizeof(Personal));
	if (student != NULL)
	{
		for (i = 0;i < 10;i++)
		{
			strcpy((student + i)->familiya, MassFamiliya());
			(student + i)->vozrast = 18 + rand() % 10;
			(student + i)->gruppa = 0 + rand() % 5;
			for (int j = 0;j < 3;j++)
			{
				(student + i)->ocenka[j] = 50 + rand() % 50;
			}
			if ((student + i)->vozrast > 19)
			{
				printf("Name: %s\nVozrast: %d\nKurs: %d\nOcenki: %d\t%d\t%d\n\n", (student + i)->familiya, (student + i)->vozrast,
					(student + i)->gruppa, (student + i)->ocenka[0], (student + i)->ocenka[1], (student + i)->ocenka[2]);
			}
		}
	}
	else
		printf("no memmpry\n");
	free(student);
}
void rabotnik()
{
	Personal *rabotnik = (Personal*)calloc(10, sizeof(Personal));
	int chek = 0;
	if (rabotnik != NULL)
	{
		for (i = 0;i < 10;i++)
		{
			strcpy((rabotnik + i)->familiya, MassFamiliya());
			(rabotnik + i)->vozrast = 1940 + rand() % 70;
			(rabotnik + i)->zarplata = 10000 + rand() % 60000;
			strcpy((rabotnik + i)->dolzhnost, POST());
			strcpy((rabotnik + i)->Obrazovanie, VUZ());
			if ((rabotnik + i)->vozrast > 60)
			{
				chek++;
				printf("Name: %s\nVozrast: %d\nZarplata: %d\nPoast: %s\nObrazovanie: %s\n\n", (rabotnik + i)->familiya, (rabotnik + i)->vozrast,
					(rabotnik + i)->zarplata, (rabotnik + i)->dolzhnost, (rabotnik + i)->Obrazovanie);
			}
		}
		printf("всего  работников старше 60 лет %d", chek);

	}
	else
		printf("no memmpry\n");
	free(rabotnik);
}
void DorogoyTovar()
{
	int max = 0;
	int index;
	tovar *product = (tovar*)calloc(10, sizeof(tovar));
	if (product != NULL)
	{
		for (i = 0;i < 10;i++)
		{
			strcpy((product + i)->proizvoditel, zavod());
			(product + i)->kolichestvo = 10 + rand() % 10000;
			(product + i)->god_Vipuska = 2016 + rand() % 3;
			(product + i)->Sale = 160 + rand() % 2000;
			if ((product + i)->Sale > max)
			{
				max = (product + i)->Sale;
				index = i;
			}
		}
		printf("Proizvoditel: %s\nSale: %d\nGod Vipuska: %d\n Na sklade: %d\n\n", (product + index)->proizvoditel,
			(product + index)->Sale,
			(product + index)->god_Vipuska,
			(product + index)->kolichestvo);
	}
	free(product);
}
void Engeneer()
{
	Personal *rabotnik = (Personal*)calloc(10, sizeof(Personal));
	int chek = 0;
	if (rabotnik != NULL)
	{
		for (i = 0;i < 10;i++)
		{
			strcpy((rabotnik + i)->familiya, MassFamiliya());
			(rabotnik + i)->vozrast = 1940 + rand() % 70;
			(rabotnik + i)->zarplata = 10000 + rand() % 60000;
			strcpy((rabotnik + i)->dolzhnost, POST());

			strcpy((rabotnik + i)->Obrazovanie, VUZ());
			if (strcmp((rabotnik + i)->dolzhnost, "Engener")==0)
			{
				chek++;
				printf("Name: %s\nVozrast: %d\nZarplata: %d\nPoast: %s\nObrazovanie: %s\n\n", (rabotnik + i)->familiya, (rabotnik + i)->vozrast,
					(rabotnik + i)->zarplata, (rabotnik + i)->dolzhnost, (rabotnik + i)->Obrazovanie);
			}
		}
		printf("всего  работников инженеров %d", chek);
	}
	else
		printf("no memmpry\n");
	free(rabotnik);
}
void old_Tovar()
{
	int chek = 0;
	tovar *product = (tovar*)calloc(10, sizeof(tovar));
	if (product != NULL)
	{
		for (i = 0;i < 10;i++)
		{
			strcpy((product + i)->proizvoditel, zavod());
			(product + i)->kolichestvo = 10 + rand() % 10000;
			(product + i)->god_Vipuska = 2016 + rand() % 3;
			(product + i)->Sale = 160 + rand() % 2000;
			if ((2018- (product + i)->god_Vipuska)>2)
			{
				chek += (product + i)->kolichestvo;
				printf("Proizvoditel: %s\nSale: %d\nGod Vipuska: %d\n Na sklade: %d\n\n", (product + i)->proizvoditel,
					(product + i)->Sale,
					(product + i)->god_Vipuska,
					(product + i)->kolichestvo);
			}
		}
		printf("всего товара произведенного более 2 лет назад = %d\n", chek);
	}
	free(product);
}
void Fizik()
{
	Personal *student = (Personal*)calloc(10, sizeof(Personal));
	if (student != NULL)
	{
		float summ = 0;;
		for (i = 0;i < 10;i++)
		{
			strcpy((student + i)->familiya, MassFamiliya());
			(student + i)->vozrast = 18 + rand() % 10;
			(student + i)->gruppa = 0 + rand() % 5;
			for (int j = 0;j < 3;j++)
			{
				(student + i)->ocenka[j] = 50 + rand() % 50;
			}
			summ += (student + i)->ocenka[0];
			printf("Name: %s\nVozrast: %d\nOcenka it: %d\n\n", (student + i)->familiya, (student + i)->vozrast,
				  (student + i)->ocenka[1]);
		}
		printf("срдений бал оценок по физике = %2.2f\n", summ / 10);
	}
	else
		printf("no memmpry\n");
	free(student);
}