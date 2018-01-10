#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//test
struct
{
	int num;
	char name;
	char sex;
	char job;
	union
	{
		int clas;
		char position;
	}zhiwei;
}person[2];

int main()
{
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("输入同学的信息\n");
		scanf("%d,%c,%c,%c,", &person[i].num, &person[i].name, &person[i].sex, &person[i].job);
		getchar();
		printf("输入职位信息:");
		if (person[i].job == 's')
			scanf("%d", &person[i].zhiwei.clas);
		else if (person[i].job == 't')
		{
			scanf("%c", &person[i].zhiwei.position);
		}

	}
	printf("\n");
	for (i = 0; i < 2; i++)
	{
		if (person[i].job == 's')
			printf("%d  %c  %c  %c  %d \n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].zhiwei.clas);
		else
			printf("%d  %c  %c  %c  %c \n", person[i].num, person[i].name, person[i].sex, person[i].job, person[i].zhiwei.position);
	}



	system("pause");
	return 0;
}
