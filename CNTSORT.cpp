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
    vi a(101,0);

    int n;
    cin >> n;

    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        a[x]++;
    }

    for(int i = 1; i<=100; i++){
        if(a[i] != 0){
            while(a[i]){
                cout << i << " ";
                a[i]--;
            }
        }
    }
    cout<<endl;
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