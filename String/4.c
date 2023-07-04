// WAP to find vowels in a given string. 

#include<stdio.h>
#include<string.h>
void main()
{
	char s[20];
	char	vowel[10]= {'a','e','i','o','u','A','E','I','O','U'};
	int i,j, c=0;
	printf("Enter the string\n");
	scanf("%[^\n]",s);

	for(i=0; s[i]; i++)
	{
		for(j=0;j<10;j++)
		{
			if(s[i]==vowel[j])
				c++;
		}
	}

	printf("vowel is found= %d\n", c);
}
