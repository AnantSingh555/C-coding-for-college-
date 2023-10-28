#include<stdio.h>
int main()
{
    int a=5,b=9;
    printf("Before swapping :\n");
    printf("The value of a is %d \n",a);
    printf("The value of b is %d \n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping :\n");
    printf("The value of a is %d \n",a);
    printf("The value of b is %d \n",b);
    return 0;
}