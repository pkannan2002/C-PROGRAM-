#include<stdio.h>
int main()
{
    printf("enters the number of rows");
    int row;
    int alpha=64;
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
                printf("%c",alpha+k);
        }
        printf("\n");
    }
    for(int i=row-1;i>0;i--)
    {
        for(int j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
                printf("%c",alpha+k);
        }
        printf("\n");
    }

}
