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
    int n, m, x;
    cin >> n >> m >> x;
    priority_queue<pair<int, int>> pq;
    for (int j = 0; j < n; j++)
    {
        int val;
        cin >> val;
        pq.push({val, j + 1});
    }
    vector<int> res;
    while (pq.size() > 0 && pq.top().first >= m)
    {

        res.push_back(pq.top().second);
        pq.pop();
    }
    while (res.size() < x && pq.size() > 0)
    {
        res.push_back(pq.top().second);
        pq.pop();
    }
    sort(res.begin(), res.end());
    cout << res.size() << " ";
    for (int x : res)
    {
        cout << x << " ";
    }
    cout << "\n";
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