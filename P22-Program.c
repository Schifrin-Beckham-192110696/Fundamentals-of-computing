#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER a,b: ");
	scanf("%d %d",&a,&b);
	printf("Before swapping: a=%d, b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter swapping: a=%d, b=%d",a,b);
}
