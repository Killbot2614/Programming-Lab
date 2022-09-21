/*
Aim
To write a C program to implement process scheduling mechanism SJF

Algorithm
1.Start
2.Accept the no. of processes in the ready queue
3.For each process, assign the process ID and accept the CPU burst time
4.Sort the ready queue according to the shortest BT by sorting from lowest to highest BT
5.Set the WT of the first process as '0' and its TAT as its BT
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
    int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
    float avgwt,avgtat;
    printf("Enter number of process: ");
    scanf("%d",&n);
 
    printf("\nEnter Burst Time:\n");
    for(i=0;i<n;i++) {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;
    }
    
    for(i=0;i<n;i++) {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
 
    wt[0]=0;
    
    for(i=1;i<n;i++) {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
        total+=wt[i];
    }
 
    avgwt=(float)total/n;
    total=0;
 
    printf("\nProcess\t\tBurst Time\tTurnaround Time\tWaiting Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        total+=tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",p[i],bt[i],tat[i],wt[i]);
    }
 
    avgtat=(float)total/n;
    printf("\n\nAverage Waiting Time= %fms",avgwt);
    printf("\nAverage Turnaround Time= %fms\n",avgtat);
}


/*
Output
Enter number of process: 5

Enter Burst Time:
P[1]:1
P[2]:5
P[3]:7
P[4]:2
P[5]:8

Process		Burst Time	Turnaround Time	Waiting Time
P[1]		1		1		0
P[4]		2		3		1
P[2]		5		8		3
P[3]		7		15		8
P[5]		8		23		15

Average Waiting Time= 5.400000ms
Average Turnaround Time= 10.000000ms
*/