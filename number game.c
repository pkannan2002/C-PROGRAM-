#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>0)
    {
    int squ=num*num;
    if(squ%10==num)
    {
        printf("it is a correct number");
    }
    else
    {
        printf("it is not a correct number");
    }
    }
    else
    {
        printf("it is not a correct number");
    }

}


