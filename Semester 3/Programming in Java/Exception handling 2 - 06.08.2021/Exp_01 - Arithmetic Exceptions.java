// Write a java program to handle arithmetic exceptions.

import java.util.*;

public class Main {
	public static void main(String[] args) throws ArithmeticException {
		try {
			int y = 1, x = 0;
			System.out.println(y / x);
			}
			catch(ArithmeticException a) {
				System.out.println("Arithmetic exception caught");
			}
	}
}

// Output: Arithmetic exception caught
