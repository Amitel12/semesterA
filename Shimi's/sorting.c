#include <stdio.h>
#include <stdlib.h>

#define N 27

void printArray(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d, ", arr[i]);
	printf("\n");
}

void minMax(int* arr, int n, int* min, int* max)
{
	*min = arr[0];
	*max = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > *max)
			*max = arr[i];
		else if (arr[i] < *min)
			*min = arr[i];
	}
}

void sort(int* arr, int n)
{
	int* count;
	int i, j, k = 0, min, max, size;

	minMax(arr, n, &min, &max);
	size = max - min + 1;

	count = (int*)calloc(size, sizeof(int));

	for (i = 0; i < n; i++)		//n
		count[arr[i] - min]++;

	for (i = 0; i < size; i++)	//size
		for (j = 0; j < count[i]; j++)
			arr[k++] = i + min;

	free(count);
}

void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}

void split(int* arr, int n)
{
	int i = 0;
	int j = n - 1;

	while (i <= j)
		if (arr[i] % 2 == 0)
			i++;
		else
			swap(&arr[i], &arr[j--]);
}

int isAlpha(char c)
{
	return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9');
}

void removeAssholes(char* str)
{
	int i = 0;
	int assholes = 0;

	while (str[i] != '\0')
	{
		if (!isAlpha(str[i]))
			assholes++;
		else
			str[i - assholes] = str[i];
		i++;
	}
	str[i - assholes] = '\0';


}

int main()
{
	int arr[N] = {1, 4, 7, 12, 13, 18, 21, 3, 3, 3, 6, 6, 7, 2, 2, 1, 9, 9, 12, 12, 11, 16, 21, 21, 19, 18, 17};

	char str[] = "Afvc&^%$34DSFdf^%$#34gFDg-={]<.,?!jd#568DFt";

	removeAssholes(str);
	puts(str);

	sort(arr, N);
	printArray(arr, N);
	split(arr, N);
	printArray(arr, N);
}