#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

typedef long long ll;
int main(void) {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n, l;
        cin >> n >> l;
        ll bin[32] = {0, };
        for (ll i=0; i<n; i++) {
            ll x;
            cin >> x;
            for (ll j=l-1; j>=0; j--) {
                if (x%2==1) bin[j]++;
                else bin[j]--;
                x/=2;
            }
        }
        ll result = 0;
        for (ll i=0; i<l; i++) {
            result *= 2;
            if (bin[i]>0) result += 1;
        }
        cout << result << '\n';
    }
    return 0;
}