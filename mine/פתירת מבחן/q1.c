#include <stdio.h>
int index_half(int* arr, int size)
{
	int sum = 0, leftsum = 0, i;
	for (i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	for (i = 0; i < size; i++)
	{
		leftsum += arr[i];
		if (leftsum == sum - leftsum) return i;
	}
	return -1;
}

/*
int index_half(int* arr, int size)
{
	int sum = 0, halfsum = 0, i;
	for (i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	if (sum % 2 != 0) return -1;
	halfsum = sum / 2;
	sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += arr[i];
		if (sum == halfsum) return i;
	}
}
*/
void main()
{
	int arr[] = {5, -4, -2, 8, 10, -3};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("%d",index_half(arr,size));
}