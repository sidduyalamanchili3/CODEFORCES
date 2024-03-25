#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    bool danger = false;
    int count = 1;
    char player = s[0];
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == player) {
            count++;
        } else {
            count = 1;
            player = s[i];
        }
        if (count >= 7) {
            danger= true;
            break;
        }
    }
if (danger) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
