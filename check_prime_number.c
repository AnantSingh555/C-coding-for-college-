#include<stdio.h>
int main(){
    int i,n,chk=0;
    printf("Enter a number :");
    scanf("%d", &n);
    if ((n==1)||(n==0)) //1 and 0 are not considered prime number 
    {
        chk=1;
    }
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            chk=1;
            break;
        }
    }
    if(chk==0)
    {
        printf("The entered number is a prime number !!");
    }
    else
    {
        printf("The entered number is not a prime number !!");
    }
    return 0;
}