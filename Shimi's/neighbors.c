#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define R 5
#define C 5

int max3(int x, int y, int z)
{
	int max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	return max;
}

void printMatrix(int M[][C], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			printf("%d ", M[i][j]);
		printf("\n");
	}
	printf("\n");
}

int validateNeighbors(int A[][C], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (A[i][0] == A[i - 1][0])
			return 0;
		if (A[0][i] == A[0][i - 1])
			return 0;
	}

	if (A[0][1] == A[1][0])
		return 0;

	for (int i = 1; i < n; i++)
		for (int j = 1; j < n; j++)
		{
			if (A[i][j] == A[i - 1][j - 1]) return 0;
			if (A[i][j] == A[i][j - 1]) return 0;
			if (A[i][j] == A[i - 1][j]) return 0;
			if ((i + 1 < n) && (A[i][j] == A[i + 1][j - 1])) return 0;
			if ((j + 1 < n) && (A[i][j] == A[i - 1][j + 1])) return 0;
		}

	return 1;
}

int main()
{
	int A[R][C] = {
		{1,3,2,5,2},
		{9,8,1,0,4},
		{4,6,2,8,1},
		{0,7,9,3,0},
		{8,4,2,8,1}
	};

	return validateNeighbors(A, R);
}