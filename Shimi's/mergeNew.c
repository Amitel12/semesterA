#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 5

void printArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d, ", arr[i]);
	printf("\n");
}

int* mergeNew(int* A, int n, int* B, int m, int* size)
{
	int* temp;
	int i = 0, j = m - 1, k = 0;
	int* C = (int*)malloc(sizeof(int) * (n + m));
	if (!C)
	{
		*size = 0;
		return NULL;
	}

	while (i < n && j >= 0)
	{
		if (A[i] < B[j])
			C[k++] = A[i++];
		else if (A[i] > B[j])
			C[k++] = B[j--];
		else
		{
			i++;
			j--;
		}
	}

	while (i < n)
		C[k++] = A[i++];

	while (j >= 0)
		C[k++] = B[j--];

	*size = k;
	temp = (int*)realloc(C, sizeof(int) * k);
	if (!temp)
		return C;
	return temp;
}

int main()
{
	int size;
	int A[N] = { 1, 2, 3, 4, 5 };
	int B[M] = { 8, 7, 6, 5, 4 };

	int* C = mergeNew(A, N, B, M, &size);

	printArray(C, size);

	return 0;
}