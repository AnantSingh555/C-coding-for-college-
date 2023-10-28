#include<stdio.h>
#include<math.h>
int main(){
    int N;
    // int N2,N3;
    //output comes wrong for numbers entered like 5 or multiples of 5 when N2 and N3 are float, but when N2 and N3 are declared as float in place of int then the output is coming correct !!
    float N2,N3;
    printf("Enter the number \n");
    scanf("%d",&N);
    N2=pow(N,2);
    N3=pow(N,3);
    printf("N^2 is %f\n",N2);
    printf("N^3 is %f",N3);
    return 0;
}