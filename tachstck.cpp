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
    int n, d;
    cin >> n >> d;
    vi a(n);
    queue <int> q;
    for(int i = 0; i<n; i++)
    {
       cin>>a[i];
    }
    sort(a.begin(), a.end());

    for(auto i : a){
        q.push(i);
    }
    int ans = 0;

    while(!q.empty()){
        int x = q.front();
        q.pop();
        if(q.empty()){
            break;
        }
        if(q.front() - x <= d){
             ans ++;
             q.pop();
        }
    }
    cout<<ans<<endl;
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