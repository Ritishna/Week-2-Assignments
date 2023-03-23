#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,alphabets=0,digits=0,special character=0;
    printf("Enter the string:");
    gets(s)
    for (i=0; s[i]; i++)
    {
        if ((s[i]>=65 && s[i<=90]), (s[i]>=97 && s[i]<=122))
        alphabet++;
        else if (s[i]>=48 && s[i]<=57)
        digits++;
        else
        special characters++;
    }
    printf("alphabets=%d\n", alphabets);
    printf("digits=%d\n", digits);
    printf("special characters=%d\n", special characters);
    return 0;
}