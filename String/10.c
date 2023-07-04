// WAP to remove the conjucutive spaces in a given string line.

#include<stdio.h>
#include<string.h>
void main()
{
	char s[40];
	int i,j;
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
}
