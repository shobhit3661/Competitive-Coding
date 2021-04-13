import java.util.*;
public class Start{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n=10;
        //n = sc.nextInt();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n-1;j++)
            {
                System.out.print("  ");
            }
            int count = i*2+1;
            int p = i+1;
            while(count>0)
            {
                if(count==(i*2)/2)
                {
                    p--;
                }
             
                if(count>(i*2)/2)
                {
                    System.out.print(p+" ");
                    p++;
                }
                if(count<=(i*2)/2)
                {
                    p--;
                    System.out.print(p+" ");
                }
                count--;
            }
            System.out.println();
        }
        sc.close();
    }
}