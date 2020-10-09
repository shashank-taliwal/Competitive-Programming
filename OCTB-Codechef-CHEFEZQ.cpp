//link of problem https://www.codechef.com/OCT20B/problems/CHEFEZQ/
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
ll i;


int main()
{
    fast;
    test
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];

        fr(0,n)
        {
            cin>>arr[i];
        }

        v v1;

        v1.pb(arr[0]);
        ll days=1;

        for(i=1;i<n;i++)
        {
            if(v1[i-1]<k)
            {
                break;
            }
            else
            {
                v1.pb(v1[i-1]-k+arr[i]);
                days++;
            }
        }
        ll x=v1.size();

            /*while(v1[x-1]>=k)
            {
                v1.pb(v1[x-1]-k);
                x++;
                days++;
            }*/
            
            ll diff;
            diff=v1[x-1]-k;
            diff=diff/k;
            
            if(diff>0)
            {
                days+=diff+1;
            }

            cout<<days<<endl;
    }
}
