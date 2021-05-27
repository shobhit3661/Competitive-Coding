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
	
	int res = 0;
  for (ll pw = 1; pw <= n; pw = pw * 10 + 1) {
    for (int d = 1; d <= 9;  d++) {
      if (pw * d <= n) {
        res++;
      }
    }
  }
  cout << res << endl;
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




