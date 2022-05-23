#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
#define vi vector<int>
#define vip vector<pair<int, int>>
#define endl "\n"


void solve()
{
   int u,v,a,s;
   cin>>u>>v>>a>>s;

   int ans = u * u - 2 * a  * s;

   if(ans <= (v * v)){
       cout<<"yes"<<endl;
   }  
   else{
       cout<<"no"<<endl;
   }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}