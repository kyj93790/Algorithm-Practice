#include <iostream>
#include <queue>
#include <functional>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        priority_queue<int> pq;
        for (int i=0; i<n; i++){
            int a;
            cin >> a;
            if (a % 2 == 0) {
                pq.push(a);
            }
        }
        int count = 0;
        while (!pq.empty()){
            int c = pq.top();
            count++;
            for (int i=pq.size()-1; i>=0; i--) {
                int top = pq.top();
                if (top != c) break ;
                pq.pop();
                if ((top/2) % 2 == 0) pq.push(top/2);
            }
        }
        cout << count << '\n';
    }
    
    return (0);
}