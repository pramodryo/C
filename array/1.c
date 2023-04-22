// WAP to diaplay sum of even number and product of odd number.

#include<stdio.h>
void main()
{
	int a[10],i,ele,sum=0,product=1; 
	ele = sizeof(a)/sizeof(a[0]);

	printf("Enter the array element..\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
		else
			product = product*a[i];
	}
	printf("sum=%d\nproduct=%d\n",sum,product);
}
