#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int result=1;
    while(num!=0)
    {
        result*=num%10;
        num/=10;
    }
    printf("%d",result);

}
