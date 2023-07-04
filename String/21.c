//

#include<stdio.h>
#include<string.h>
char * my_strstr(const char*,const char *);
void main()
{
char f[10],s[20], *p;

printf("Enter the first string.\n");
scanf("%s",f);
printf("Enter the second string.\n");
scanf(" %s",s);

p = strstr(f,s);

printf("%p\n",p);
printf("%s\n",(char *)p);

}
char * my_strstr(const char*,const char *)
{

}
