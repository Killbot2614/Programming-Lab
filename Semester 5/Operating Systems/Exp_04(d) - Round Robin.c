/*
Aim
To write a C program to implement round robin scheduling algorithm

Algorithm
1.Start
2.The queue structure in ready queue is of first in first out type
3.A fixed time is allotted to every process that arrives in the queue. This fixed time is known as time quantum
4.The process is then stopped and is sent back to the end of the queue
5.The scheduler selects another process from the ready queue and dispatches it to the processor for its execution. It is executed until time quantum does not exceed
6.The same steps are repeated until all the processes are finished
7.Stop
*/

#include<stdio.h>
int main()
{
  int count,j,n,time,remain,flag=0,tq;
  int wt=0,tat=0,at[10],bt[10],rt[10];
  printf("Enter Total Process: ");
  scanf("%d",&n);
  remain=n;
  for(count=0;count<n;count++)
  {
    printf("Enter Arrival Time and Burst Time for Process %d: ",count+1);
    scanf("%d",&at[count]);
    scanf("%d",&bt[count]);
    rt[count]=bt[count];
  }
  printf("Enter Time Quantum: ");
  scanf("%d",&tq);
  printf("\n\nProcess\t Turnaround Time Waiting Time\n\n");
  for(time=0,count=0;remain!=0;)
  {
    if(rt[count]<=tq && rt[count]>0)
    {
      time+=rt[count];
      rt[count]=0;
      flag=1;
    }
    else if(rt[count]>0)
    {
      rt[count]-=tq;
      time+=tq;
    }
    if(rt[count]==0 && flag==1)
    {
      remain--;
      printf("P[%d]\t \t%d\t \t%d\n",count+1,time-at[count],time-at[count]-bt[count]);
      wt+=time-at[count]-bt[count];
      tat+=time-at[count];
      flag=0;
    }
    if(count==n-1)
      count=0;
    else if(at[count+1]<=time)
      count++;
    else
      count=0;
  }
  printf("\nAverage Waiting Time = %fms\n",wt*1.0/n);
  printf("Average Turnaround Time = %fms",tat*1.0/n);
  return 0;
}

/*
Output
Enter Total Process: 4
Enter Arrival Time and Burst Time for Process 1: 0
9
Enter Arrival Time and Burst Time for Process 2: 1
5
Enter Arrival Time and Burst Time for Process 3: 2
3
Enter Arrival Time and Burst Time for Process 4: 3
4
Enter Time Quantum: 5


Process	 Turnaround Time Waiting Time

P[2]	 	9	 	4
P[3]	 	11	 	8
P[4]	 	14	 	10
P[1]	 	21	 	12

Average Waiting Time = 8.500000ms
Average Turnaround Time = 13.750000ms
*/