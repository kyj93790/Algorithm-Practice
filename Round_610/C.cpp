#include <iostream>
using namespace std;
#define max(a, b) (a>=b?a:b)

typedef long long ll;

int main(void) {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    ll m;
    cin >> m;
    while (m--) {
        ll n, t, a, b;
        cin >> n >> t >> a >> b;
        ll cnt[2];
        // easy, hard counting
        for (ll i=0; i<n; i++) {
            ll temp;
            cin >> temp;
            cnt[temp]++;
        }
        ll ans = 0;
        if (t >= cnt[0] * a && cnt[0]*a < b) {
            ans = max(ans, cnt[0]);
        }
        else if (t >= cnt[0]*a && t >= cnt[0]*a && cnt[1]*b)
    }
    return 0;
}