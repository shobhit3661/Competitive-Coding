package assignment2;
import java.util.*;

public class ques {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = 5;
        int row = 1;
		int nst = n / 2;
		int nsp = 1;
		while (row <= n) 
		{
			for (int cst = 1; cst <= nst; cst = cst + 1) 
			{
				System.out.print("*\t");
			}
			for (int csp = 1; csp <= nsp; csp = csp + 1) 
			{
				System.out.print("\t");
			}
			for (int cst = 1; cst <= nst; cst = cst + 1) 
			{
				System.out.print("*\t");
			}
			
			
			System.out.println();
			if (row <= n / 2) 
			{
				nst = nst - 1;
				nsp = nsp + 2;
			} 
			else 
			{
				nst = nst + 1;
				nsp = nsp - 2;
			}
			row = row + 1;
		}   
    }
}

