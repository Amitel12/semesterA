#include <stdio.h>
#include <stdlib.h>

#define N 10

void printArray(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d, ", arr[i]);
	printf("\n");
}

void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

void split3(int *arr, int n)
{
	int i = 0;
	int j = n - 1;

	while (i <= j)
		if (arr[i] % 3 == 0)
			i++;
		else
			swap(&arr[i], &arr[j--]);

	j = n - 1;
	while (i <= j)
		if (arr[i] % 3 == 1)
			i++;
		else
			swap(&arr[i], &arr[j--]);
}

int main()
{
	int arr[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	split3(arr, N);

	printArray(arr, N);

	return 0;
}