#include<stdio.h>
int main() {
	int a[4][4] = { 1,1,1,1,
					2,2,2,2,
					3,3,3,3,
					4,4,4,4,};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j)
			{
				int t = i;
				while (t--)
				{
					printf("  ");
				}
					printf("%d", a[i][j]);		
			}
		}
		putchar(10);
	}
}