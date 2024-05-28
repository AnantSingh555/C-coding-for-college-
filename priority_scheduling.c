#include <stdio.h>
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main{

    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    int burst[n], priority[n], index[n];
    for(int i=0; i<n; i++){
        printf("Enter the burst time and priority :");
        scanf("%d %d", &burst[i], &priority[i]);
        index[i]=i+1;
    }

    for(int i=0; i<n; i++){
        int temp=priority[i], m=i;
        for(int j=i; j<n; j++){
            if(priority[j]>temp){
                temp=priority[j];
                m=j;
            }
        }
        swap(&priority[i], &priority[m]);
        swap(&burst[i], &burst[m]);
        swap(&index[i], &index[m]);
    }

    int t=0;
    printf("Order of process execution is : ");
    for(int i=0; i<n; i++){
        printf("P%d is executed from %d to %d", index[i], t, t+burst[i]);
        t+=burst[i];
    }

    printf("Process id \t Burst Time \t Wait Time \n");
    int wait_time=0;
    int total_wait_time=0;
    for(int i=0; i<n; i++){
        printf("P%d \t\t %d \t\t %d \n", index[i], burst[i], wait_time);
        total_wait_time+=wait_time;
        wait_time+=burst[i];
    }

    float average_wait_time= (float) total_wait_time/n;
    printf("Average waiting time is %f \n", average_wait_time);

    int total_turn_around=0;
    for(int i=0; i<n; i++){
        total_turn_around+=burst[i];
    }
    
    float average_turn_around= (float) total_turn_around/n;
    printf("Average turn around time is %f ", average_turn_around);

    return 0;
    
    
}