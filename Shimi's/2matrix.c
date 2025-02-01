#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define R 3
#define C 5

int max3(int x, int y, int z)
{
	int max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	return max;
}

void fillMatrix(int A[][C], int B[][C], int r, int c)
{
	B[0][0] = A[0][0];

	for (int i = 1; i < r; i++)
		B[i][0] = max(A[i][0], B[i - 1][0]);

	for (int j = 1; j < c; j++)
		B[0][j] = max(A[0][j], B[0][j - 1]);

	for (int i = 1; i < r; i++)
		for (int j = 1; j < c; j++)
			B[i][j] = max3(A[i][j], B[i - 1][j], B[i][j - 1]);
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


void main()
{
	int A[R][C] = {
		{1,1,2,-5,-2},
		{3,-2,-1,-0,4},
		{4,4,2,8,1}
	};

	int B[R][C];

	fillMatrix(A, B, R, C);

	printMatrix(B, R, C);
}