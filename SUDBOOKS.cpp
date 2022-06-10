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

stack <int> s;

void solve() {
    int a;
    cin >> a;

    if(a == -1)
    {
        if(s.empty()) cout<<"kuchbhi?"<<endl;
        else{
            cout<<s.top()<<endl;
            s.pop();
        }
    }
    else{
        int b; cin >> b;
        s.push(b);
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}