/* WAP to swap the data using function pointer with call back function 

   Call back function : 
   a function which takes address of another function as an argument called callback function
 */

#include<stdio.h>
void swap(int *a, int *b)      // swap function
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void do_swap(int *a, int *b,void(*p)(int *, int *))      // do_swap is callback function
{
	p(a,b);
}

void main()
{
	int a = 10, b =20;
	do_swap(&a, &b, swap);        // calling to callback function and passing swap function address as an arguments

	printf("a=%d, b=%d\n", a,b);

}
