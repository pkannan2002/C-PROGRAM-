#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
            {
                printf("%d ",(j-i)+1);
            }
            else
            {
                printf("%d ",(i-j)+1);
            }
        }
        printf("\n");
    }
}
