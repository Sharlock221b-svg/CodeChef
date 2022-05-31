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

bool compare(pair<int,int> a, pair<int,int> b){
    if(a.ss == b.ss) return a.ff < b.ff;
    return a.ss > b.ss;
}

void solve()
{
   int n;
   cin >> n;
   vi a(n),b(n);
   vip v;
   for(int i = 0; i<n; i++)
   {
       cin >> a[i];
   }

   for(int i = 0; i <n; i++)
   {
       cin >> b[i];
   }

   for(int i = 0; i < n; i++) v.push_back({a[i],b[i]});

   sort(v.begin(),v.end(),compare);

   for(auto it: v) cout<<it.ff<<" "<<it.ss<<" ";
   cout<<endl;
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