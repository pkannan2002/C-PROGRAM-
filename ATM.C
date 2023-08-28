#include<stdio.h>
int call(int action);
int main()
{
    printf("enter the choose of action \n");
    printf("1.deposit\n");
    printf("2.Withdraw\n");
    printf("3.bank balance \n");

    int action;
    scanf("%d",&action);
    call(action);
}
int call(int action)
{
    int balance = 10000;
    char des = 'y';
    while (des == 'y')
    {
        switch (action)
        {
        case 1:
            printf("enter the amount to be deposited \n");
            int amount;
            scanf("%d", &amount);
            balance += amount;
            printf("your amount %d has been deposited \n", amount);
            printf("your account balance is %d \n", balance);
            break;
        case 2:
            printf("enter the amount to be withdrawed ");
            int withdraw;
            scanf("%d", &withdraw);
            balance -= withdraw;
            printf("your amount %d has been withdraw ", withdraw);
            printf("your account balance is %d ", balance);
            break;
        case 3:
            printf("your account balance is %d", balance);
            break;
        }
        printf("do you want to do any other operations \n yes or no \n");
        scanf(" %c", &des);
        if (des == 'y')
        {
            printf("enter the choose of action \n");
            printf("1.deposit\n");
            printf("2.Withdraw\n");
            printf("3.bank balance \n");
            scanf("%d", &action);
        }
        else
        {
            des=false;
        }
    }
    return 0;
}

