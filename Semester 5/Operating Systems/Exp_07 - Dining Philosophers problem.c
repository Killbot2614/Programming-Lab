/*
Aim
To write a program to solve the Dining Philosophers problem

Algorithm
1.Start
2.Initialize the state array S as 0, Si =0 if the philosopher i is thinking or 1 if hungry.
3.Associate two functions getfork(i) and putfork(i) for each philosopher i.
4.For each philosopher I call getfork(i) , test(i) and putfork(i) if i is 0
5.Stop
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define LEFT (i+4)%5
#define RIGHT (i+1)%5
#define THINKING 0
#define HUNGRY 1
#define EATING 2
int state[5];
void put_forks(int);
void test(int);
void take_forks(int);
void philosopher(int i) {
	if(state[i]==0) {
		take_forks(i);
		if(state[i]==EATING)
			printf("\nEating in progress..");
		put_forks(i);
	}
}

void take_forks(int i) {
	state[i]=HUNGRY;
	test(i);
}

void put_forks(int i) {
	state[i]=THINKING;
	printf("\nphilosopher %d has completed its work",i);
	test(LEFT);
	test(RIGHT);
}

void test(int i) {
	if(state[i]==HUNGRY && state[LEFT]!=EATING && state[RIGHT]!=EATING) {
		printf("\nphilosopher %d can eat",i);
		state[i]=EATING;
	}
}

void main() {
	int i;
	for(i=1;i<=5;i++)
		state[i]=0;
	for(i=1;i<=5;i++) {
		printf("\n\nthe philosopher %d falls hungry\n",i);
		philosopher(i);
		getch();
	}
}

/*
Output
the philosopher 1 falls hungry

philosopher 1 can eat
Eating in progress..
philosopher 1 has completed its work

the philosopher 2 falls hungry

philosopher 2 can eat
Eating in progress..
philosopher 2 has completed its work

the philosopher 3 falls hungry

philosopher 3 can eat
Eating in progress..
philosopher 3 has completed its work

the philosopher 4 falls hungry

philosopher 4 can eat
Eating in progress..
philosopher 4 has completed its work

the philosopher 5 falls hungry

philosopher 5 can eat
Eating in progress..
philosopher 5 has completed its work
*/