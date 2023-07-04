/*WAP to call all function using function pointer */

#include<stdio.h>
int sum(int a, int b)
{
	return a+b;
}

int div(int a, int b)
{
	return a/b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

void main()
{
	int a=20, b=5, i;

	int (*p[4])(int, int);  /* Array of function pointer*/

	p[0] = sum;
	p[1] = sub;
	p[2] = mul;
	p[3] = div;

	for(i=0;i<4;i++)
		printf(" %d\n",(*p[i])(a,b));
}
