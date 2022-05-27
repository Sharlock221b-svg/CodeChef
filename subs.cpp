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
    int n, k;
    cin >> n >> k;
    k--;
    vi a(n);

    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int ans = LONG_MAX;

    for (int i = 0; i<n-k; i++){
        ans = min(ans, a[i+k] - a[i]);
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