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

int gcd( int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}


void solve()
{
    int n,k;
    cin>>n>>k;
    
    cout<<lcm(n,k)/k<<endl;
   
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