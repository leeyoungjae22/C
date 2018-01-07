#include<stdio.h>
int main()
{
	int i;
	int num, c;
	int arr[10] = { 5,6,8,1,3,7,13,10,2,9};
	for(c=0;c<9;c++)
	{
		for (i = 0; i < 10; i++)
		{
			if (arr[i] > arr[i+1])
			{
				num = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = num;
			}

		}
		
	}
	for (i = 0; i < 10; i++)
	{
		printf(" %3d ", arr[i]);
	}
	printf("\n");
	return 0;
}
