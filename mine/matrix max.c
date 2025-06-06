#include <stdio.h>
#define R  3
#define C  5

void computeB(int A[R][C], int B[R][C])
{
	int max = A[0][0];
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if(A[i][j] > max)
			{
				max = A[i][j];
			}
			B[i][j] = max;
		}
	}
}
void printarray(int mat[R][C])
{
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			printf("%d\t ", mat[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int A[R][C] = {
		{1, 1, 2, -5, -2},
		{3, -2, -1, 0, 4},
		{4, 4, 2, 8, 1}
	};
	int B[R][C];
	computeB(A,B);
	printarray(B);
}