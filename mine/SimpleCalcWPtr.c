#include <stdio.h>
double add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

int divide(int x, int y)
{
	return x / y;
}
int (*select_operation())(int, int)
{
	int option = 0;
	printf("Select An Operation\n");
	printf("0) Add\n");
	printf("1) Subtract\n");
	printf("2) Multiply\n");
	printf("3) Divide\n");
	printf("Enter: ");
	scanf_s("%d", &option);
	if (option == 0)
		return add;
	else if (option == 1)
		return subtract;
	else if (option == 2)
		return multiply;
	else if (option == 3)
		return divide;
	else return NULL;
	
}
int main()
{
	int (*operation)(int, int) = select_operation();
	printf("Answer:%d", operation(20, 5));

}