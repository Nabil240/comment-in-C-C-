#include<stdio.h>
#include<string.h>
void main()
{
    char com[50];
    int len;
    printf("Enter a Comment: ");
    gets(com);
    len=strlen(com);
    if (com[0]=='/'&&com[1]=='/')
        printf("It is a Comment.\n");
    else if (com[0]=='/'&&com[1]=='*'||com[len-1]=='/'&&com[len-2]=='*')
        printf("It is a Comment.\n");
    else
        printf("It is not a Comment.\n");
    printf("Total number of word: %d",len);
}