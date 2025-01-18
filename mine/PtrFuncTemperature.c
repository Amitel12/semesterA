#include <stdio.h>
#include <stdbool.h>
bool freeze_C(int temperature)
{
	if (temperature <= 0) return true;
	else return false;
}
bool freeze_F(int temperature)
{
	if (temperature <= 32) return true; 
	else return false;
}
void is_freezing(bool(*freeze_check)(int))
{
	int temperature = 0;
	printf("Enter temperature: ");
	scanf_s("%d", &temperature);
	if (freeze_check(temperature))
		printf("It's Freezing\n");
	else
		printf("It's Not Freezing!\n");
}
int main()
{
	printf("\nCelsius...\n\n");
	is_freezing(freeze_C);
	printf("\nFahrenheit...\n\n");
	is_freezing(freeze_F);
	return 0;
}