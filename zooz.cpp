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
    
    if(n % 2 == 0)
    {
        cout<<"1";
        for(int i = 0; i < n - 2; i++)
        {
            cout<<"0";
        }
        cout<<"1"<<endl;
    }
    else{
        
        for(int i = 0; i < n; i++)
        {
            if(i == n / 2)
            {
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
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