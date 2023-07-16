/* swapping logics of data, and sub and sub logic without proper symbol*/

#include<stdio.h>
void main()
{
int a =20, b = 30, temp;
printf("Before a=%d    b=%d\n", a, b);


printf("sum = %d\n", a-(-b)); // sum without '+' symbol
printf("sub = %d\n", a+(~b+1));  // sub without '-' symbol
printf("sum = %d\n", a-(~b+1));  // sum without '+' symbol


/* Single line swapping logic */

//a = a^b ^ (b = a);    // swap using binary operator  
//a = a+b - (b = a);  
//a = a*b /(b = a);


/****************     // Using Temp 
temp = a;
a= b;
b = temp;
***************/

/******************   // Using bitwise
a = a^b;
b = a^b;
a = a^b;
***************/

/******************   // Using bitwise
a = a+b;
b = a-b;
a = a-b;
***************/

printf("After a=%d    b=%d\n", a, b);
}
