#include <stdio.h>
#include <string.h>
int cal_power(int b,int p);
int main()
{
    int i,n;
    printf("Enter number of elements in 2 arrays: ");
    scanf("%d",&n);
    int a[n],b[n],sum[n];
    printf("Enter elemets of Array 1: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter elemets of Array 2: ");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        sum[i]=a[i]+b[i];
    }
    printf("Resultant array with sum is: ");
    for(i=0;i<n;i++){
        printf("%d ",sum[i]);
    }
    return 0;
}
