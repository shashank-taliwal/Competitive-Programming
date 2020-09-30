#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define test ll t;cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define st string
#define len length
#define pb push_back
#define v vector<ll>
#define bs binary_search
#define lb lower_bound
#define fr(a,b) for(ll i=a;i<b;i++)
#define mp make_pair
#define mod 1000000007

int main()
{
    fast;

    ll n,m;

    cin>>n>>m;

    ll arr[m];

    fr(0,m)
    {
        cin>>arr[i];
    }

    sort(arr,arr+m);

    ll i;

    ll min=INT_MAX;
    for(i=0;i<=m-n;i++)
    {
        ll d=arr[i+n-1]-arr[i];

        if(d<min)
        {
            min=d;
        }
    }
    cout<<min<<endl;
}
