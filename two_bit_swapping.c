//WAP to swap first two bits with last two bits and next two bits kept as it is.

#include<stdio.h>
void main()
{
	int num;
	int pos,flag=1,m,n,i,j,c;
	printf("Enter the number..\n");
	scanf("%d",&num);

	printf("Before swapping binary is.\n");
	for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");

	for(i=0,j=31,c=0;i<j;i++,j--)
	{
		if(flag==1 && c<2)
		{
			m=num>>i&1;
			n= num>>j&1;
			if(m!=n)
			{
				num=num^1<<i;
				num=num^1<<j;
			}
			c++;
			if(c==2)
			{
				flag=0;
			}
		}
		else if(flag==0)
		{
			c--;
			if(c==0)
			{
			flag=1;
			}
		}
	}
	printf("After swapping binary is.\n");
	for(pos=31;pos>=0;pos--)
		printf("%d",num>>pos&1);
	printf("\n");
	printf("num=%d\n",num);
}
