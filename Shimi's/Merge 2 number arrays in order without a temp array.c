#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5
#define M 4

void printArray(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void merge(int *A, int *B, int n, int m)
{
	int i = n - 1;
	int j = m - 1;
	int k = n + m - 1;

	while (i >= 0 && j >= 0)
	{
		if (A[i] > B[j])
			A[k--] = A[i--];
		else
			A[k--] = B[j--];
	}

	//while (i >= 0)
	//	A[k--] = A[i--];

	while (j >= 0)
		A[k--] = B[j--];
}

int main()
{
	int A[N + M] = {5, 6, 7, 8, 9, 0, 0, 0, 0 };
	int B[M] = { 1, 2, 3, 4 };

	merge(A, B, N, M);
	printArray(A, N + M);
}

