#include<stdio.h>
int main(){
    int a=1,fact=1;
    int b;
    printf("Enter the number to find factorial :");
    scanf("%d",&b);
    while (a<=b)
    {
        fact*=a;
        a++;
    }
    printf("The factorial of %d is %d",b,fact);
    return 0;
}