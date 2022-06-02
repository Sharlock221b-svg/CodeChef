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
    vi v(n);
    vip vp;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++)
    {
        int mn = LONG_MAX;
        int x = i;
        for(int j = i; j < n; j++){
            if(v[j] < mn){
                mn = v[j];
                x = j;
            }
        }
        swap(v[i],v[x]);
        if(x!=i){
            vp.pb({i,x});
        }
    }
    cout<<vp.size()<<endl;

    for(auto i : vp){
        cout<<i.ff<<" "<<i.ss<<endl;
    }
   
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
   // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}