#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6
#define M 3

int binSearch(int *arr, int n, int k)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == k)
			return i;
	return -1;
}

int isContains(int A[][N], int B[][M], int n, int m, int *r, int *c)
{
	int pos = binSearch((int*)A, n * n, B[0][0]);
	
	if (pos == -1)
	{
		*r = -1;
		*c = -1;
		return 0;
	}

	*r = pos / n;
	*c = pos % n;

	if (*r + m > n || *c + m > n)
	{
		*r = -1;
		*c = -1;
		return 0;
	}

	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++)
			if (B[i][j] != A[i + *r][j + *c])
			{
				*r = -1;
				*c = -1;
				return 0;
			}

	return 1;
}

int main()
{
	int r, c;

	int A[N][N] = {
		{1 , 3 , 7 , 9 , 12, 14},
		{18, 23, 27, 29, 31, 34},
		{37, 39, 42, 48, 51, 53},
		{56, 59, 62, 66, 67, 68},
		{74, 76, 79, 81, 82, 84},
		{91, 93, 95, 97, 98, 99}
	};

	int B[M][M] = {
		{48, 51, 53},
		{66, 67, 68},
		{81, 82, 84}
	};

	if (isContains(A, B, N, M, &r, &c))
	{
		printf("A[%d][%d] = %d\n", r, c, A[r][c]);
	}
}

