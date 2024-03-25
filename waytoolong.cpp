#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        int count = 0;
        int n = s.length();

        if(n > 10) {
            for(int i = 1; i < n - 1; i++) {
                count++;
            }
            cout << s[0] << count << s[n - 1] << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0;
}
