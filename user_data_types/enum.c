#include<stdio.h>
enum count{one, two, three, four, five, six}v;
enum month{jan=1, feb, march=5555555555555555555, apr,may, jun, jul, aug}m;

void main()
{
	printf("%d size=%ld\n", one, sizeof(v));   // 0 & 4 byte

	/* NOTE: by default size of enum is 4 byte*/

	printf("feb = %d & %ld\n",feb, sizeof(m));    // 2 & 8 byte
}
