// WAP to swap the data using function pointer

#include<stdio.h>
void swap(int *a, int *b)  // swapping logic
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void main()
{
	int a = 20, b = 56;

	printf("before swapping a=%d b=%d\n", a, b);

	void (*p)(int *, int *);       // function pointer declaration
	p = swap;                     // assign function
	(*p)(&a, &b);                  // calling function

	printf("After swapping a=%d b=%d\n", a, b);
}
