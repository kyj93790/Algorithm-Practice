#include <iostream>
using namespace std;

typedef long long ll;
  
int main(void) {
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        int max = 0, min = 1000000000;
        while (n--){
            int x;
            cin >> x;
            if (max < x) max = x;
            if (min > x) min = x;
        }
        cout << max - min << '\n';
    }
    return 0;
}