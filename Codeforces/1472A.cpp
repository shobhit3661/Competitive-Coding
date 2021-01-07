#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	ll w,h,n;
	cin>>w>>h>>n;
	
	ll ans = 1;
	
	while(w%2==0)
	{
		w/=2;
		ans*=2;
	}
	
	while(h%2==0)
	{
		h/=2;
		ans*=2;
	}
	
	if(ans>=n)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
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



