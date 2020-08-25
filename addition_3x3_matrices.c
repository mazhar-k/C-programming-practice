#include <stdio.h>

void accept(int arr[3][3]);
void sum(int arr1[3][3],int arr2[3][3]);
int main()
{
    int a[3][3],b[3][3];
    printf("Enter elements of 1st array: ");
    accept(a);
    printf("Enter elements of 2nd array: ");
    accept(b);
    sum(a,b);
    return 0;
}

void accept(int arr[3][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
}

void sum(int arr1[3][3],int arr2[3][3]){
    int i,j,sum[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Sum of both matrices:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}
