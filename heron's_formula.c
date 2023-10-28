#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,Area,Rt;
    printf("Enter first side : ");
    scanf("%f",&a);
    printf("Enter second side : ");
    scanf("%f",&b);
    printf("Enter third side : ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    Rt=s*(s-a)*(s-b)*(s-c);
    Area=sqrt(Rt);
    printf("The area of the triangle is %f",Area);
    return 0;
}