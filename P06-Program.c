#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("ENTER n VALUE: ");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2)
	{
		sum=sum+i;
	}
    printf("Sum=%d",sum);
}
