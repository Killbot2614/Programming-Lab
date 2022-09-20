/*
Aim
To create a program to demonstrate the working of methods of a daemon thread in java

Algorithm
STEP1: Start
STEP2: Create a class DaemonThread
STEP3: In run() method, check if the thread is a user or daemon thread using the isDaemon() method
STEP4: The method returns true if it is a daemon thread else returns false
STEP5: Set the current thread as a daemon using the setDaemon method before calling the start() method
STEP6: The parameter should be true to set as a daemon thread else it is considered a user thread
STEP7: Stop
*/

public class DaemonThread extends Thread {
	public DaemonThread(String name) {
		super(name);
	}
	public void run() {
		if(Thread.currentThread().isDaemon()) {
			System.out.println(getName() + " is Daemon thread");
		} else {
			System.out.println(getName() + " is User thread");
		}
	}
	public static void main(String[] args) {
		DaemonThread t1 = new DaemonThread("t1");
		DaemonThread t2 = new DaemonThread("t2");
		DaemonThread t3 = new DaemonThread("t3");
		t1.setDaemon(true);
		t1.start();
		t2.start();
		t3.setDaemon(true);
		t3.start();		
	}
}


/*
Output
>javac DaemonThread.java
>java DaemonThread
t1 is Daemon thread
t3 is Daemon thread
t2 is Daemon thread
*/