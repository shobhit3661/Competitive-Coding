#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	int n;
	cin>>n;
	
	int ar[n];
	int dp[n];
	arin(ar,n);
	
	for(int i=n-1;i>=0;i--)
	{
		dp[i] = ar[i]; 
		int j = ar[i] + i;
		if(j<n)
		{
			dp[i] += dp[j];
		}
	}
	
	cout<<*max_element(dp,dp+n)<<"\n";
}

int main()
{
	fast;
	ll t=1;
	cin>>t;
	while(t--)
		solve();
	return 0;
}



