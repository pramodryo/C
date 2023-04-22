// WAP to stor the value of first 4 charctor value in integer num1 and second 2 charactor in int num2; 

#include<stdio.h>
void main()
{
int num1;
short int num2;
char c[6]= {'a','b','c','d','e','f'};

num1 = c[0]&0xff | (c[1]&0xff)<<8 | (c[2]&0xff)<<16 | ((c[3]&0xff)<<24);
printf("%d\n",num1);

num2 = c[4]&0xff | (c[5]&0xff)<<8;
printf("%d\n",num2);

printf("%x %x\n",'f','e');
}
