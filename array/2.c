// WAP to find largest and smallest number.

#include<stdio.h>
void main()
{
	int a[10],i,ele,smallest,largest;
	ele = sizeof(a)/sizeof(a[0]);

	printf("Enter the array element..\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	if(a[0]>a[1])
	{
		largest = a[0];
		smallest = a[1];
	}
	else
	{
		largest = a[1];
		smallest = a[0];
	}
	for(i=2;i<ele;i++)
	{
		if(a[i]>largest)
		{
			largest = a[i];
		}
		else if(a[i]< smallest)
			smallest = a[i];
	}
	printf("largest=%d\nsmallest=%d\n",largest,smallest);
}
