#include<stdio.h>
int main()
{
	int n,sum=0,i,s=1;
	printf("ENTER n VALUE: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=s*i;
		s=-s;
	}
    printf("Sum=%d",sum);
}
