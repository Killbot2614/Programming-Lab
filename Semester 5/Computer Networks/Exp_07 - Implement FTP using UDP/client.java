/*
Aim
To create a program to implement FTP using UDP

Algorithm
Client
STEP 1: Create instance for the Socket class and establish connectivity with the server
STEP 2: Use the port number 8000.
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
	public static void main(String[] args) throws Exception {
		InetAddress sa=InetAddress.getLocalHost();
		byte data[]=new byte[1024]; 
		DatagramSocket ds = new DatagramSocket(8001);
		DatagramPacket dp=new DatagramPacket(data,data.length);
		ds.receive(dp);
		String msg=new String(dp.getData(),0,0,dp.getLength());
		System.out.println("Received data: " + msg);
	}
}

/*
Output
Server
>javac server.java
>java server
Enter file name:
abc.txt
Content: sample
Sending the file to the client...

Client
>javac client.java
>java client
Received data: sample
*/