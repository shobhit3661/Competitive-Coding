#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	ll n,m,x;
	cin>>n>>m>>x;
	ll ans;
	if(x%n==0)
	{
		ll temp = n-1;
		ll temp2 = x/n;		
		ans = m*temp+temp2;
	}
	else
	{
		ll temp = x%n;
		ll temp2 = x/n;
		temp-=1;
		ans = m*temp+(temp2+1);	
	}
	
	cout<<ans<<'\n';
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



