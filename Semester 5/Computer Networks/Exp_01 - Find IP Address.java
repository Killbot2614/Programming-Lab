/*
Aim
To write a java program to find the IP address of the system

Algorithm
1.Start
2.Import the required packages
3.Create a class GetIPAddress
4.Initialize InetAddress class and create object addr.
5.Get IP address of the system using getHostAddress() method
6.Print the IP address
7.End
*/

import java.net.InetAddress;
public class GetIPAddress {
	public static void main(String[] args) throws Exception {
		InetAddress addr = InetAddress.getLocalHost();
		System.out.println("Local Host Address: " + addr. getHostAddress());
		String hostname = addr.getHostName();
		System.out.println("Local Host Name: " + hostname);
	}
}

/*
Output:
Local Host Address: 10.0.3.78
Local Host Name: ML-043
*/