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
public class server extends Thread {
	public static void main(String args[]) {
		try {
			ServerSocket ss=new ServerSocket(4000);
			Socket s=ss.accept();
			BufferedReader br=new BufferedReader(new InputStreamReader(s.getInputStream()));
			BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
			PrintWriter out=new PrintWriter(s.getOutputStream(),true); 
			String fn,contents=" ",temp;
			System.out.println("enter the file name to open: ");fn=in.readLine();
			File f=new File(fn);
			if(f.isFile()&&f.canRead()) {
				BufferedReader fil=new BufferedReader(new FileReader(fn)); 
				while((temp=fil.readLine())!=null)
					contents=contents+temp+"\n"; 
				} else {
					contents="error in input file";
					System.out.println(" the contents of the file is:\n"+contents);
				    System.out.println("sending the file to the client....");
					out.println(contents);
				} catch(Exception e) { System.out.println(e); } 
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