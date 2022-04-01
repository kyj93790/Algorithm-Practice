#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <math.h>
#include <map>
#include <set>
using namespace std;

typedef long long ll;
ll t, n, s, k;
ll c[1010];
map<ll, ll> m;

int main(void) {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    cin >> t;
    while (t--) {
        map<ll, ll> m;
        cin >> n >> s >> k;
        for (ll i=0; i<k; i++) cin >> c[i];
        for (ll i=0; i<k; i++) {
            m[abs(c[i]-s)]++;
        }
        ll l = min(s-1, n-s);
        ll r = max(s-1, n-s);
        if (m[0] < 1) cout << 0 << '\n';
        else {
            bool flag = false;
            for (ll i=1; i<=l; i++) {
                if (m[i] < 2) {
                    cout << i << '\n';
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                for (ll i=l+1; i<=r; i++) {
                    if (m[i] < 1) {
                        cout << i << '\n';
                        break;
                    }
                }
            }
        }
    }
    return 0;
}