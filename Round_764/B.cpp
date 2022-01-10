#include <iostream>
using namespace std;

typedef long long ll;
 
int main(void) {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        string result = "NO";
        int d;
        // a*m
        d = c-b;
        if ((b-d > 0) && (b-d) % a == 0 && ((b-d)/a > 0)) result = "YES";
        // b*m;
        if (((a+c)%(2*b) == 0) && ((a+c)/b > 0)) result = "YES";
        // c*m;
        d = b-a;
        if ((b+d > 0) && (b+d) % c == 0 && ((b+d)/c > 0)) result = "YES";
        cout << result << '\n';
    }
    return 0;
}