#include<stdio.h>
int main(){
    int a=3,b=4,temp;
    printf("Before swapping :\n");
    printf("The value of a is %d \n",a);
    printf("The value of b is %d \n",b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping :\n");
    printf("The value of a is %d \n",a);
    printf("The value of b is %d \n",b);
    return 0;
}