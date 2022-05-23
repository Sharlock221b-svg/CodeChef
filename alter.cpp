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
   int a,b,p,q;
   cin>>a>>b>>p>>q;

   if(p % a != 0 || q % b != 0){
       cout<<"no"<<endl;
       return;
   }
   
   int n1 = p / a;
   int n2 = q / b;

   if(-1 <= n1-n2 && n1-n2 <= 1){
        cout<<"yes"<<endl;
   }
   else{
       cout<<"no"<<endl;
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