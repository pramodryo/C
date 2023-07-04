#include<stdio.h>
struct one
{
char ch;
int i;
float f;
};
void main()
{
int num;
struct one o1;
o1.ch='a';
o1.i=10;
o1.f=23.5;

printf("%c %d %f\n",o1.ch,o1.i,o1.f);
}
