/*
Aim
To write a program to implement Bankers Algorithm

Algorithm
1.Start
2.Safety algorithm used to check whether or not a system is in a safe state or follows the safe sequence in a banker's algorithm
3.There are two vectors Work and Finish of length m and n in a safety algorithm:
Initialize: Work = Available
Finish[i] = false; for I = 0, 1, 2, 3, 4… n - 1.
4.Check the availability status for each type of resources [i], such as:
Need[i] <= Work
Finish[i] == false
If the i does not exist, go to step 6
5.Work = Work +Allocation(i) // to get new resource allocation
Finish[i] = true
Go to step 4 to check the status of resource availability for the next process.
6.If Finish[i] == true; it means that the system is safe for all processes.
*/

#include <stdio.h>
#include <conio.h>

int main() {
	int Max[10][10], need[10][10], alloc[10][10], avail[10], completed[10], safeSequence[10];
	int p, r, i, j, process, count;
	count = 0;
	printf("Enter the no of processes : ");
	scanf("%d", &p);
	for(i = 0; i< p; i++)
		completed[i] = 0;
	printf("\n\nEnter the no of resources : ");
	scanf("%d", &r);
	printf("\n\nEnter the Max Matrix for each process : ");
	for(i = 0; i < p; i++) {
		printf("\nFor process %d : ", i + 1);
			for(j = 0; j < r; j++)
				scanf("%d", &Max[i][j]);
	}

	printf("\n\nEnter the allocation for each process : ");
	for(i = 0; i < p; i++) {
		printf("\nFor process %d : ",i + 1);
			for(j = 0; j < r; j++)
				scanf("%d", &alloc[i][j]);	
	}
	printf("\n\nEnter the Available Resources : ");
	for(i = 0; i < r; i++)
		scanf("%d", &avail[i]);	

	for(i = 0; i < p; i++)
		for(j = 0; j < r; j++)
			need[i][j] = Max[i][j] - alloc[i][j];
	do {
		printf("\n Max matrix:\tAllocation matrix:\n");
		for(i = 0; i < p; i++) {
			for( j = 0; j < r; j++)
				printf("%d  ", Max[i][j]);
			printf("\t\t");
			for( j = 0; j < r; j++)
				printf("%d  ", alloc[i][j]);
			printf("\n");
	}
	process = -1;
	for(i = 0; i < p; i++) {
		if(completed[i] == 0) {
			process = i ;
			for(j = 0; j < r; j++) {
				if(avail[j] < need[i][j]) {
					process = -1;
					break;
				}
			}
		}
		if(process != -1)
			break;
	}
	if(process != -1) {
		printf("\nProcess %d runs to completion!", process + 1);
		safeSequence[count] = process + 1;
		count++;
		for(j = 0; j < r; j++) {
			avail[j] += alloc[process][j];
			alloc[process][j] = 0;
			Max[process][j] = 0;
			completed[process] = 1;
		}
	}
	} while(count != p && process != -1);
	if(count == p) {
		printf("\nThe system is in a safe state!!\n");
		printf("Safe Sequence : < ");
		for( i = 0; i < p; i++)
			printf("%d  ", safeSequence[i]);
		printf(">\n");
	} else
		printf("\nThe system is in an unsafe state!!");
	getch();
}


/*
Output
Enter the no of processes : 2
Enter the no of resources : 2
Enter the Max Matrix for each process : 
For process 1 : 3
7
For process 2 : 8
6
Enter the allocation for each process : 
For process 1 : 4
6
For process 2 : 5
8
Enter the Available Resources : 10
6
 Max matrix:	Allocation matrix:
3  7  		4  6  
8  6  		5  8  
Process 1 runs to completion!
 Max matrix:	Allocation matrix:
0  0  		0  0  
8  6  		5  8  
Process 2 runs to completion!
The system is in a safe state!!
Safe Sequence : < 1  2  >
*/