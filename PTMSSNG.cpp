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
   int x = 0;
   int y = 0;

   for(int i = 0; i < (4*n) - 1; i++)
   {
        int xx,yy;
        cin >> xx >> yy;
        x = x ^ xx;
        y = y ^ yy;
   }

   cout<<x<<" "<<y<<endl;
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