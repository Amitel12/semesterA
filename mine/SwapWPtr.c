#include <stdio.h>
void swap(int* x, int* y);
void main()
{
	int a=0, b = 0;
	printf("Give me a number for a, b\n");
	scanf_s("%d %d", &a, &b);
	printf("You chose A:%d, B:%d\n", a, b);
	swap(&a, &b);
	printf("After swap A:%d, B:%d", a, b);

}
void swap(int* x, int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}