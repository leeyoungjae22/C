#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct STATiON
{
	int fare;
	char name[20];
	struct station *next;
	struct station *prev;
}station;
station *first;
station *last;
station *add;
void fare_station(station *fare)
[

]
void init()
{
	first = (station*)malloc(sizeof(station));
	last = (station*)malloc(sizeof(station));
	first->next = last;
	last->prev = first;
	first->next = NULL;
	last->next = NULL;
	strcpy(first->name, "출발역");
	strcpy(last->name, "종착역");

}
void add_station(station *add)
{
	add = (station*)malloc(sizeof(station));
	printf("추가할 역을 입력하세요 :");
	scanf("%s", &add->name);
	last->prev->next = add;
	add->prev = last->prev;
	add->next = last;
	last->prev = add;
}
void del_station(char*name)
{
	station*del;
	del = first;
	while (del != NULL)
	{
		if (strcmp(name, del->name) == 0)
		{
			del->prev->next = del->next;
			del->next->prev = del->prev;
			free(del);
			printf("삭제 완료\n");
		}
		del = del->next;
	}
}
void search_station(char*name)
{
	station*search;
	search = first;
	while (search != NULL)
	{
		if (strcmp(name, search->name) == 0)
		{
			printf("%s\n", search->name);
		}
		search = search->next;
	}
}
void print()
{
	station *all_prt;
	all_prt = first;
	while (all_prt != NULL)
	{
		printf("%s", all_prt->name);
		all_prt = all_prt->next;
	}
}
int main()
[
	init();
	int selcet;
    char name[20];

	while (select != 5)
	{
		printf("\n 1.추가 2.삭제 3.검색 4.전체노선 5.종료\n");
		printf("메뉴 선택 :");
		scanf("%d ", &select);

		switch (selcet)
		{
		    case 1:
			    add_station(&add);
			    break;

		    case 2:
			    printf("삭제할 역을 입력하세요 : ");
			    scanf("%s", &name);
			    del_station(&name);
			    break;
    
		    case 3:
			    printf("검색할 역을 입력하세요 : ");
			    scanf("%s", &name);
			    search_station(&name); // 이름 전달 

		    case 4:
			    print();
			    break;
		}
	}
	return 0;
}