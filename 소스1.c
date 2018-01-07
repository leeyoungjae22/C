#include<stdio.h>	


void main()
{
	int i,j;
	int a =1;
	int array[5][5];
	while (a <= 25)
	{
		if (i%2 == 0 || i == -1)
		{
			for (i = 0; i < 5; i++)
			{
				array[i][j] = a;
				a++;
			}
		}
	
		else if (i%2 == 1)
		{
			for (i = 4; i >= 0; i--)
			{
				array[i][j] = a;
				a++;
			}
		}	
		j++;
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%3d", array[i][j]);
		}
	}

	
}