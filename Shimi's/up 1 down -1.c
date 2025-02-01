#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define R 5
#define C 5

int max3(int x, int y, int z)
{
	int max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	return max;
}

void printMatrix(int M[][C], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			printf("%d ", M[i][j]);
		printf("\n");
	}
	printf("\n");
}


//2489  --> 1
//31	--> -1
int fun(int n)
{
	int a = n % 10;
	int b = n / 10 % 10;

	if (a == b)
		return 0;

	int curr = (a > b) ? 1 : -1;
	
	if (n < 100)
		return curr;

	if (curr == fun(n / 10))
		return curr;
	return 0;
}

int main()
{
	int n;

	printf("Enter n:");
	scanf_s("%d", &n);

	return fun(n);
}