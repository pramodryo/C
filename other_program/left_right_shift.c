/* WAP for the find out answar after left shift and right shift
formulas:
left shift:  num * 2 ^ (no of times shift )
Right shift:  num / 2 ^ (no of times shift )
 */

#include<stdio.h>
void main()
{
	int num, n, i, r=1;

	printf("Enter the number\n");
	scanf("%d", &num);

	printf("Enter the number of times shift\n");
	scanf("%d", &n);

	for(i=0;i<n;i++)      // finding power of no of times shift
		r = r*2;


	// left shift
	printf("%d    ", num<<n);
	printf("%d\n", num * r);


	// Right shift
	printf("%d    ", num >> n);
	printf("%d\n", num / r);           

	/*NOTE: if devide is in float consider next number 
	  Ex. 7/3 = 2.14 ~= 3;
	 */
}
