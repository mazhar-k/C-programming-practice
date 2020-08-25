#include <stdio.h>

int main()
{
    int n,amt,bal=0;
    do{
        printf("Please select an option: Deposit (1), Withdraw (2), Check balance (3), Exit (0) : ");
        scanf("%d",&n);
        switch(n){
            case 1:
            printf("Enter amount to deposit: ");
            scanf("%d",&amt);
            bal+=amt;
            printf("Amount deposited.\n");
            break;
            
            case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d",&amt);
            bal-=amt;
            printf("Amount withdrawn.\n");
            break;
            
            case 3:
            printf("Your account balance is Rs. %d\n",bal);
            break;
        }
    }while(n!=0);
    printf("\nThank you for using our service");
    return 0;
}
