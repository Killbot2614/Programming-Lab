/*
Aim
To write a program to implement producer consumer problem using semaphore

Algorithm
Step 1: Start.
Step 2: Let n be the size of the buffer.
Step 3: check if there are any producer.
Step 4: if yes check whether the buffer is full.
Step 5: If no the producer item is stored in the buffer.
Step 6: If the buffer is full the producer has to wait.
Step 7: Check there is any consumer. If yes check whether the buffer is empty
Step 8: If no the consumer consumes them from the buffer.
Step 9: If the buffer is empty, the consumer has to wait.
Step 10: Repeat checking for the producer and consumer till required.
Step 11: Terminate the process.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int mutex=1,full=0,empty=3,x=0;

int main() {
	int n;
	void producer();
	void consumer();
	int wait(int);
	int signal(int);
	printf("\n 1.producer \n 2.consumer \n 3.exit");
	while(1) {
		printf("\n enter your choice:");
		scanf("%d",&n);
		switch(n) {
			case 1:
			if((mutex==1)&&(empty!=0))
			producer();
			else
			printf("buffer is full");
			break;
			case 2:
			if((mutex==1)&&(full!=0))
			consumer();
			else
			printf("buffer is empty");
			break;
			case 3:
			exit(0);
			break;
		}
	}
}
int wait(int s) {
	return(--s);
}

int signal(int s) {
	return(++s);
}
void producer() {
	mutex=wait(mutex);
	full=signal(full);
	empty=wait(empty);
	x++;
	printf("\n producer produces the item %d",x);
	mutex=signal(mutex);
}
void consumer() {
	mutex=wait(mutex);
	full=wait(full);
	empty=signal(empty);
	printf("\n consumer consumes item %d",x);
	x--;
	mutex=signal(mutex);
}


/*
Output
1.producer
2.consumer 
3.exit
enter your choice:1

producer produces the item 1
enter your choice:1

producer produces the item 2
enter your choice:1

producer produces the item 3
enter your choice:1
buffer is full
enter your choice:2

consumer consumes item 3
enter your choice:2

consumer consumes item 2
enter your choice:2

consumer consumes item 1
enter your choice:2
buffer is empty
enter your choice:3
*/