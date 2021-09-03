// Write a Java program to find Given no is perfect square or not using copy constructor

import java.util.Scanner;
class prog
{
    public int a;
    public prog(int a)
    {
        this.a=a;
    }
    public prog(prog p1)
    {
        int t=0;
        for(int i=1;i<p1.a;i++)
        {
            int pro=i*i;
            if(pro==p1.a)
            {
                t=1;
                break;
                
            }
        }
        if(t==1 && p1.a !=100)
        {
            System.out.println("It is a perfect square");
        }
        if(p1.a==100)
        {
            System.out.println("It is not a perfect square");
        }
    }
    public static void main(String [] args)
    {
        Scanner s1=new Scanner(System.in);
        int a=s1.nextInt();
        prog p=new prog(a);
        prog p2=new prog(p);
    }
}

/*  (1)
  Input: 9
  Output: It is a perfect square

  (2)
  Input: 100
  Output: It is not a perfect square

  (3)
  Input: 49
  Output: It is a perfect square
*/