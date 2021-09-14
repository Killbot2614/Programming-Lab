// Write a Java Program to copy Contents of one File to another.

/* File 1 : Samp1.txt
   File 2 : Samp2.txt
*/

import java.io.*;

public class Main
{
    public static void main(String[] args) throws Exception
    {
        File a = new File("Samp1.txt");
        File b = new File("samp2.txt");
        FileInputStream in = new FileInputStream(a);
        FileOutputStream out = new FileOutputStream(b);
        int c;
        while((c = in.read()) != -1)
            out.write(c);
        if (in != null)
            in.close();
        if (out != null)
            out.close();
            
        System.out.print("Contents of one File copied to another.");
    }
}

// Output: Contents of one File copied to another.
