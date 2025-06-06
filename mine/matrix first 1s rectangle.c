#include <stdio.h>
#define N 8
int FirstRowWith1(int A[N][N],int *firstRow,int *firstCol)
{
	int left = 0, right = N - 1, found = 0;
	*firstRow = -1;
	*firstCol = -1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		for (int j = 0; j < N; j++)
		{
			if (A[mid][j] == 1)
			{
				*firstRow = mid;
				*firstCol = j;
				right = mid - 1;
				found = 1;
				break;
			}
		}
		if (found != 1) left = mid + 1;
	}
	printf("Rows: %d, Cols : %d ", *firstRow, *firstCol);
}


int main()
{
	int A[N][N] = {
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 1, 1, 1, 1 },
	{ 0, 0, 0, 0, 1, 1, 1, 1 },
	{ 0, 0, 0, 0, 1, 1, 1, 1 },
	{ 0, 0, 0, 0, 1, 1, 1, 1 },
	{ 0, 0, 0, 0, 1, 1, 1, 1 }
	};
	int firstRow, firstCol;
	FirstRowWith1(A,&firstRow,&firstCol);
}