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

    if(n == 1){
        cout<<"3"<<endl;
    }
    else{
        n = n - 2;
        string s = "1";
        while(n--){
            s += "0";
        }
        s += "5";
        cout<<s<<endl;
    }

}

signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}