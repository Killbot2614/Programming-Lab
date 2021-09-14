// Write a Java Program to read and Display the contents of a File.

// Assume File name as : Sample.txt

import java.io.*;

public class Main {
  public static void main(String[] args) throws Exception {
      File file = new File("Sample.txt");
      BufferedReader br = new BufferedReader(new FileReader(file));
      
      String str;
      while ((str = br.readLine()) != null)
        System.out.println(str);
  }
}


// Output: Contents of .txt file