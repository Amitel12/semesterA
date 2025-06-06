#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 9

void printArray(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void swap(int* px, int *py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

void split(int *arr, int n)
{
	int i = 0;
	int j = n - 1;

	while (i <= j)
	{
		if (arr[i] % 2 == 0)
			i++;
		else
			swap(&arr[i], &arr[j--]);
	}
}

int main()
{
	int A[N] = {5, 6, 7, 8, 9, 10, 11, 12, 13 };


	split(A, N);
	printArray(A, N);
}

