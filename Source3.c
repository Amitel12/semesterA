#include <stdio.h>
#include <stdlib.h>

#define N 13

void printArray(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int binSearchLeft(int* arr, int n, int k)
{
	int low = 0;
	int high = n - 1;

	if (arr[low] == k)
		return low;

	if (n == 2 && arr[high] == k)
		return high;

	while (low + 1 < high)
	{
		int mid = (low + high) / 2;

		if (arr[mid] == k && arr[mid - 1] != k)
			return mid;

		if (arr[mid] >= k)
			high = mid - 1;
		else
			low = mid;
	}

	if (arr[low] == k)
		return low;

	return -1;
}


int main()
{
	int arr[N] = { 6, 7, 7 };

	int result = binSearchLeft(arr, 3, 7);

	return result;
}