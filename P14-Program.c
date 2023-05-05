#include<stdio.h>
int main()
{
	int n,fact=1,i;
	printf("ENTER n VALUE: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  fact=fact*i;
	  printf("%d,",fact);
	}
}
