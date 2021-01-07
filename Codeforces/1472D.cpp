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
	
	ll ar[n];
	arin(ar,n);
	
	sort(ar,ar+n,greater<int>());
	ll ans =0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			if(ar[i]%2==0)
			{
				ans+=ar[i];
			}
		}
		else
		{
			if(ar[i]%2==1)
			{
				ans-=ar[i];
			}
		}
	}
	
	if(ans==0)
	{
		cout<<"Tie\n";
	}
	
	if(ans<0)
	{
		cout<<"Bob\n";
	}
	if(ans>0)
	{
		cout<<"Alice\n";
	}
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



