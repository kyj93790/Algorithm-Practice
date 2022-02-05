#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define max(a, b) (a>=b?a:b)
#define min(a, b) (a<=b?a:b)
#define p(a, b) make_pair(a, b)

typedef long long ll;
void swap(ll *a, ll *b) {
    ll temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
ll t, n, s;

int main(void) {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    cin >> t;
    while (t--) {
        cin >> n >> s;
        ll a[101010], S[101010] = {0, };
        ll max = 0, max_i = 0;
        for (int i=1; i<=n; i++) {
            cin >> a[i];
            S[i] = S[i-1] + a[i];
        }
        for (int i=1; i<=n; i++) {
            if (S[i] > s) {
                if ((i == n || (i!=n && a[i] >= a[i+1])) && max < a[i]) {
                    max = a[i];
                    max_i = i;
                }
                break ;
            }
            else {
                if (max < a[i]) {
                    max = a[i];
                    max_i = i;
                }
            }
        }
        if (S[n] <= s) cout << 0 << '\n';
        else cout << max_i << '\n';
    }
    return 0;
}