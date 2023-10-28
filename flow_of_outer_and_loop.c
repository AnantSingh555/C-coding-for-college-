#include<stdio.h>
int main(){
    int i,j;
    for (i=1; i<=3; i++){
        printf("In Outer Loop:i=%d\n",i);
        for (j=1; j<=4; j++){
            printf("Inner loop i=%d, j=%d\n",i,j);
        }
    }
    return 0;
}