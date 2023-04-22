// WAP to delete duplicate elements of an array.

#include<stdio.h>
void main()
{
int ele,i,j;
char s[10];

ele = sizeof(s)/sizeof(s[0]);
printf("Enter the array..\n");
for(i=0;i<ele;i++)
scanf("%c",&s[i]);


printf("After deleting array elements..\n");
for(i=0;i<ele;i++)
printf("%c",s[i]);
}
