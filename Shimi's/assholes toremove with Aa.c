#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int charToIdx(char c)
{
	if ('a' <= c && c <= 'z')
		c = c - 'a';
	else
		c = c - 'A' + 26;

	return c;
}

void removeElements(char* str, char* remove)
{
	int i = 0;
	int assholes = 0;
	int count[52] = { 0 };

	while (remove[i] != '\0')
	{
		count[charToIdx(remove[i])]++;
		i++;
	}

	i = 0;
	while (str[i] != '\0')
	{
		if (count[charToIdx(str[i])] != 0)
			assholes++;
		else
			str[i - assholes] = str[i];

		i++;
	}
	str[i - assholes] = '\0';
}

int main()
{
	char str[] = "Abbcbab";
	char* remove = "badz";

	removeElements(str, remove);
	puts(str);
}

