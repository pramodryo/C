/*WAP To find out the prime numbers between two numbers*/
#include<stdio.h>
void main()
{
	int str, end , i, j,d,k,r,n, sum;
	printf("Enter the starting and end number\n");
	scanf("%d %d", &str, &end);


	for(i= str; i<=end;i++)
	{
		for(j=i,d=0; j>0;j=j/10)     // counting number of digits
			d++;

		for(j=i,sum=0; j>0;j=j/10)
		{
			r = j%10;                 // extracting digit
			for(k=1, n=1;k<=d;k++)
			{
				n = r*n;          // logic: multiplying number with no. og digit times

			}
			sum = sum + n ;        // add result 
		}
		if(sum== i)                    // compairing result and number
		{
			printf("%d ", i);
		}
	}
	//printf("%d\n", d);
} // EOM
