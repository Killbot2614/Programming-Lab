/*
Aim
To implement the memory management policy-paging

Algorithm
Step 1: Start
Step 2: Read all the necessary input from the keyboard.
Step 3: Pages - Logical memory is broken into fixed - sized blocks.
Step 4: Frames – Physical memory is broken into fixed – sized blocks.
Step 5: Calculate the physical address using the following
Physical address = ( Frame number * Frame size ) + offset
Step 6: Display the physical address.
Step 7: Stop the process.
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main() {
    int size,m,n,pgno,pagetable[3]={5,6,7},i,j,frameno;
    double m1;
    int ra=0,ofs;
	printf("Enter process size (max 12KB): ");
	scanf("%d",&size);
	m1=size/4;
	n=ceil(m1);
	printf("Total no. of pages: %d",n);
	printf("\nEnter relative address (in hex): \n");
	scanf("%d",&ra);
	pgno=ra/1000;
	ofs=ra%1000;
	printf("page no=%d\n",pgno);
	printf("page table");
	for(i=0;i<n;i++)
		printf("\n %d [%d]",i,pagetable[i]);
	frameno=pagetable[pgno];
	printf("\nEquivalent physical address : %d%d",frameno,ofs);
	getch();
}

/*
Output
Enter process size (max 12KB): 12
Total no. of pages: 3
Enter relative address (in hex): 
2643
page no=2
page table
 0 [5]
 1 [6]
 2 [7]
Equivalent physical address : 7643
*/