/*
Aim
To create a program to print client address at server side

Algorithm
Server
STEP1: Create instances for socket and ServerSocket class.
STEP2: Use the port 9000 for TCP.
STEP3: Make the PrintStream object connect to the OuputStream using Socket.
STEP4: Create an instance of the Date class and write it into the Socket.
STEP5: Get the IP address of the client using the socket and getInetAddress().
STEP6: Print the client’s IPAddress.

Client
STEP1: Create instances for socket class with the port number 9000.
STEP2: Create an object of DataInputStream and make it to get data from server through the socket.
STEP3: Read the Date object.
STEP4: Print the obtained date.
*/

import java.net.*;
import java.io.*;
public class client {
	public static void main(String[] args) throws Exception {
		InetAddress a=InetAddress.getLocalHost();
		Socket s2 = new Socket(a,9000);
		String add=a.getHostAddress();
		BufferedReader in=new Buff eredReader(new InputStreamReader(s2.getInputStream()));
		PrintWriter out=new PrintWriter(new OutputStreamWriter(s2.getOutputStream()),true);
		System.out.println(in.readLine());
		out.println(add);
		s2.close();
	} 
}

/*
Output
Server
>javac server.java
>java server
Server Running
Client Connected:
Socket[addr=/10.0.2.21,port=50666,localport=9000]
Client's IP is
10.0.2.21

Client
>javac client.java
>java client
10.0.2.21
*/