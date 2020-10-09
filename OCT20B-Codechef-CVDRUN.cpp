//link of problem https://www.codechef.com/OCT20B/problems/CVDRUN/
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
#define pos cout<<"YES\n";
#define neg cout<<"NO\n";
ll i;

int main()
{
    fast;

    test
    {
        ll n,x,y,k;
        cin>>n>>k>>x>>y;

        if(x==y)
        {
            pos
        }
        else
        {
            set<ll>s1;

            s1.insert(x);
            ll flag=0;

            while(1)
            {
                ll d=(x+k)%n;

                if(d==y)
                {
                    flag=1;
                    break;
                }
                else if(s1.find(d)==s1.end())
                {
                    s1.insert(d);
                    x=d;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
                pos
            }
            else
            {
                neg
            }
        }
    }
}
