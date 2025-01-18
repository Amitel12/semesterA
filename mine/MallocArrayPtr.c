#include <stdio.h>
#include <stdlib.h>

void main()
{
	int* a;
	int length = 0;

	printf("Enter a length: ");
	scanf_s("%d", &length);

	a = malloc(length * sizeof(int));
	printf("address of a: %p\n", a);
	for (int i = 0; i < length; i++)
		a[i] = i;

	for (int i = 0; i < length; i++)
		printf("a[%d]=%d |Adress: %p\n", i, a[i],&a[i]);
	free(a);
}