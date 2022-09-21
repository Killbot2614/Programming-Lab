/*
Aim
To write a C program to implement process scheduling mechanism FCFS

Algorithm
1.Start
2.Accept the no. of processes in the ready queue
3.For each process, assign the process ID and accept the CPU burst time
4.Set waiting time of first process as '0' and its burst time as turn around time
5.For each process in the ready queue, calculate:
(a) Waiting Time for process(n) = WT of process(n-1) + BT of process(n-1)
(b) Turn around time for process(n) = WT of process(n) + BT of process(n)
6.Calculate:
(a) Average waiting time = Total waiting time / No. of processes
(b) Average turn around time = Total turnaround time / No. of processes
7.Stop
*/

#include<stdio.h>
int main()
{
    int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
    printf("Enter number of processes(max. 20): ");
    scanf("%d",&n);
 
    printf("\nEnter Process Burst Time\n");
    for(i=0;i<n;i++) {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
    }
 
    wt[0]=0;
    
    for(i=1;i<n;i++) {
        wt[i]=0;
        for(j=0;j<i;j++) wt[i]+=bt[j];
    }
 
    printf("\nProcess\t\tBurst Time\tTurnaround Time\tWaiting Time");
 
    for(i=0;i<n;i++) {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],tat[i],wt[i]);
    }
 
    avwt/=i;
    avtat/=i;
    printf("\n\nAverage Waiting Time: %dms",avwt);
    printf("\nAverage Turnaround Time: %dms",avtat);
 
    return 0;
}

/*
Output
Enter number of processes(max. 20): 5

Enter Process Burst Time
P[1]:1
P[2]:2
P[3]:3
P[4]:4
P[5]:5

Process		Burst Time	Turnaround Time	Waiting Time
P[1]		1		1		0
P[2]		2		3		1
P[3]		3		6		3
P[4]		4		10		6
P[5]		5		15		10

Average Waiting Time: 4ms
Average Turnaround Time: 7ms
*/