#include <stdio.h>
#include <stdlib.h>

#define N 5

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

int binSearch(int* arr, int n, int k)
{
	int low = 0;
	int high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (arr[mid] == k)
			return mid;

		if (k < arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	return -1;
}

int* distsort(int* arr, int n, int num)
{
	int* result, i, j, k = 1;
	int pos = binSearch(arr, n, num);

	if (pos == -1)
		return NULL;

	result = (int*)malloc(sizeof(int) * n);

	if (!result)
		return NULL;

	result[0] = num;
	i = pos - 1;
	j = pos + 1;

	while (i >= 0 && j < n)
	{
		if ((num - arr[i]) <= (arr[j] - num))
			result[k++] = arr[i--];
		else
			result[k++] = arr[j++];
	}

	while (j < n)
		result[k++] = arr[j++];

	while (i >= 0)
		result[k++] = arr[i--];

	return result;
}

int main()
{	
	int arr[N] = { 1,2,5,7,10 };

	int* result = distsort(arr, N, 10);

	printArray(result, N);

	free(result);
}