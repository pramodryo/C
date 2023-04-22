// WAP to print second largest and second smallest number.

#include<stdio.h>
void main()
{
	int a[10],i,ele,slarge,large,ssmall,small;
	ele = sizeof(a)/sizeof(a[0]);

	printf("Enter the array element..\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
       

	if(a[0]>a[1])
	{
		large = a[0];
		ssmall= 0x7fffffff;  //extrem largest value
		slarge= 0x80000000;  // extream smallest value
		small = a[1];
	}
	else
	{
		large = a[1];
		ssmall= 0x7fffffff;
		slarge= 0x80000000;
		small =a[0];
	}

	for(i=1;i<ele;i++)
	{
		if(a[i]>large)
		{
			slarge =large;
			large = a[i];
		}
		else if(a[i]>slarge && a[i]<large)
		{
			slarge = a[i];
		}
		if(a[i]<small)
		{
			ssmall = small;
			small = a[i];
		}
		else if(a[i]<ssmall && a[i]>small)
		{
			ssmall = a[i];
		}
	}
	printf("largest = %d\nsecond largest = %d\n", large,slarge);
	printf("smallest = %d\nsecond smallest = %d\n", small,ssmall);
}



