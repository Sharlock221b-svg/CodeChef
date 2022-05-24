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
   unordered_set <int> s;
   int ans = 0;
   for( int i = 0; i< n; i++){
        int x;
        cin>> x;
        if(s.find(x) != s.end()){
           ans++;
        }
        else{
            s.insert(x);
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