// WAP to enter element at desired position..

#include<stdio.h>
void main()
{
	int i,j,k,pos;
	char s[10],ch;

	printf("Enter the string..\n");
	scanf("%s",s);
	printf("Enetr the position..\n");
	scanf(" %d",&pos);
	printf("Enter the charactor..\n");
	scanf(" %c",&ch);

	for(j=0;s[j];j++);
	printf("Before adding length of string =%d\n", j);
	for(i=j;;i--)
	{
		s[i+1]=s[i];
		if(i==pos)
			break;
	}
	s[i]=ch;
	s[j+1]='\0';

	printf("After adding charactor..\n");
	printf("%s\n",s);

	for(j=0;s[j];j++);
	printf("After adding length of string =%d\n", j);

}
