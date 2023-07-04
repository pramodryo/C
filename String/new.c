#include<stdio.h>
#include<string.h>
void main()
{
char s1[]="embedded", s2[]="be";

printf("%p\n",strstr(s1,s2));
printf("%s\n",strstr(s1,s2));

printf(": %p\n",strcasestr(s1,s2));
printf(": %s\n",strcasestr(s1,s2));
}
