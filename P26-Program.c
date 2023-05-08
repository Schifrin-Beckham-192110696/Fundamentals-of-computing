#include <stdio.h>
int main() {
    int n,max,num;
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    printf("Enter the first integer: ");
    scanf("%d",&max);
    for (int i=1;i<n;i++) {
        printf("Enter the next integer: ");
        scanf("%d",&num);
        if (num>max) {
            max=num;
        }
    }
    printf("The largest integer is %d", max);
}
