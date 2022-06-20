#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define pb push_back
#define pob pop_back
#define ff first
#define ss second
#define vi vector<int>
#define vip vector<pair<int, int>>
#define endl "\n"

void solve()
{
    int a,b,n;
    cin >> a >> b >> n;
    int ans = a ^ b;
    if(ans == 0)
    {
        cout<<"0"<<endl;
    }
    else if (ans < n)
    {
        cout<<"1"<<endl;
    }
    else{
         int x = ans ^ (n-1);
         if(x < n)
         {
            cout<<"2"<<endl;
         }
         else{
            cout<<"-1"<<endl;
         }
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