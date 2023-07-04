// WAP to find the string length 

#include<stdio.h>
#include<string.h>
int my_strlen(char *);

void main()
{
	char s[20], length;
	printf("Enter the string\n");
	scanf("%[^\n]", s);

	printf("string length: %ld\n", strlen(s));

	length = my_strlen(s);
	printf("string length: %d\n", length);

}

int my_strlen(char *p)
{
	int i=0;
	while(*p)
	{
		i++;
		p++;
	}
	return i;
}
