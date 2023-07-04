// WAP to find the no.of times the character is found in a given string. 

#include<stdio.h>
#include<string.h>
void main()
{
	char s[20], ch;
	int i, c=0;
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	printf("enter the charactor\n");
	scanf(" %c", &ch);

	for(i=0; s[i]; i++)
	{
		if(s[i]==ch)
			c++;
	}

	printf("charctor %c is founf= %d\n", ch, c);
}
