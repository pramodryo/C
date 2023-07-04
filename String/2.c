// Write a one line code to copy the string into another buffer. 

#include<stdio.h>
#include<string.h>
void my_strcpy(char *, const char *);   //( source and destination)
void my_strncpy(char *, const char *, int );
void main()
{
	char s[20], d1[10], d2[10], *p;
	printf("Enter the string\n");
	scanf("%[^\n]", s);

	printf(".................\n");
	printf("%s\n", strcpy(d1,s));       // copy all chractor
	printf("%s\n", strncpy(d2,s,4));     // copy only first 4 charctor

	printf("--------------------------\n");
	my_strcpy(d1,s);
	printf("%s\n", d1);

	my_strncpy(d2,s,4);
	printf("%s\n", d2);
}

/********************************************************************/
void my_strcpy(char *d, const char *s)
{
	int i;
	for(i=0;s[i];i++)
	{
		d[i] = s[i];
	}
	d[i] = '\0';
}

/********************************************************************/
void my_strncpy(char *d, const char *s, int n)
{
	int i;
	for(i=0; s[i];i++)
	{
		if(i==n)
		{
			d[i]='\0';
			break;
		}
		d[i] = s[i];
	}
}
