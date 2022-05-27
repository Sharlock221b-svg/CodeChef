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
    map <int, int> m;

    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        m[x]++;
    }

    if(n == 1){
        cout<<"0"<<endl;
        return;
    }

    int ans = 0;
    for(auto it: m){
        ans = max(ans, it.ss);
    }

    if( ans == 1){
        cout<<n-2<<endl;
        return;
    }
    cout<<n-ans<<endl;
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