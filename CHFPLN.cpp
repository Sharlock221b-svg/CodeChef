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
    int n;
    cin >> n;
    map <int,int> mp;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }

    int ans = 0;

   /* for(auto it: mp)
    {
        cout<<it.ff<<" "<<it.ss<<endl;
    }*/

    for(auto it : mp){
        if( it.ss > it.ff - 1 )
        {
            ans += it.ff - 1;
        }
        else{
            ans += it.ss;
        }
    }
    cout<<ans<<endl;
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