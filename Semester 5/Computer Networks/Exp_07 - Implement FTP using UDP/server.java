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
public class server {
	public static void main(String[] args) throws Exception {
		InetAddress sa=InetAddress.getByName(null);
		BufferedReader in=new BufferedReader(new InputStreamReader(System.in)); 
		String msg="",fn,tmp;
		System.out.println("Enter file name:");
		fn=in.readLine();
		File f=new File(fn);
		if(f.isFile() && f.canRead()) {
			BufferedReader fil=new BufferedReader(new FileReader(fn)); while((tmp=fil.readLine())!=null)msg=msg+tmp+"\n";
		} else { msg="ERROR IN INPUT FILE"; }
		System.out.println("Content: " + msg);
		System.out.println("Sending the file to the client...")
		byte data[]=new byte[msg.length()];
		msg.getBytes(0,msg.length(),data,0);
		DatagramSocket ds = new DatagramSocket(8000);
		DatagramPacket dp=new DatagramPacket(data,data.length,sa,8001);
		ds.send(dp);
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