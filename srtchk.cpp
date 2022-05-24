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
   cin>>n;
   vi a(n);
   vi b(n);

   for(int i = 0; i < n; i++)
   {
       cin >> a[i];
   }

   for(int i = 0; i < n; i++)
   {
       cin >> b[i];
   }
   sort(a.begin(), a.end());

   for(int i = 0; i<n; i++){
        if(a[i] != b[i]){
           cout<<"no"<<endl;
           return;
        }
   }

   cout<<"yes"<<endl;
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