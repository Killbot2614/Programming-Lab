// Write a java program to use Final Keyword for the variables in Java

/* Name of the product = Pencil
   Rate = 1.5
   Qty = 10
   Increase the price by Rs. 2 and reduce quantity by 1
*/

import java.io.*;
import java.util.Scanner;

class Stock{
    final String name=("Pencil");
    float price;
    int qty;
    
    Scanner s=new Scanner(System.in);
    
    void get()
    {
        price=s.nextFloat();
        qty=s.nextInt();
    }
    
    void get2()
    {
        price=price+2;
        qty=qty-1;
    }
    
    void show()
    {
        System.out.println(name);
        System.out.println(price);
        System.out.println(qty);
    }
}

public class Main extends Stock
{
    public static void main(String[] args)
    {
        Stock obj1=new Stock();
        obj1.get();
        obj1.show();
        obj1.get2();
        obj1.show();
    }
}

/* Input: 1.5
          10
  Output: Pencil
          1.5
          10
          Pencil
          3.5
          9
*/