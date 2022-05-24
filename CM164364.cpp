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
    int n, x;
    cin >> n >> x;

    set <int> s;

    for(int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        s.insert(y);
    }

    if( n - s.size() >= x){
        cout<<s.size()<<endl;
    }
    else{
        int minus = x - (n - s.size());
        cout<<s.size() - minus<<endl;
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