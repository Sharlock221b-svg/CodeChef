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
    vi a(10);

    for(int i = 0; i<10; i++){
        cin>>a[i];
    }
    int k; cin >> k;

    for(int i = 9; i>=0; i--){
        if(a[i] == 0){
            continue;
        }
        if(a[i] > k){
            cout<<i + 1<<endl;
            return;
        }
        else{
            k -= a[i];
            a[i] = 0;
        }
    }
    cout<<1<<endl;
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