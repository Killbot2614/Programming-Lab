/*
Aim
Program to create simple chat application

Algorithm
Server
STEP1: Instances of vector class is used to keep track of number of clients that can be connected and currently logged.
STEP2: The method that is responsible for sending the message to the clients is made synchronized.
STEP3: Server is capable of keeping into account the number of users. It adds and removes the client from the vector list as and when the connections are established and terminated.

Client
STEP1: The client receives the name of the user and message of that user and sends it to client. Server then passes it on to all clients connected.
*/

import java.net.*;
import java.io.*;

public class cClient {
	public static void main(String arg[])throws Exception {
		Socket s=new Socket(InetAddress.getLocalHost(),4000);
		BufferedReader br=new BufferedReader(new InputStreamReader(s.getInputStream()));
		BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out=new PrintWriter(s.getOutputStream(),true);
		String input,t;
		while(true) {
			System.out.println("client");
			out.println("client:"+in.readLine());
			System.out.println(br.readLine()); 
		} 
	}
}

/*
Output
Server
>java cServer.java
>java cServer
server
test
client:xyz
server
sample
Client has closed

Client
>javac cClient.java
>java cClient
client
xyz
Server:test
client
server:sample
*/