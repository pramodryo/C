#include<stdio.h>
void main()
{
	char s[100]="Expcet porblmes adn eat thef mor rbeafkast";
	int i,j,k,c=1;
	char ch;
	k=4;
	for(i=0,j=0;s[i];i++,j++)
	{
		if(j==k)
		{
			ch = s[j];
			s[j]=s[j+1];
			s[j+1]=ch;
			c++;
			k = k*c;
			
		}
		if(s[j]==' ' || s[j]=='.')
			j--;
	}
	printf("%s\n",s);
}
