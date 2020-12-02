#include <bits/stdc++.h>  //summu_14 
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define se set<int> 
#define ma map<int,int> 
#define ve vector<int> 
#define sor sort(v.begin(),v.end())
#define ff first
#define ss second
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,n;
        cin>>x>>n;
        ll a[n];
        ll s=0,c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<x) s++;
        }
        for(int i=0;i<n;i++)
        {
            ll p=a[i];
            for(int j=i+1;j<n;j++)
            {
                p=p*a[j];
                if(p<x) c++;
                else break;
            }
        }
        //cout<<s<<" "<<c<<endl;
        cout<<c+s<<endl;
    }
    return 0;
}
