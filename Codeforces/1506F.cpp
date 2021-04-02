#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define arin(x,n) for(int i=0;i<n;i++)cin>>x[i]
#define debug(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" "
#define pb push_back
typedef long long int ll;

using namespace std;

bool getLeft(int r, int c) {
  return (r + c) % 2 == 0;
}

bool getright(int r, int c) {
  return (r + c) % 2 == 1;
}
int caldis(int r2,int c2,int r1,int c1)
{
	if(r1-c1==r2-c2)
	{
		return getright(r1,c1) ? 0 : (r2-r1);
	}
	 r2 -= r1 - 1;
  c2 -= c1 - 1;
  if (getLeft(r1, c1)) {
    return (r2 - c2) / 2;
  } else {
    return (r2 -c2 + 1) / 2;
  }
}

void solve()
{
	int n;
	cin>>n;
	vector<pair<int,int>> vp;
	vector<int> r;
	vector<int> c;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		r.pb(temp);
	}
	
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		c.pb(temp);
	}
	
	for(int i=0;i<n;i++)
		vp.pb({r[i],c[i]});
		
	
	sort(vp.begin(),vp.end());
	int r1 =1;
	int c1 =1;
	int res =0;
	for(auto a : vp)
	{
		res+= caldis(a.first,a.second,r1,c1);
		r1 = a.first;
		c1= a.second;
	}
	
	cout<<res<<"\n";
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



