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
   vi a(n);
   vi b(n-1);
   unordered_set <int> s;
   for(int i = 0; i<n; i++)
   {
       cin >> a[i];
       s.insert(a[i]);
   }

   for(int i = 0; i<n-1; i++)
   {
       cin >> b[i];
   }

   sort(a.begin(),a.end());
   sort(b.begin(),b.end());

   if(n == 2){
       int ans = min(b[0]-a[0],b[0]-a[1]);
       if(ans > 0) cout << ans <<endl;
       else cout<<max(b[0]-a[0],b[0]-a[1])<<endl;
   }
   else{
      int x = b[0] - a[1];
      for(int i = 0; i <n-1; i++){
          if(s.find(b[i]-x) == s.end() || x < 1){
              cout<<b[0] - a[0]<<endl;
              return;
          }
      }
      cout<<x<<endl;
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