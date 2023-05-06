#include<stdio.h>
int main()
{
	int n,r1,r2;
	printf("ENTER n VALUE: ");
	scanf("%d",&n);
    while(n!=0)
    {
      r1=n%10;
      r2=r2*10+r1;
      n=n/10;
	}
    printf("REVERSED NUMBER= %d",r2);
}
