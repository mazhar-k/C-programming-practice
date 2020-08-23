#include <stdio.h>
#include <stdlib.h>
int cal_power(int b,int p);
int main()
{
    int base,power,result;
    printf("Enter a base: ");
    scanf("%d",&base);
    printf("Enter power: ");
    scanf("%d",&power);
    result=cal_power(base,power);
    printf("%d^%d = %d",base,power,result);
    return 0;
}

int cal_power(int b,int p){
    if(p==1){
        return b;
    }
    else{
    return b*cal_power(b,p-1);
    }
}
