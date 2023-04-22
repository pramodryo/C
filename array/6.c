// WAP to delete element form desired position.

#include<stdio.h>
void main()
{
	int a[10],i,j,ele,pos;
	ele = sizeof(a)/sizeof(a[0]);

	printf("Enter the array element..\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("Enetr the position.\n");
	scanf("%d",&pos);
	for(i=0;i<ele;i++)
	{
		if(i==pos)
		{
			for(j=i;j<ele;j++)
				a[j]=a[j+1];
		}
	}
	printf("After deleting array elements..\n");
	for(i=0;i<ele-1;i++)
		printf("%d ",a[i]);
	printf("\n");
}
