// Write a Java Program to find area of a Rectangle, Triangle and Circle implementing an Interface method Area.

/* Input 
   Length = 5
   Width = 4
   Base = 6
   Height = 6
   Radius = 6
*/

import java.util.Scanner;

interface Area {
    void area();
    Scanner input = new Scanner(System.in);
}

class Rectangle implements Area {
    public void area() {
        int length, width;
        length = input.nextInt();
        width = input.nextInt();

        System.out.println("Area of Rectangle");
        System.out.println("Length = " + length);
        System.out.println("Width = " + width);
        System.out.println("Area = " + (length * width));
    }
}

class Triangle implements Area {
    public void area() {
        int base, height;
        base = input.nextInt();
        height = input.nextInt();

        System.out.println("Area of Triangle");
        System.out.println("Base = " + base);
        System.out.println("Height = " + height);
        System.out.println("Area = " + (base * height) / 2);
    }
}

class Circle implements Area {
    public void area() {
        int radius;
        radius = input.nextInt();

        System.out.println("Area of Circle");
        System.out.println("Radius = " + radius);
        System.out.println("Area = " + 3.14 * Math.pow(radius, 2));
    }
}

public class Main {
    public static void main(String[] args) {
        Rectangle rect = new Rectangle();
        Triangle tri = new Triangle();
        Circle circ = new Circle();

        rect.area();
        tri.area();
        circ.area();
    }
}

/*  (1)
  Input: 5
         4
		 6
		 6
		 6
  Output: Area of Rectangle
          Length = 5
          Width = 4
          Area = 20
          Area of Triangle
          Base = 6
          Height = 6
          Area = 18
          Area of Circle
          Radius = 6
          Area = 113.04

  (2)
  Input: 3
         2
		 4
		 4
		 5
  Output: Area of Rectangle
          Length = 3
          Width = 2
          Area = 6
          Area of Triangle
          Base = 4
          Height = 4
          Area = 8
          Area of Circle
          Radius = 5
          Area = 78.5
*/