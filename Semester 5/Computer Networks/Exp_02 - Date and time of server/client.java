/*
Aim
To write a client-server program which displays the server machine's date and time on the client machine

Algorithm
Server:
1.Start
2.Import the required packages
3.Create a class dateServer
4.Declare the variables and structure for the sockets
5.The sockets are binded to the specified ports
6.Using the object, the ports and address are declared
7.The listen and accept functions are executed
8.If the binding is successful, it waits for the client request
9.Execute the client program

Client:
1.Start
2.Import the required packages
3.Create a class dateClient
4.Declare the variables and structure for the sockets
5.Socket is created and connect function is executed
6.If connection is successful, date and time is printed at the client side
7.Stop
*/

import java.net.*;
import java.io.*;
public class client {
	public static void main (String[] arg) throws Exception { try {
			Socket s=new Socket(InetAddress.getLocalHost(),1000);
			BufferedReader br = new BufferedReader(new InputStreamReader(s.getInputStream())); 
			String input;
			PrintWriter out=new PrintWriter(s.getOutputStream(),true);
			while((input=br.readLine())!=null) { System.out.println(input);
				out.println("Date and Time Received-----------client Acknowledge------");}} catch(Exception e){}}}
				
/*
Output:
Server
>javac server.java
>java server
Date and Time Received --Client Acknowledge
--Client has closed--

Client
>javac client.java
>java client
Time at server: Mon Jul 04 10:40:05 IST 2022
*/