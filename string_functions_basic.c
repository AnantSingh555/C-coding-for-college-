#include <stdio.h>
#include<string.h>
int main()
{
    char str1[]="Hello";
    char str2[]=" Anant";
    printf("%ld\n", strlen(str1));
    printf("%ld\n", strlen(str2));
    char str3[30];
    strcpy(str3, str1);
    printf("%s\n",str3);
    strcat(str1, str2);
    printf("%s\n", str1);
    printf("%d\n", strcmp(str1, str2));
    // strlwr(str1);
    printf("%s\n", strlwr(str1));
    // strupr(str2);
    printf("%s", strupr(str2));
    return 0;
}