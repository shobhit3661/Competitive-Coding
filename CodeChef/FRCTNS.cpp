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
	int count=0;
	for(ll i=1;i<=n;i++)
	{
		for(ll j=i;j<=n;j++)
		{
			ll a = i*(j+1);
			ll b = (i+1)*j;
			for(ll temp=1;temp<=(min(a,b));temp++)
			{
				if(a%temp==0 && b%temp==0)
				{
					a/=temp;
					b/=temp;
				}
				if(a==(b-1))
				{
			
					count++;
					break;
				}	
			}
		}
	}
	
	cout<<count;
}

int main()
{
	fast;
	ll t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;
}



