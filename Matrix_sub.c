#include <stdio.h>
#define ROWS 2
#define COLS 2

int main()
{
	int a[ROWS][COLS] = { {2,5},
						  {1,4} };
	int b[ROWS][COLS] = { {3,6},
						  {5,8} };
	int c[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			c[i][j] = a[i][j] - b[i][j];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}

	return 0;
}
