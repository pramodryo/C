#include<stdio.h>
void main()
{
int a[10],i,ele;
ele = sizeof(a)/sizeof(a[0]);

printf("Enter the array element..\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);


}
