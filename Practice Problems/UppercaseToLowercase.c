#include<stdio.h>
int main()
{
    int length;
    printf("enter the length of string: ");
    scanf("%d", &length);
    char str[length + 1];
    for(int i = 0; i < length; i++)
    {
        scanf("%c", &str[i]);
    }
    str[length] = '\0';
    printf("entered string is: %s\n", str);
    for(int i = 0; i < length; i++)
    {
        str[i] = str[i] + 32;
    }
    printf("after converting to lower case string is: %s", str);
    return 0;
}