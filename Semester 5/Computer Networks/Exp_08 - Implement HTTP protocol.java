/*
Aim
Program to implement HTTP protocol and to print URl for the Client.

Algorithm
STEP1: Create the URL with Http URL Connections
STEP2: Define the Http Protocol for Client Connections.
STEP3: Get the Http Connection.
STEP4: Print the URL for the Client.
*/

import java.io.*;
import java.net.*;
public class httpexp {
	public static void main(String args[])throws IOException {
		URL url=new URL("http://www.google.com/");
		URLConnection conn=url.openConnection();
		conn.connect();
		InputStreamReader content= new
		InputStreamReader(conn.getInputStream()); FileWriter f=new FileWriter ("abc.html"); 
		for(int i=0;i!=-1;i= content.read()) {
			f.write((char) i);
		} 
	} 
}

/*
Output
>javac httpexp.java
>java httpexp
>abc.html
*/