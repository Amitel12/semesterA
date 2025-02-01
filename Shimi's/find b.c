#include <stdio.h>
#include <stdlib.h>

#define N 5
#define M 5

char find1st(char* str)
{
	int i = 0;
	int count[26] = { 0 };

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
			count[str[i] - 'a']++;
		i++;
	}

	i = 1;
	if (str[0] != ' ' && count[str[0] - 'a'] == 1)
		return str[0];

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i - 1] == ' ' && count[str[i] - 'a'] == 1)
			return str[i];
		i++;
	}

	return 0;
}

int main()
{
	char* str = "xellz brother how are you today";

	printf("%c", find1st(str));

	return 0;
}