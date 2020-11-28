#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	int x,y,n,i,j,k,d;
	cin>>x>>y>>n;
	d=0;
	for(i=0;i<=n;i++)
	{
		if((x^i)<(y^i))
		{
			d++;
		}
	}
	cout<<d<<"\n";
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



