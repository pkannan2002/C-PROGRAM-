#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int size;
        scanf("%d",&size);
        int arr[size];
        for(int i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
        int temp=0;
        int h=0;
        int result;
        for(int j=0;j<size;j++)
        {
            for(int k=i+1;k<size;k++)
            {
                if (arr[i]>=arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(int j=0;j<=size;j++)
        {
            if(arr[j]<0)
            {
                continue;
            }
            else if(arr[j]>=0)
            {
                if(arr[j]==h)
                {
                    h++;
                }
                else
                {
                   result=h;
                }
            }
        }
        printf("%d",result);
    }
}
