// declare the data type(int,double,string,boolean)

// display the values of data type without intialization.

public class Main {
      int a;
      double b;
      boolean c;
      String d;
      
      Main() {
          a = 0;
          b = 0.0;
          c = false;
          d = null;
       }
      
     void display() {
         System.out.println(a);
         System.out.println(b);
         System.out.println(c);
         System.out.println(d);
     } 
     
    public static void main(String[] args){
        Main obj = new Main();
        obj.display();
    } 
      
}

/* Output: 0
           0.0
           false
           null
*/