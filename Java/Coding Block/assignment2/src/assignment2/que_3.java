package assignment2;
import java.util.*;

public class que_3 {
	public static void main(String[] arg)
	{
		Scanner sc = new Scanner(System.in);
		int n=6;
		//n = sc.nextInt();
		for(int i=0;i<n;i++)
		{
			int flag;
			if(i%2==0)
				flag=1;
			else
				flag =0;
			for(int j=0;j<=i;j++)
			{
				System.out.print(flag+" ");
				if(flag==1)
					flag=0;
				else
					flag=1;
			}
			System.out.print("\n");
		}
	}
}
