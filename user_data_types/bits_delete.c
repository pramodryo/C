//WAP to delete a perticular bit from a given number.

#include<stdio.h>
void main()
{
	int num, pos, i,j,k, m,n, bits;

	printf("Enter the number\n");     // taking number
	scanf("%d", &num);

	printf("Enter the pos\n");       // position from bits will delete
	scanf("%d", &pos);

	printf("Enter how many bits should delete\n");   // how many bits should delete
	scanf("%d", &bits);


	printf("Before deleting binary is\n");
	for(i=31; i>=0; i--)
		printf("%d", num >> i & 1);
	printf("\nnum =%d\n", num);

	for(j=0;j<bits;j++)
	{
		i = pos;
		if(i==pos)
		{
			while(1)
			{
				if(i==31)
				{
					num = num & ~(1<<i);
					break;
				}
				else
				{
					m = num >> i &1;
					n = num >> (i+1) &1;
					if(m !=n)
					{
						num = num ^ 1<<i;
					}
				}
				i++;
			}
		}
	}

	printf("Before deleting binary is\n");
	for(i=31; i>=0; i--)
		printf("%d", num >> i & 1);
	printf("\nnum =%d\n", num);
}
