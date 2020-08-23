#include <stdio.h>
#include <string.h>
struct complex{
    int real;
    int imag;
};
int main()
{
    struct complex num1,num2,sum;
    printf("Real part of 1st number: ");
    scanf("%d",&num1.real);
    printf("Imaginary part of 1st number: ");
    scanf("%d",&num1.imag);
    printf("Real part of 2nd number: ");
    scanf("%d",&num2.real);
    printf("Imaginary part of 2nd number: ");
    scanf("%d",&num2.imag);
    sum.real=num1.real + num2.real;
    sum.imag=num1.imag + num2.imag;
    printf("The sum of %d + %di and %d + %di is %d + %di",num1.real,num1.imag,num2.real,num2.imag,sum.real,sum.imag);
    return 0;
}
