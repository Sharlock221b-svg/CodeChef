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
    set <int> s;

    for( int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }    

    cout<<"2"<<endl;
    cout<<s.size()<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}