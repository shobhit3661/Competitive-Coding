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
    	int i,a[n],fuel;
    	for(i=0;i<n;i++)
    		cin>>a[i];
    	fuel=a[0];
    	for(i=1;i<n;i++){
    		if(fuel>=1){
    			fuel--;
    			fuel+=a[i];
    		}
    		else{
    			break;
    		}
    	}
    	cout<<i+fuel-1<<endl;
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



