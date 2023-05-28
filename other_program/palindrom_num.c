/*WAP To find out the palindrom numbers between two numbers*/
#include<stdio.h>
void main()
{
	int str, end , i, j,d,k,r,n, sum;
	printf("Enter the starting and end number\n");
	scanf("%d %d", &str, &end);

	for(i=str; i<end;i++)
	{
		for(j=i,sum=0;j>0;j=j/10)
		{
			r = j%10;           // extracting last digit
			sum = sum*10+r;     // add last digit with multiply by 10
		}
		if(sum==i)       // compairing result and number
		{
			printf("%d ", i);
		}
	}

} // EOM
