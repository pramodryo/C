#include<stdio.h>
union
{
	struct
	{
		char ch[2];
		char ch1[2];
	}st;
	struct 
	{
		short int x;
		short int y;
	} st2;

}u={12,1,15,1};  // 

void main()
{
	printf("%d  %d\n", u.st2.x, u.st2.y); // 268 271
}
