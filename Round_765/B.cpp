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
        ll n;
        cin >> n;
        ll mid = n/2;
        ll arr[151515] = {0, };
        ll check[151515] = {0, };
        ll i, j;
        for (i=1; i<=n; i++) {
            cin >> arr[i];
        }
        i = mid, j = mid+1;
        ll max = -1;
        while (i > 0 || j <= n) {
            ll temp;
            if (i > 0 && check[arr[i]]>0) {
                temp = i + n - check[arr[i]];
                if (temp > max) max = temp;
            }
            else if (i > 0) {
                check[arr[i]] = i;
            }
            if (j <= n && check[arr[j]]>0) {
                temp = check[arr[j]] + n - j;
                if (temp > max) max = temp;
            }
            else if (j <= n) {
                check[arr[j]] = j;
            }
            if (max > 0) break ;
            i--;
            j++;
        }
        cout << max << '\n';
    }
    return 0;
}