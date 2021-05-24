#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	bool ar[26];
	memset(ar,true,sizeof(ar));
	int len;
	cin>>len;
	string s;
	cin>>s;
	bool ans = false;
	for(int i=0;i<len;)
	{
		int t = (int)s[i]-'A';
	//	cout<<s[i]<<" "<<t;
	//	cout<<"\n";
		if(ar[t])
		{
			ar[t] = false;
			char temp = s[i];
			while(temp == s[i])
			{
			//	cout<<temp<<" ";
				temp = s[i];
				i++;
			}
		//	cout<<i<<" ";
		}
		else
		{
			ans = true;
			break;
		}
	}
	
	if(ans)
		cout<<"No"<<"\n";
		
	else
		cout<<"Yes"<<"\n";
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




