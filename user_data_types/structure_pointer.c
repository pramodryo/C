//structure ponter OR pointer to structure

#include<stdio.h>
#include<string.h>
struct st
{
	int i;
	char ch[10];
	float f;
};
void main()
{
	struct st s1= {10,"abcd",33.6}, *p; // at the time declaration sequence should be same.
	p = &s1;
	printf("%d %s %f\n", s1.i, s1.ch, s1.f);
	printf("%d %s %f\n\n", p->i, p->ch, p->f);

	p->i=20;
	// p->ch= "efghij";  Error
	strcpy(p->ch,"efghij");
	p->f = 56.32;

	printf("%d %s %f\n", p->i, p->ch, p->f);
}
