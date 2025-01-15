#include <stdio.h>
#include <stdlib.h>

#define N 8

void printArray(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

void sortWhatever(int* arr, int size)
{
	int x = 0;
	int y = size - 2;

	/*while (x < y)
	{
		swap(&arr[x], &arr[y]);
		x += 2;
		y -= 2;
	}*/

	for (x = 0; x < size / 2; x += 2)
	{
		swap(&arr[x], &arr[size - 2 - x]);
	}
}

/*int main()
{
	int arr[N] = { 1, 2, 3, 4, 6, 7, 8, 9 };

	sortWhatever(arr, N);

	printArray(arr, N);
}*/

#define N 16

int binSearch(int* arr, int n)
{
	int low = 0;
	int high = n - 1;

	if (n <= 1)
		return -1;

	if (n == 2)
		return (arr[low] == arr[high]) ? low : -1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (arr[mid] == arr[mid - 1] || arr[mid] == arr[mid + 1])
			return mid;

		if (mid - low + 1 == arr[mid] - arr[low] + 1)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return -1;
}

int main()
{
	int arr[N] = { -3,-2,-2,-1,0,1,2,3,4,5,6,7,8,9,10,11 };

	int result = binSearch(arr, N);

	return arr[result];
}