#include <stdio.h>

int func(int n)
{
	int i = 0, j = 0 ,rightDig = 0, leftDig = 0;
	if (n == 0) return 0;
	rightDig = n % 10;
	leftDig = (n / 10) % 10;
	if (rightDig % 2 != 0 || leftDig % 2 != 1)
	{
		return 1;
	}
	else
		leftDig += 2;
		rightDig += 2;
		func(n / 100);
	
}
int main()
{
	int n = 43417;
	return func(n);
	
}