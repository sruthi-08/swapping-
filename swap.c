#include<stdio.h>
#include<stdio.h>
int main()
{
	int x=10, y=20;
	printf("Before swap x=%d y=%d",x,y);
	x=x*y;
	y=x/y;
	x=x/y;
	printf("\nAfter swap x=%d y=%d",x,y);
	return 0;
}
