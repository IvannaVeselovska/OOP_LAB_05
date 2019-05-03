#define _CRT_SECURE_NO_WARNINGS
#include "Human.h"
#include "SecondClassTicket.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define K 18
using namespace std;

void  SortBySurname(SecondClassTicket items[], int count);
void qs_struct(SecondClassTicket items[], int left, int right);

int main()
{
	char a[] = "vb";
	char b[] = "ttt";
	char c[] = "hgfd";
	Human p(a, b, c);
	SecondClassTicket tick(p, 4, 38, 70.56);
	char info[20];
	tick.GetInformation(info);
	puts(info);
	SecondClassTicket tics[K];
	for (int i = 0; i < K; i++)
	{
		printf("\ninput name");
		char a1[15], b1[20], c1[50];
		scanf("%s", a1);
		printf("\ninput surname");
		scanf("%s", b1);
		printf("\ninput e-mail");
		scanf("%s", c1);
		Human g(a1, b1, c1);
		int car, pl;
		double pr;
		printf("\ninput carriage");
		scanf("%d", &car);
		printf("\ninput place");
		scanf("%d", &pl);
		printf("\ninput prise");
		scanf("%lf", &pr);
		tics[i] = SecondClassTicket(g, car, pl, pr);
	}
	SortBySurname(tics, K);
	for (int i = 0; i < K; i++)
	{
		fflush(stdin);
		printf("\n================**********************++++++++++++++++++========++++++++++++++++++**********************================");
		printf("\nsurname - %s", tics[i].GetPassenger().GetSurname());
		printf("\nname \t- %s", tics[i].GetPassenger().GetName());
		printf("\ne-mail \t- %s", tics[i].GetPassenger().GetEmail());
		printf("\ncarriage \t- %d", tics[i].GetCarriage());
		printf("\nplace \t- %d", tics[i].GetPlaсe());
		printf("\nprise \t- %lf", tics[i].GetPrise());
	}
	system("pause");
	return 0;
}

void  SortBySurname(SecondClassTicket items[], int count)
{
	qs_struct(items, 0, count - 1);
}

void qs_struct(SecondClassTicket items[], int left, int right)
{
	register int i, j;
	const char* x;
	SecondClassTicket temp;
	i = left; j = right + 1;

	x = items[(left + right) / 2].GetPassenger().GetSurname();
	do {
		while ((strcmp(items[i].GetPassenger().GetSurname(), x) < 0) && (i < right)) i++;
		while ((strcmp(items[j].GetPassenger().GetSurname(), x) > 0) && (j > left)) j--;
		if (i <= j) {
			temp = items[i];
			items[i] = items[j];
			items[j] = temp;
			i++; j--;
		}
	} while (i <= j);
	if (left < j) qs_struct(items, left, j);
	if (i < right) qs_struct(items, i, right);
}

/*Іван Кучеренко апрол 45 3 45.9
Роксолана Марусяк апроь 4 36 415.9
Віталік Клімов силжшнвр 5 6 145.9
Макс Злонкевич апрол 45 3 45.9
Тарас Мельник апроь 4 36 415.9
Михайло Фарковець силжшнвр 5 6 145.9
Назар Олійник силжшнвр 5 6 145.9
Діана Берташ апрол 45 3 45.9
Іванна Веселовська апроь 4 36 415.9*/