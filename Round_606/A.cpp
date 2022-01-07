#include <iostream>
using namespace std;

int check_back(int n, int digit) {
    int f = n / digit;
    int b;
    n %= digit;
    digit /= 10;
    while (digit > 0) {
        b =  n / digit;
        if (b < f) return (f-1);
        else if (b > f) return (f);
        n %= digit;
        digit /= 10;
    }
    return (f);
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int digit = 1;
        int cnt = 0;
        while (n / 10 / digit > 0) {
            digit *= 10;
            cnt++;
        }
        int result;
        result = cnt * 9;
        result += check_back(n, digit);
        cout << result << '\n';
    }
    return (0);
}