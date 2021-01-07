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
	
	long temp=0;
	int cnt=0,cnt1=0;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		if(t==1)
		{
			cnt++;
		}
		else
			cnt1++;
			
		temp+=t;
	}
	
	if(temp%2!=0)
	{
		cout<<"NO"<<"\n";
	}
	else{
		ll sum = temp/2;
		if(sum%2==0 || (sum%2==1 && cnt!=0))
		{
			cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO"<<"\n";
		}
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



