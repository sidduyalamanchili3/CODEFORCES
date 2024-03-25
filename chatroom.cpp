#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    string hello = "hello";
    int count= 0;
    for (char c : s) {
        if (c == hello[count]) {
            count++;
        }
        if (count == 5) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
