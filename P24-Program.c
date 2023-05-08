#include <stdio.h>
int main() {
    int a,b,c,temp;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);
    temp=a;
    a=b;
    b=c;
    c=temp;
    printf("After swapping:\n");
    printf("a=%d",a);
    printf("b=%d",b);
    printf("c=%d",c);
}
