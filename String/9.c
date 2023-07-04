// WAP to delete a desired character in a given string

#include<stdio.h>
#include<string.h>
void main()
{
	char s[20], ch;
	int i, j;
	printf("enter the string\n");
	scanf("%[^\n]", s);
	printf("Enter the charctor which you want to delete\n");
	scanf(" %c", &ch);

	printf("Before the delete charactor string is: %s\n", s);

	for(i=0;s[i];i++)
	{
		if(s[i] == ch)
		{
			for(j=i;s[j];j++)
			{
				s[j] = s[j+1];
			}
			i--;
		}
	}

	printf("After the delete charactor string is: %s\n", s);
}
