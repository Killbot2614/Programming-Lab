/*
Aim
To create a program simulating traceroute command

Algorithm
1.Start
2.Include the necessary packages in java
3.Create a process object p
4.Declare BufferedReader stream object
5.Trace the route a packet takes when travelling to its destination
6.Print the results
7.Stop
*/

import java.io.BufferedReader;
import java.io.InputStreamReader;
public class traceroute {
	public static void runSystemCommand(String command) {
		try {
			Process p = Runtime.getRuntime().exec(command);
			BufferedReader inputStream = new BufferedReader(new InputStreamReader(p.getInputStream()));
			String s = "";
			while ((s = inputStream.readLine()) != null)
				System.out.println(s);
		} catch (Exception e) {}
	}
	public static void main(String[] args) {
		String ip = "www.google.com";
		runSystemCommand("tracert " + ip);
	}
}

/*
Output
>javac traceroute.java
>java traceroute
Tracing route to google.com [142.250.67.36]
over a maximum of 30 hops:
  1    <1 ms    <1 ms    <1 ms 10.0.0.5
*/