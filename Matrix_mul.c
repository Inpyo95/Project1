#include <stdio.h>
#define ROWS 2
#define COLS 2

int main()
{
	int a[ROWS][COLS] = { {3,4}, 
						  {2,3} };
	int b[ROWS][COLS] = { {4,7},
						  {6,9} };
	int c[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}

	return 0;
}
