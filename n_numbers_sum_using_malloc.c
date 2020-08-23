#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,*ptr,sum=0;
    printf("Enter total numbers to be added: ");
    scanf("%d",&n);
    ptr=(int*) malloc(n * sizeof(int));
    printf("Enter numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("Sum = %d",sum);
    return 0;
}
