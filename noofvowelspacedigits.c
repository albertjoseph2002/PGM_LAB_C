#include<stdio.h>
#include<string.h>
int main()
{
    char ch[40];
    int vowel=0,spc=0,other=0,i=0;
    printf("enter the string ");
    gets(ch);
    int l=strlen(ch);
    while(ch[i]!='\0')
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
        {
            vowel++;

        }
        else if (ch[i]==' ')
        {
            spc++;
        }
        else if((ch[i]>'a' && ch[i]<'z') || (ch[i]>'A' && ch[i]<'Z'))
        {
            other++;
        }
        i++;
        
    }
    printf("number of vowels is%d \n number of spaces is %d \n number of other is %d",vowel,spc,other);
    return 0;

}