import java.util.*;

class Fibonaci
{
	static int fib(int n)
	{
		if(n <= 1)
			return n;

		return fib(n-1) + fib(n-2);
	}
	public static void main(String args[])
	{
		int n = 9;

		// int sum = 0;
		// for(int i=0; i<n; i++)
		// {
		// 	sum = fib(i);
		// }

		System.out.println(fib(n));
	}
}