#include <iostream>
#include <string>
using namespace std;
int main() {
    long long n;
    cin >> n;
    string s = to_string(n);
    int count = 0;
    for(char c : s) {
        if(c == '4' || c == '7')
            count++;
    }
    string luckyCount = to_string(count);
    bool isNearlyLucky = true;
    for(char c : luckyCount) {
        if(c != '4' && c != '7') {
            isNearlyLucky = false;
            break;
        }
    }
    if(isNearlyLucky)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
