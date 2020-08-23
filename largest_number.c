#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[4],largest;
    printf("Enter 4 numbers:\n");
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=0;i<4;i++){
        if (a[i+1]>largest){
            largest=a[i+1];
        }
    }
    printf("Largest of the 4 numbers is %d",largest);
    return 0;
}
