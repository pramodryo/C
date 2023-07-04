/* WAP to declare n number student database structure which contain three member
   1.roll_no 2.name 3.marks */

#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[10];
	float marks;
};
void sort_data(struct student *, int);

void main()
{
	int i,n,ele;
	printf("enter number of students\n");
	scanf("%d",&n);

	struct student st[n];

	ele = sizeof(st)/sizeof(st[0]);

	for(i=1;i<=ele;i++)
	{
		printf("Enter rollno, name & marks of student %d:\n",i);
		scanf("%d %s %f",&st[i].rollno, st[i].name, &st[i].marks);
	}

	printf("data before sorting: \n");
	for(i=1;i<=ele;i++)
	{
		printf("%d %s %f\n",st[i].rollno, st[i].name, st[i].marks);
	}

	sort_data(st, ele);

	printf("\ndata After sorting: \n");
	for(i=1;i<=ele;i++)
	{
		printf("%d %s %f\n",st[i].rollno, st[i].name, st[i].marks);
	}

}//EOM

void sort_data(struct student *p, int ele)
{
	int i,j;
	struct student temp;

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(p[j].rollno > p[j+1].rollno)
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
}


