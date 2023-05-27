/* WAP to get num, op and bit position and set, clear and compliment acording to option. */

#include<stdio.h>
void main()
{
	int num, op, pos;

	printf("Enter the number\n");
	scanf("%d", &num);

	printf("Enter the bit position\n");
	scanf("%d", &pos);

	printf("Enter the option (1-3):\n1-> set bit\n2->clear bit\n3->compliment bit\n");
	scanf("%d", &op);

	switch(op)
	{
		case 1: num = num | 1 << pos; // set bit 
			break;
		case 2: num = num & ~(1<<pos); // clear bit
			break;
		case 3: num = num ^ 1<<pos ; // compliment bit
			break;
		default: printf("invalid option\n");break;
	}
	printf("num = %d\n", num);

	for(pos=31;pos>=0;pos--)
	{
		printf("%d",num>>pos&1);     // binary check/ print
	}
	printf("\n");
}
