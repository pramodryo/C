// WAP  to reverse the string using loops & recursion. (recursion part pending)

#include<stdio.h>
#include<string.h>
void rev_loop(char *);
void rev_recursion(char *, int);
void main()
{
	char s[20];
	int i;
	printf("Enter the string\n");
	scanf("%[^\n]", s);

	rev_loop(s);
	printf("After loop reaverse string: %s\n", s);

	rev_recursion(s, strlen(s));
	printf("After loop reaverse string: %s\n", s);
}

/*****************************************************************************/
void rev_recursion(char *s, int n)
{
	char ch;
	static int i;
	if(i<n)
	{
		ch = s[i];
		s[i] = s[n];
		s[n] = ch;
		i++;
		rev_recursion(s,--n);
	}
	else 
	return;
}
/*****************************************************************************/
void rev_loop(char *s)
{
	int i, len;
	char ch;
	for(len=0;s[len];len++);

	for(i=0,--len;i<len; i++, len--)
	{
		ch = s[i];
		s[i]= s[len];
		s[len] = ch;
	}
}
