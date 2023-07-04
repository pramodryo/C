//WAP to compare two strings without using strcmp function. 

#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10], s2[10];
	int i;
	printf("Enter the string s1 and s2 resp\n");
	scanf("%[^\n] %[^\n]", s1, s2);

	for(i=0;s1[i];i++)
	{
		if(s1[i] !=s2[i])
			break;
	}
	if(s1[i] == s2[i])
		printf("string is equal\n");
	else
		printf("string is not equal\n");
}
