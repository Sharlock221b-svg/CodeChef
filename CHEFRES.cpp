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
    int n,m;
    cin >> n >> m;
    map <int,int> mp;
    for(int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        mp[x] = y;
    }
    
    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        auto it = mp.upper_bound(x);
       // cout<<it->ff<<" "<<it->ss<<endl;

        if(it == mp.begin())
        {
            cout<<it->ff - x <<endl;
            continue;
        }

        it--;
        if(it->ff <= x && it->ss > x){
            cout<<"0"<<endl;
            continue;
        }
        it++;
        if(it == mp.end()){
            cout<<"-1"<<endl;
            continue;
        }
        if( it->ff > x){
            cout << it->ff - x << endl;
            continue;
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