#include <iostream>
using namespace std;

int checkGCD(int a, int b)
{
    int r;
    r = a % b;
    while (r > 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main(void)
{
    int t;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a, b, c;
        int found = 0;
        for (c=1; c<=n/6; c++) {
            if (n % c == 0 && n/c >= 6) {   // (a' + b' + 1) = n / c
                for (int i=2; i<=(n/c-1)/2; i++) {
                    if (checkGCD(i, n/c-1-i) == 1) {
                        a = c * i;
                        b = c * (n/c - 1 - i);
                        found = 1;
                        break ;
                    }
                }
            }
            if (found == 1)
                break ;
        }
        cout << a << ' ' << b << ' ' << c << '\n';
    }
}