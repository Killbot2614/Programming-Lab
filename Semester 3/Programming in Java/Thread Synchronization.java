// JAVA program using Thread Synchronization

import java.util.*;

class Table 
{  
    public void printTable(int n){
        for(int i = 1;i <= 5;i++){  
	     System.out.println(n * i);  
	    try {  
	    Thread.sleep(1000);  
	    } catch(Exception e) {
	        System.out.println(e);
	    }  
    } 
  }  
}  
  
class Thread1 extends Thread
{  
    Table t;  
    Thread1(Table t) {  
        this.t = t;  
    } 

    public void run()
    {  
        t.printTable(5);
    } 
}  

class Thread2 extends Thread
{  
    Table t;  
    Thread2(Table t) {  
        this.t = t;  
    }
    
    public void run()
    {  
        t.printTable(100);  
    }  
}  
  
public class Main {  
    public static void main(String args[])
    {  
        Table obj = new Table();
        Thread1 t1 = new Thread1(obj);  
        Thread2 t2 = new Thread2(obj);  
        t1.start();
        try 
        {
            Thread.sleep(4500);
        } 
    catch(InterruptedException e) {
        System.out.println("Interrupted");
        }
        
        t2.start();
        
    }  
}

/* Output: 5
           10
           15
           20
           25
           100
           200
           300
           400
           500
*/