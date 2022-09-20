/*
Aim
To create a program to implement FTP using TCP

Algorithm:
Client
STEP 1: Create instance for the Socket class and establish connectivity with the server
STEP 2: Use the port number 4000
STEP 3: Receive the file from the server
STEP 4: Reset the connection with the server
Server
STEP 1: Create instances for the serversocket class and accept the server port
STEP 2: Read the filename to be opened
STEP 3: Send the file to the client
*/

import java.net.*;
import java.io.*;
public class client {
	public static void main(String args[]) {
		try {
			Socket s=new Socket(InetAddress.getLocalHost(),4000); 
			BufferedReader br=new BufferedReader(new InputStreamReader(s.getInputStream())); 
			String str;
			while((str=br.readLine())!=null) 
				System.out.println(str);
		} catch(Exception e) {
			System.out.println("The connection to the server has been reset");
		} 
	} 
}

/*
Output
Server
>javac server.java
>java server
Enter file name:
sample.txt
The contents of the file are:
xyz
Sending the file to the client...

Client
>javac client.java
>java client
xyz
The connection to the server has been reset
*/