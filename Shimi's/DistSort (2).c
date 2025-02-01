#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5

void printArray(int* arr, int n)
{
	for (int j = 0; j < n; j++)
		printf("%d ", arr[j]);
	printf("\n");
}

int search(int *arr, int n, int key)
{
	for (int j = 0; j < n; j++)
		if (arr[j] == key)
			return j;
	return -1;
}

int* disSort(int *arr, int n, int key)
{
	int* result;
	int p = search(arr, n, key);	//USE BINARY SEARCH!!!! AND NOT THIS ALGORITHM!!!
	int i = p - 1, j = p + 1, k = 1;

	if (p == -1)
		return NULL;

	result = (int*)malloc(sizeof(int)* n);
	result[0] = arr[p];

	while (i >= 0 && j < n)
	{
		if ((arr[p] - arr[i]) <= (arr[j] - arr[p]))
			result[k++] = arr[i--];
		else
			result[k++] = arr[j++];
	}
	
	while (i >= 0)
		result[k++] = arr[i--];

	while (j < n)
		result[k++] = arr[j++];

	return result;
}

int main()
{
	int arr[N] = {1, 2, 5, 7, 10};

	int* result = disSort(arr, N, 7);
	printArray(result, N);
}