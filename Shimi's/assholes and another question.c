#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeFrom3Times(char* str)
{
	int i = 0;
	int assholes = 0;
	int count[26] = { 0 };	//int* count = (int*)calloc(26, sizeof(int));

	while (str[i] != '\0')
	{
		if (count[str[i] - 'A'] >= 3)
			assholes++;
		else
			str[i - assholes] = str[i];

		count[str[i] - 'A']++;
		i++;
	}
	str[i - assholes] = '\0';

	//free(count);
}

int main()
{
	char str[] = "AAAAAAABBBBBBBBBBCCCCCCCCC";

	removeFrom3Times(str);
	puts(str);
}