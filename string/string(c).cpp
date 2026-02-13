#include <stdio.h>
#include <string.h>

int main()
{
	char string[100] = "i see you";
	char string1[101];
	strcpy(string1,string);
	printf("%s",string1);
	return 0;
}
