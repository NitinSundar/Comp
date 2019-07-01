import java.util.Scanner;
class sample
{
	public static void main(String args[])
	{
		int t;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		while(t!=0)
		{
			int n,m;
			n = sc.nextInt();
			m = sc.nextInt();
			String a = sc.next();
			String b = sc.next();
			int dp[][] = new int[n+1][m+1];
			for(int i=1;i<=n;i++)
        	{
	            for(int j=1;j<=m;j++)
	            {
	                if(a.charAt(i-1)==b.charAt(j-1)) dp[i][j] = 1+dp[i-1][j-1];
	                else dp[i][j] = dp[i-1][j]>dp[i][j-1]?dp[i-1][j]:dp[i][j-1];
	            }
     		}
     		System.out.println(dp[n][m]);
     		t--;
		}
	}
}
