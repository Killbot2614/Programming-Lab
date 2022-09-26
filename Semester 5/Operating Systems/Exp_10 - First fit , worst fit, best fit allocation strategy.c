/*
Aim
To implement first fit, best fit, worst fit and to make comparative study

Algorithm
Step 1: Start the program.
Step 2: Get the number of memory partition and their sizes.
Step 3: Get the number of processes and values of block size for each process.
Step 4: In first fit algorithm, the pointer keeps track of all the free blocks in the memory and accepts the request of allocating a memory
Step 5: The best fit deals with allocating the smallest free partition which meets the requirement of the requesting process.
Step 6: Worst Fit allocates a process to the partition which is largest sufficient among the freely available partitions available in the main memory
Step 7: Analyses all the three memory management techniques and display the best algorithm which utilizes the memory resources effectively and efficiently.
Step 8: Stop the program
*/

#include<stdio.h>
#include<conio.h>
int main() {
	int p[20],f[20],min,minindex,n,i,j,c,f1[20],f2[20],f3[20],k=0,h=0,flag,t=0,n1;
	printf("Enter the number of memory partitions:\n");
	scanf("%d",&n);
	printf("Enter the number of process: ");
	scanf("%d",&n1);
	for(i=0;i<n;i++) {
		printf("\nEnter the memory partition size %d: ",i+1);
		scanf("%d",&f[i]);
		f2[i]=f[i];
		f3[i]=f[i];
	}
	for(i=0;i<n;i++) {
		printf("\nEnter the page size %d: ",i+1);
		scanf("%d",&p[i]);
	}
	do {
		printf("\n1.First fit\n");
		printf("\n2.Best fit\n");
		printf("\n3.Worst fit\n");
		printf("\nEnter your choice:\n");
		scanf("%d",&c);
	switch(c) {
		case 1:
		for(i=0;i<n1;i++) {
			for(j=0;j<n;j++) {
				f1[i]=0;
				if(p[i]<=f[j]) {
					f1[i]=f[j];
					f[j]=0;
				break;
				}
			}
		}
	    break;
		case 2:
		for(i=0;i<n1;i++) {
			min=9999;
			minindex=-1;
			for(j=0;j<n;j++) {
				if(p[i]<=f2[j] && f2[j]!=0 && min>f2[j]) {
					min=f2[j];
					minindex=j;
				}
			}
			f1[i]=f[minindex];
			f2[minindex]=0;
		}
		break;
		case 3:
		for(i=0;i<n1;i++) {
			f1[i]=0;
			for(j=0;j<n;j++) {
				if(p[i]<f3[j]) {
					k++;
					if(k==1)
						f1[i]=f3[j];
					if(f1[i]<=f3[j]) {
						flag=1;
						f1[i]=f3[j];
						h=j;
					}
				}
			}
			k=0;
			if(flag==1)
				f3[h]=0;
		}
	    break;
		default:
		printf("\nInvalid choice");
	}
	printf("\n----------\n");
	printf("\n|Page |Frame |Free \n");
	printf("\n----------\n");
	t=0;
	for(i=0;i<n1;i++) {
		h=f1[i]-p[i];
		if(h<0)
			h=0;
		printf("\n%d\t\t%d\t\t%d",p[i],f1[i],h);
		t=t+h;
	}
	printf("\n----------\n");
	printf("\nTotal free space in memory: %d",t);
	}
	while(c<4);
}

/*
Output
Enter the number of memory partitions:
3
Enter the number of process: 2
Enter the memory partition size 1: 242
Enter the memory partition size 2: 200
Enter the memory partition size 3: 350
Enter the page size 1: 100
Enter the page size 2: 300
Enter the page size 3: 150
1.First fit
2.Best fit
3.Worst fit
Enter your choice:
1
----------
|Page |Frame |Free 
----------
100		242		142
300		350		50
----------
Total free space in memory: 192
1.First fit
2.Best fit
3.Worst fit
Enter your choice:
2
----------
|Page |Frame |Free 
----------
100		200		100
300		0		0
----------
Total free space in memory: 100
1.First fit
2.Best fit
3.Worst fit
Enter your choice:
3
----------
|Page |Frame |Free 
----------
100		350		250
300		0		0
----------
Total free space in memory: 250
1.First fit
2.Best fit
3.Worst fit
Enter your choice:
4
Invalid choice
----------
|Page |Frame |Free 
----------
100		350		250
300		0		0
----------
Total free space in memory: 250
*/
