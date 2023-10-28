#include<stdio.h>
#include<math.h>
int main()
{
    int n, org_num, rem, result=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int dig=log10(n)+1;
    org_num=n;
    while(org_num != 0)
    {
        rem=org_num%10;
        result+=pow(rem, dig);
        org_num/=10;
    }
    if (result==n)
    {
        printf("The entered number is an armstrong number !!");
    }
    else
    {
        printf("The entered number is not an armstrong number !!");
    }
    return 0;
}
// #include <stdio.h>

// int main()
// {
//     // printf("Hello World");
//     int n=4;
//     printf("%d %d %d",n++,++n,n);
//     return 0;
// }