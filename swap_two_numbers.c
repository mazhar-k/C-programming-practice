#include <stdio.h>
#include <string.h>
void swap(int *num1,int *num2);
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);
    printf("Numbers before swapping: \n");
    printf("n1 = %d n2 = %d\n",n1,n2);
    swap(&n1,&n2);
    printf("Numbers after swapping: \n");
    printf("n1 = %d n2 = %d",n1,n2);
    return 0;
}

void swap(int *num1,int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}
