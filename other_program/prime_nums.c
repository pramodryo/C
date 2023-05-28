/*WAP To find out the prime numbers between two numbers*/

#include<stdio.h>
void main()
{
int str, end , i, j, c=0;
printf("Enter the starting and end number\n");
scanf("%d %d", &str, &end);

for(i = str; i<=end;i++)
{
for(j = 2, c=0; j<i; j++)
{
if(i%j==0)
c++;
}
if(c==0)
{
printf("%d ",i);
}
}
printf("\n");
}
