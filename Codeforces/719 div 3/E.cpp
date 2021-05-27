#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	ll n;
	cin>>n;
	
	string s;
	cin>>s;
	ll count=0;
	for(auto x:s)
	{
		count+=((x=='*')?1:0);
	}
	
	int cur=-1;
	int pos =-1;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='*')
		{
			cur++;
			if(cur==count/2)
			{
				pos = i;
			}
		}
	}
	
	ll ans =0;
	cur = pos - count/2;
	
	for(int i=0;i<n;i++)
	{
		if(s[i]=='*')
		{
			ans += abs(cur-i);
			cur++;
		}
	}
	
	cout<<ans<<"\n";
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




