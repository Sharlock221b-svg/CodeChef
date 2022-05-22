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

    if(n == 2){
        cout<<"2 1"<<endl;
    }
    else{
        cout<<"1 ";
        for(int i = 3; i<=n; i++){
            cout<<i<<" ";   
        }
        cout<<"2"<<endl;
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