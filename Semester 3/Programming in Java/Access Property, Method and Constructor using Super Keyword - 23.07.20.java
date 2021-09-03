/* Write a Java program to implement inheritance and Access Property, Method and Constructor using Super Keyword.

   Create a Class named Cat and inherit it to class Rat.
   Define a Data Member in Cat and Rat with same variable name.
   Define a Member Function in Cat and Rat with same method name.
   Define a similar type of constructor both in Cat and Rat Class.
*/

import java.util.Scanner;

class Cat {
    int value = 5;

    Cat() {
        System.out.println("WITHIN CAT CONSTRUCTOR");

    }

    void fromWhere(){
        System.out.println("WITHIN CAT MEMBER FUNCTION");
    }
}

class Rat extends Cat {
    int value = 10;

    Rat() {
        System.out.println("WITHIN RAT CONSTRUCTOR");
    }

    void printValue(){
        System.out.println("CAT Data Member Value : "+super.value);
        System.out.println("RAT Data Member Value : "+value);
    }

    void fromWhere(){
        super.fromWhere();
        System.out.println("WITHIN RAT MEMBER FUNCTION");
    }

}

class prog{
    public static void main(String args[]){
        Rat obj = new Rat();
        obj.printValue();
        obj.fromWhere();
    }
}

/* Input: 5
          10
  Output: WITHIN CAT CONSTRUCTOR
          WITHIN RAT CONSTRUCTOR
		  CAT Data Member Value : 5
		  RAT Data Member Value : 10
		  WITHIN CAT MEMBER FUNCTION
		  WITHIN RAT MEMBER FUNCTION
*/
