#include<stdio.h>
#include<string.h>
int main()
{
    char ar[30],ch[30];
    int l,j=0;
    printf("enter the string");
    gets(ar);
    l=strlen(ar);
    for(int i=l-1;i>=0;i--)
    {
        ch[j]=ar[i];
        j++;
    }
    printf("string after reversing ");
    puts(ch);
    return 0;
}