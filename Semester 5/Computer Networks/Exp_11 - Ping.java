/*
Aim
To create a program simulating traceroute command

Algorithm
1.Start
2.Include the necessary packages in java
3.Create a process object p
4.Declare BufferedReader stream object
5.Get the details of the server
-Length of the IP address
-Time required to get the details
-Sent packets, received packets and lost packets
-Minimum, maximum and average times
6.Print the results
7.Stop
*/

import java.io.*;
public class ping {
	public static void runSystemCommand(String Command) {
		try {
			Process p=Runtime.getRuntime().exec(Command);
			BufferedReader InputStream=new BufferedReader(new InputStreamReader(p.getInputStream()));
			String s="vvv";
			while((s=InputStream.readLine())!=null) {
				System.out.println(s);
			} 
		} catch(Exception e) {
			e.printStackTrace();
		} 
	}
	public static void main(String[]args) {
		String Ip="localhost";
		runSystemCommand("ping " + ip);
		java.util.Date date = new java.util.Date();
		System.out.println(date);
	}
}

/*
Output
>java ping.java
>java ping
Pinging ML-004.MAINLAB.COM[127.0.0.1] with 32 bytes of data:
Reply from 127.0.0.1: bytes = 32 time < 1ms TTL = 128
Reply from 127.0.0.1: bytes = 32 time < 1ms TTL = 128
*/