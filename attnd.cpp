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

void solve() {

    int n; cin >> n;
    map <string, int> mp;
    vector <pair <string,string>> v;
    for(int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[a]++;
        v.pb({a,b});
    }
    for(auto i : v)
    {
        if(mp[i.ff] == 1)
        {
            cout<<i.ff<<endl;
        }
        else{
            cout<<i.ff<<" "<<i.ss<<endl;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}