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
    int n, k;

    cin >> n >> k;
    unordered_set<int> s;
    vi a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }

    int mx = *max_element(a.begin(), a.end());

    if (a.size() != mx)
    {
        for (int i = 0; i < mx; i++)
        {
            if (s.find(i) == s.end())
            {
                if (k == 0)
                {
                    cout << i << endl;
                    return;
                }
                else
                {
                    k--;
                }
            }
        }
    }

    while (k--)
    {
        mx++;
    }

    cout << mx + 1 << endl;
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