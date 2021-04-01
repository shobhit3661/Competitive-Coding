#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int count=1;
	
	int i =  s.find_first_of("*");
	while (true) 
	{
    	int j = min(n - 1, i + k);
    	for (; i < j && s[j] == '.'; j--) {}
    	if (i == j)
		{
      		break;
   		}
    count++;
    i = j;
  }	
  
  cout<<count<<'\n';
}

int main()
{
	fast;
	int t=1;
	cin>>t;
	while(t--)
		solve();
	return 0;
}



