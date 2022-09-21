/*
Aim
To write a C program to implement priority scheduling algorithm

Algorithm
1.Start
2.Accept the no. of processes in the ready queue
3.For each process, assign the process ID and accept the CPU burst time
4.Sort the ready queue according to the shortest BT by sorting from lowest to highest BT
5.Set the WT of the first process as '0' and its BT as its TAT
6.For each process in the ready queue, calculate:
(a) Waiting Time for process(n) = WT of process(n-1) + BT of process(n-1)
(b) Turn around time for process(n) = WT of process(n) + BT of process(n)
7.Calculate:
(a) Average waiting time = Total waiting time / No. of processes
(b) Average turn around time = Total turnaround time / No. of processes
8.Stop
*/

#include<stdio.h>
 
int main()
{
    int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,total=0,pos,temp,avg_wt,avg_tat;
    printf("Enter Total Number of Process:");
    scanf("%d",&n);
 
    printf("\nEnter Burst Time and Priority\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("Burst Time:");
        scanf("%d",&bt[i]);
        printf("Priority:");
        scanf("%d",&pr[i]);
        p[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
 
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
 
        total+=wt[i];
    }
 
    avg_wt=total/n;
    total=0;
 
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        total+=tat[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
 
    avg_tat=total/n;
    printf("\n\nAverage Waiting Time=%d",avg_wt);
    printf("\nAverage Turnaround Time=%d\n",avg_tat);
 
return 0;
}


/*
Output
Enter Total Number of Process:4

Enter Burst Time and Priority

P[1]
Burst Time:1
Priority:1

P[2]
Burst Time:5
Priority:2

P[3]
Burst Time:4
Priority:3

P[4]
Burst Time:3
Priority:2

Process	    Burst Time    	Waiting Time	Turnaround Time
P[1]		  1		    0			1
P[2]		  5		    1			6
P[4]		  3		    6			9
P[3]		  4		    9			13

Average Waiting Time=4
Average Turnaround Time=7
*/