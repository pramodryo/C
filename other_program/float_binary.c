// WAP to find binary of float numebr using charactor pointer

#include<stdio.h>
void main()
{
	int pos;
	float num;
	char *p;
	printf("Enter the number:\n");
	scanf("%f", &num);

	p = (char *) &num;            // type casting with charctor ponter

	for(p=p+3; p>= (char *)&num; p--)     // logic
	{
		for(pos= 7; pos>=0;pos--)
		{
			printf("%d", *p>>pos&1);
		}
	}
	printf("\n");
}
