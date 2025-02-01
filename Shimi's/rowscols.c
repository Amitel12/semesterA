#include <stdio.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 5

void printArray(int* arr, int n)
{
	for (int j = 0; j < n; j++)
		printf("%2d ", arr[j]);
	printf("\n");
}

void printMatrix(int mat[][COLS], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
		printArray(mat[i], cols);
	printf("\n");
}

void calcDiagonals(int mat[][COLS], int n, int* mainDiagonal, int* subDiagonal)
{
	*mainDiagonal = 0;
	*subDiagonal = 0;

	for (int i = 0; i < n; i++)
	{
		*mainDiagonal += mat[i][i];
		*subDiagonal += mat[i][n - 1 - i];
	}
}

int validMatrix(int mat[][COLS], int* arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		if (binSearch(mat[i], cols, arr[i]) == -1)
			return 0;
	}

	return 1;
}

void main()
{
	int md, sd;

	int arr[ROWS] = { 1, 2, 3, 4, 5 };

	int mat[ROWS][COLS] = {
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
		{1, 2, 3, 4, 5},
		{1,	2, 3, 4, 5}
	};

	printMatrix(mat, ROWS, COLS);
	calcDiagonals(mat, ROWS, &md, &sd);

	printf("main: %d, sub: %d\n", md, sd);
}