#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str2[50];
	puts("enter string1");
	gets(str);
	strcpy(str2,str);
	puts(str2);
	return 0;
}
