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
class server {
	public static void main(String[] args) throws Exception {
		ServerSocket s1 = new ServerSocket(9000);
		System.out.println("Server Running");
		Socket s2=s1.accept();
		InetAddress a=InetAddress.getLocalHost();String add=a.getHostAddress();
		Buff eredReader in=new Buff eredReader(new InputStreamReader(s2.getInputStream()));
		PrintWriter out=new PrintWriter(s2.getOutputStream(),true);
		System.out.println("Client Connected");
		System.out.println(s2);
		out.println(add);
		System.out.println("Client's IP is ");
		System.out.println(in.readLine());
		s1.close();
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