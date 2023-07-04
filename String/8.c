// Write a program to find the no.of words are presented in a given string line. 

#include<stdio.h>
#include<string.h>
void main()
{
	char s[40];
	int i,j, c=0;
	printf("Enter the string \n");
	scanf("%[^\n]", s);

	for(i=0;s[i];i++)                      // logic for removing spaces from string
	{
		if(s[0]==' '||(s[i]==' ' &&(s[i+1]==' '||s[i+1]=='\0')))
		{
			for(j=i;s[j];j++)
			{
				s[j] = s[j+1];
			}
			i--;
		}
	}
	printf("After removing spaces string: %s\n", s);


	for(i=0; s[i];i++)     // calculating number of spaces (spaces +1 = no. of word)
	{
		if(s[i]==' ')
			c++;
	}
	printf("number of word prasent in string is: %d\n", c+1);
}
