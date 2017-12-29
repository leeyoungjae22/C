#include<stdio.h>
#include<stdlib.h>
typedef struct STATION
{
	int num;
	struct STATION *next;
	struct STATION *prev;
 }station;

station *last;
station *first;
station *add;

void init()
{
	last = (station*)malloc(sizeof(station));
	first =  (station*)malloc(sizeof(station));
	last->prev = first;
	first->next = NULL;
}

void add_station()
{
	add = (station*)malloc(sizeof(station));
	last->prev->next = add;
	add->next = last;
	add->prev = last->prev;
	last->prev = add;
	printf("숫자입력 : ");
	scanf_s("%d", &add->num);
	
}
void del_station()
{
	add->prev->next = last;
	last->prev = add->prev;
	free(add);

}
void print_station()
{
	station *print;
	print = last->prev;
	while (print != first)
	{
		printf("%d ->", print->num);
		print = print->prev;
		
	}
}


int main()
{
	init();
	
	int a =2;
	while (a != 0)
	{
		printf("\n1.추가,2.삭제,3.출력  \n");
		printf("---------입력:");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			add_station();
			break;
		case 2:
			del_station();
			break;
		case 3:
			print_station();
			break;
		}
	}
	return 0;
	

}