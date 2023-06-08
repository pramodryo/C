#include<stdio.h>
int sum(int a, int b)     // sum function
{
	return a+b;
}

int sub(int a, int b)     // aubtraction function defination
{
	return a-b;
}

int mul(int a, int b)      // multiplication
{
	return a*b;
}

int div(int a, int b)     // divistion
{
	return a/b;
}

void main()
{
	int a=45, b= 12, r;
	int (*p)(int, int);

	p = sum;                // sum function assign
	r = (*p)(a,b);          // sun function call
	printf("sum = %d\n", r);


	p = sub;                // sub function assign
	r = (*p)(a,b);          // sub function call
	printf("sub = %d\n", r);

	p = div;                // div function assign
	r = (*p)(a,b);          // div function call
	printf("div= %d\n", r);
}
