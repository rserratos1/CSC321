// Raquel Serratos
// CSC 321
// 10/10/2024

import java.util.Scanner;

public class rserratos6{
	public static void main(String[] args){
		double x = 3.0;
		double y = 4.0;
		System.out.printf("\n%s: %f\n", "x+y*x/y-x (double version)", x+y*x/y-x);

		int w = 3;
		int v = 4;
		double result = w+v*w/v-w;
		System.out.printf("%s: %f\n", "x+y*x/y-x (int version)", result);

		System.out.printf("\n%s: %f\n", "-x-y/x*y+x (double version)", -x-y/x*y+x);

		result = -w-v/w*v+w;
		System.out.printf("%s: %f\n", "-x-y/x*y+x (int version)", result);

		System.out.printf("\n%s: %f\n", "x+y-x/y (double version)", x+y-x/y);
		
		result = w+v-w/v;
		System.out.printf("%s: %f\n", "x+y-x/y (int version)", result);
	}
}
