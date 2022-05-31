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
   int n, m;
   cin >> n >> m;
   unordered_set <int> s;
   vector <pair<pair<int,int>,string>> v;
   vector <pair<pair<int,int>,string>> spe;

   for(int i = 0; i < n; i++)
   {
        int x;
        cin >> x;
        s.insert(x);
   }
   
   for(int i =  0; i < m; i++)
   {
       int x,y;
       string ss;
       cin >> x >> y >> ss;
       if (s.find(x) != s.end()){
           spe.pb({{y,x},ss});
       }
       else{
           v.pb({{y,x},ss});
       }
   }

   sort(spe.rbegin(), spe.rend());
   sort(v.rbegin(), v.rend());

   for(auto it: spe){
       cout<<it.ss<<endl;
   }
   for(auto it: v){
       cout<<it.ss<<endl;
   }
   
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