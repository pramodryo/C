// WAp to reverse the array elements.

#include<stdio.h>
void main()
{
	int a[10],i,j,ele,t;
	ele = sizeof(a)/sizeof(a[0]);

	printf("Enter the array element..\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0,j=ele-1;i<j;i++,j--)
	{
		t=a[i], a[i]=a[j], a[j]=t;
	}
	printf("After reversing array elements are: \n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
