/*WAP to print a binary number using union data type*/

#include<stdio.h>
union u
{
	int num;
	float f;
};

void main()
{
	int i;
	union u u1;

	u1.num = 10;      // assigning integer value
	printf("printing binary of int value: \n");
	for(i=31;i>=0;i--)
	{
		printf("%d", u1.num>>i&1);
	}
	printf("\n");



	u1.f = 23.5;          // assigning float value

	printf("printing binary of float value: \n");
	for(i=31;i>=0;i--)
	{
		printf("%d", u1.num>>i&1);
	}
	printf("\n");
}
