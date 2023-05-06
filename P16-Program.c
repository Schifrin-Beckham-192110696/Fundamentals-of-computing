#include<stdio.h>
int main()
{
	int n,sum=0,i;
	float avg;
	printf("ENTER n VALUE: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
    avg=sum/n;
	printf("Sum=%d  ",sum);
    printf("Average=%f",avg);
}
