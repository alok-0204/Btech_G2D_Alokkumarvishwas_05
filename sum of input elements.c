#include <stdio.h>

int main() {
    int n,i,sum=0;
     printf("enter the number of elements=");
    scanf("%d",&n);
    float arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    printf("sum=%d",sum);
    return 0;
}