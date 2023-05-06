#include<stdio.h>
int main()
{
	int n,d1;
	printf("ENTER n VALUE: ");
	scanf("%d",&n);
    while(n!=0)
    {
      d1=n%10;
      printf("%d\n",d1);
      n=n/10;
	}
}
