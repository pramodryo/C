// WAP find how many prime numbers are in array

#include<stdio.h>
void main()
{
	int a[10],i,j,ele,c;
	ele = sizeof(a)/sizeof(a[0]);

	printf("Enter the array element..\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0,c=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
				break;
		}
		if(a[i]==j)
			c++;
	}
	printf("total prime numbers= %d\n",c);
}
