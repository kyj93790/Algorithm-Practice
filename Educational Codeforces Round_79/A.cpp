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
        ll color[3];
        ll max = 0;
        for (int i=0; i<3; i++) {
            cin >> color[i];
        }
        for (int i=0; i<3; i++) {
            for (int j=i+1; j<3; j++){
                if (color[i] < color[j]) swap(&color[i], &color[j]);
            }
        }
        if (color[0] - 1 > color[1] + color[2]) cout << "No\n";
        else cout << "Yes\n";
    }
    return 0;
}