// How to handle if one member of structure is a pointer.

#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	// char name[10];
	char *name;
	float marks;
};
void main()
{
	struct st *p;
	p= malloc(sizeof(struct st));
	p->name = malloc(10);   // we need to separate memory allocate to that pointer

	printf("Enter the rollno\n");
	scanf("%d", &p->rollno);
	printf("Enter the name\n");
	scanf("%s", p->name);
	printf("Enter the marks\n");
	scanf("%f", &p->marks);

	printf("%d %s %f\n", p->rollno, p->name,p->marks);
}
