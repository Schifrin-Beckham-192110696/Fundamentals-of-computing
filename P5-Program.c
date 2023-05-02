#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("ENTER n VALUE: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
    printf("Sum=%d",sum);
}
