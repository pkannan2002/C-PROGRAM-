#include<stdio.h>
#include<string.h>
int main()
{
    char str[101],str1[101];
    scanf_s("%[^\n]s",str,101);
    strrev(str);
    if(str[0]>97)
    {
        str[0]-=32;
    }
    printf("%s",str);
}
