#include <iostream>
#include <string>
using namespace std;

void printABC(int arr[26], string t)
{
    for (int i=0; i<arr[0]; i++)
        cout << 'a';
    if (arr[0] > 0 && arr[1] > 0 && arr[2] > 0 && t.compare("abc") == 0)
    {
        for (int i=0; i<arr[2]; i++)
            cout << 'c';
        for (int i=0; i<arr[1]; i++)
            cout << 'b';
    }
    else {
         for (int i=0; i<arr[1]; i++)
            cout << 'b';
        for (int i=0; i<arr[2]; i++)
            cout << 'c';
    }
}

int main(void)
{
    int tc;

    cin >> tc;
    while (tc--){
        string s, t;
        int arr[26] = {0,};

        cin >> s >> t;
        for (int i=0; i<s.length(); i++){
            arr[s[i] - 'a']++;
        }
        printABC(arr, t);
        for (int i=3; i<26; i++){
            for (int j=0; j<arr[i]; j++)
                cout << (char)(i + 'a');
        }
        cout << '\n';
    }
}