import java.util.*;
public class Main {
    public static void main (String args[]) 
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        int ar1[] = new int[n];
        int ar2[] = new int[m];

        for(int i=0;i<n;i++)
            ar1[i] = sc.nextInt();

        for(int i=0;i<m;i++)
            ar2[i] = sc.nextInt();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ar1[i]==ar2[j])
                {
                    System.out.print(ar1[i]+" ");
                    ar2[j] = Integer.MIN_VALUE;
                }
            }
        }
    }
}   