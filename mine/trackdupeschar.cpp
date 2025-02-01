#include <stdio.h>
#include <string.h>

void func(char* str)
{
	int count[26] = { 0 };
	int i = 0, hasDuplicates = 0;
	char dupe;
	int len = strlen(str);
	while (i<len) 
	{
		count[str[i] - 'a']++;
		if (count[str[i] - 'a'] > 1)
		{
			hasDuplicates = 1;
			dupe = str[i];
		}
		i++;
	}
	if (hasDuplicates > 0) printf("There are %d different %c's", count[dupe - 'a'], dupe);
	if (hasDuplicates == 0) printf("no dupes here :)");
}
void main()
{
	char str[] =  "cbeed";
	func(str);
}