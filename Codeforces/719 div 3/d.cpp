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
	map<int,int> a;
	ll result =0;
	
	for(int i=0;i<n;i++)
	{
		ll temp;
		cin>>temp;
		
		temp -= i;
		result += a[temp];
		a[temp]++;
	}
	
	cout<<result<<"\n";
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




