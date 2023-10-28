#include<stdio.h>
int main(){
    int a,x,b,n;
    float y;
    printf("Enter value of a,x,b and n: ");
    scanf("%d%d%d%d",&a,&x,&b,&n);
    switch (n)
    {
    case 1:
        y=a*x%b;
        printf("The value of y is %f",y);
        break;
    case 2:
        y=a*x*2+b*2;
        printf("The value of y is %f",y);
        break;
    case 3:
        y=a-b*x;
        printf("The value of y is %f",y);
        break;
    case 4:
        y=a+x/b;
        printf("The value of y is %f",y);
        break;
    
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}