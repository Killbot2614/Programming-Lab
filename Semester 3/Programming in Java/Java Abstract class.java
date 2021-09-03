// Write a Java program to create an abstract class named Design that contains two integers and a do nothing method called Area().

/* Define three classes named Rectangle, Square and Circle such that each one of the classes extends the class Design.

   Each one of the classes contains method Area () that displays the area of that particular Class.
*/

import java.util.*;

abstract class Design
{
    public abstract void Area(int a);
}

class Rectangle extends Design
{
    public void Area(int a)
    {
        System.out.println("Area of Rectangle:"+a);
    }
}

class Square extends Design
{
    public void Area(int a)
    {
        int c=a*a;
        System.out.println("Area of Square   :"+c);
    }
}

class Circle extends Design
{
    public void Area(int a)
    {
        double c = a*a*3.14;
        System.out.println("Area of Circle    :"+c);
    }
}

public class AbstractClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        
        Square s = new Square();
        s.Area(a);
        
        int b = sc.nextInt();
        int d = sc.nextInt();
        int A = b * d;
        
        Rectangle r = new Rectangle();
        r.Area(A);
        
        int e = sc.nextInt();
        
        Circle c = new Circle();
        c.Area(e);
    }
}

/*  (1)
  Input: 2
         3
		 4
		 5
  Output: Area of Square   :4
          Area of Rectangle:12
          Area of Circle    :78.5 

  (2)
  Input: 3
         6
		 7
		 9
  Output: Area of Square   :9
          Area of Rectangle:42
          Area of Circle    :254.34
*/
