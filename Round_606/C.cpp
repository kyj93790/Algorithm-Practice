#include <iostream>
#include <string>
#include <vector>
using namespace std;

int check_str(string s, string cp, int i) {
    if (s.length() - i < 3) return (0);
    if (s[i]==cp[0] && s[i+1]==cp[1] && s[i+2]==cp[2]) return (1);
    return (0);
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<int> v;
        for (int i=0; i<s.length(); ) {
            if (s[i] == 'o') {
                if (check_str(s, "one", i)) {
                    v.push_back(i);
                    i += 3;
                }
                else i++;
            }
            else if (s[i] == 't') {
                if (check_str(s, "two", i) && check_str(s, "one", i+2)) {
                    v.push_back(i+2);
                    i += 5;
                }
                else if (check_str(s, "two", i)) {
                    v.push_back(i);
                    i += 3;
                }
                else i++;
            }
            else i++;
        }
        cout << v.size() << '\n';
        for (int i=0; i<v.size(); i++) {
            if (i == v.size()-1) cout << v[i]+1 ;
            else cout << v[i]+1 << ' ';
        }
        cout << '\n';
    }
    return (0);
}