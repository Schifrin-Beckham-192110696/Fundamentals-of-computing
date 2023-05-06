#include<stdio.h>
int main()
{
	int n,d1,s=0;
	printf("ENTER n VALUE: ");
	scanf("%d",&n);
    while(n!=0)
    {
      d1=n%10;
      s=s+d1;
      n=n/10;
	}
	printf("Sum=%d",s);
}
