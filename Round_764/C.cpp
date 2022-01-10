#include <iostream>
using namespace std;

typedef long long ll;
 
int main(void) {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int v[51] = {0, };
        string result = "YES";
        for (int i=0; i<n; i++) {
            int x;
            cin >> x;
            int able = 0;
            while (x > 0) {
                if (x <= n && v[x] == 0) {
                    v[x] = 1;
                    able = 1;
                    break;
                }
                x /= 2;
            }
            if (!able) result = "NO";
        }
        cout << result << '\n';
    }
    return 0;
}