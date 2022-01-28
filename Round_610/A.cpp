#include <iostream>
using namespace std;

typedef long long ll;
void swap(ll *a, ll *b) {
    ll temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    ll t;
    cin >> t;
    while (t--) {
        ll a, b, c, r;
        cin >> a >> b >> c >> r;
        if (b < a) swap(&a, &b);
        ll cs, ce;
        cs = c-r; ce = c+r;
        if (cs <= a && b <= ce) cout << 0 << '\n';
        else if (ce <= a) cout << b-a << '\n';
        else if (cs < a) cout << b - ce << '\n';
        else if (ce <= b) cout << b - a - 2*r << '\n';
        else if (cs < b) cout << cs - a << '\n';
        else cout << b-a << '\n';
    }
    return 0;
}