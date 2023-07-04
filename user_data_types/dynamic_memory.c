// WAP to allocate dynamic memory for one student record scan and print it.

#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	char name[10];
	float marks;
};
void main()
{
	struct st *p;
	/*dynamic memory allocation for structure pointer*/

	p = malloc(sizeof(struct st));   

	printf("Enter rollno\n");
	scanf("%d",&p->rollno);
	printf("Enter name\n");
	scanf("%s",p->name);
	printf("Enter marks\n");
	scanf("%f",&p->marks);

	printf("%d %s %f\n", p->rollno, p->name, p->marks);
}
