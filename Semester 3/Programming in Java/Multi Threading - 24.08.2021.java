// Write a java Program to implement the concept of MultiThreading

import java.util.Scanner;

public class Main{
    
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        String name1 = sc.nextLine();
        String name2 = sc.nextLine();
        new Thread(){
            public void run(){
                
                System.out.println("New thread: Thread["+ name1 +",5,main]");
                
                for(int i = 3; i > 0; i--) {
                    System.out.println(name1+": " + i);
                    try{
                        Thread.sleep(1000);
                    }
                    catch(Exception e){
                        System.out.print(e.getMessage());
                    }
                }
                
                System.out.println(name1+" exiting");
            }
        }.start();
        
        new Thread(){
            public void run(){
                System.out.println("New thread: Thread["+name2+",5,main]");
                for(int i=3;i>0;i--){
                    System.out.println(name2+": "+i);
                    
                    try
                    {
                        Thread.sleep(1001);
                    }
                    catch(Exception e){
                        System.out.print(e.getMessage());
                    }
                }
                System.out.println(name2+" exiting");
            }
        }.start();
        
    }
    
}

/*  (1)
  Input: A
         B
  Output: New thread: Thread[A,5,main]
          New thread: Thread[B,5,main]
          A: 3
          B: 3
          A: 2
          B: 2
          A: 1
          B: 1
          A exiting
          B exiting

  (2)
  Input: One 
         Two
  Output: New thread: Thread[One,5,main]
          New thread: Thread[Two,5,main]
          One: 3
          Two: 3
          One: 2
          Two: 2
          One: 1
          Two: 1
          One exiting
          Two exiting
*/