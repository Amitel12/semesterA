#include <stdio.h>
int funcs(int* c, int k, int i, int j)
{
	if (i >= j)
		return -1;
	if (c[i] + c[j] == k)
		return i;
	if (c[i] + c[j] > k)
		return funcs(c, k, i, j - 1);
	else
		return funcs(c, k, i + 1, j);
}


void main()
{
	int c[] = { -5,-2,12,25,34,40 };
	int size = sizeof(c) / sizeof(c[0]);
	int find = 46;
	int index = funcs(c, find, 0, size - 1);

	if (index != -1)
	{
		int j = size - 1;
		while (c[index] + c[j] != find) j--;
		printf("Pair found at indexs %d and %d ( Values %d + %d = %d)", index, index + 1, c[index], c[j], find);
	}
	else 
		printf("No valid pair found.\n");
	return 0;
}
