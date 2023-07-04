/* WAP to delete the duplicate characters in a given string.
 Ex: Input : vecteeovvorr
 Output : vector
*/


#include<stdio.h>
void main()
{
	int i,j,k;
	char o[10]="vector", d[10];

	//printf("Enter orignal string\n");
	//scanf("%s",o);
	printf("Enter the duplicate string\n");
	scanf("%s",d);

	for(i=0;d[i];i++)
	{
		if(o[i]==d[i])
			continue;
		else
		{
			for(j=i;d[j];j++)
			{
				d[j]=d[j+1];
			}
			d[j]='\0';
                        i--;
		}
	}
	printf("After deleting duplicate string:\n%s\n",d);
}
