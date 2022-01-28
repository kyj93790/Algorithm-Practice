#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define min(a, b) (a<=b?a:b)

typedef long long ll;

int main(void) {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n, p, k, i;
        cin >> n >> p >> k;
        ll arr[20202] = {0, };
        for (int i=0; i<n; i++) {
            ll temp;
            cin >> temp;
            arr[temp]++;
        }
        vector<int> v;
        for (i=1; i<=10000; i++) {
            while (arr[i]--) {
                v.push_back(i);
            }
        }
        ll dp[20202];
        dp[0] = 0;
        for (i=1; i<=n; i++) {
            if (i == 1) dp[i] = v[0];
            else dp[i] = min(v[i-1] + dp[i-2], v[i-1] + dp[i-1]);
            if (dp[i] > p) break;
        }
        cout << i-1 << '\n';
    }
    return 0;
}