#include<stdio.h>
#include<string.h>
    union abc{
    int a;
    int b;
    }var;
int main()
{
var.a =66;
printf("%d \n",var.a);
printf("%d",var.b);
}


