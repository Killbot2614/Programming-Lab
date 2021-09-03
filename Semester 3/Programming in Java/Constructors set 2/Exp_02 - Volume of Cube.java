// Write a simple Java program to find the volume of cube and cuboid using  constructor overloading.

/* Read a value for cube.

   Read three values for Cuboid.
*/

import java.util.Scanner;

public class Main {
    
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		int cubelength, cubeVolume;
		sc = new Scanner(System.in);
		cubelength = sc.nextInt();
		cubeVolume = cubelength * cubelength * cubelength;
		System.out.println("cube = " + cubeVolume);
		
		int cuboidLength = sc.nextInt();
		int cuboidBreadth =sc.nextInt();
		int cuboidHeight =sc.nextInt();
		
		int cuboidVolume = cuboidLength * cuboidBreadth * cuboidHeight;
		System.out.println("cuboid = " + cuboidVolume);
	}
}

/*  (1)
  Input: 3
         4
         6
         2
  Output: cube = 27
          cuboid = 48

  (2)
  Input: 7
         2
         3
         4
  Output: cube = 343
          cuboid = 24

  (3)
  Input: 8
         4
         8
         5
  Output: cube = 512
          cuboid = 160
*/