#include<stdio.h>
int main(){
    int a=0,b=1,c,t;
    printf("Enter the number of fibonnaci terms to show :");
    scanf("%d",&t);
    c=a+b;
    printf("%d %d ",a,b);
    for(int i=3;i<=t;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    
    return 0;
}