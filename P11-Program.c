#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,i;
	printf("ENTER n VALUE: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(i,i);
	}
    printf("Sum=%d",sum);
}
