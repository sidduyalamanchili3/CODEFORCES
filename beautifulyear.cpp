#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;
        string yearStr = to_string(y);
        unordered_set<char> digits;
        bool distinct = true;
        for (char digit : yearStr) {
            if (digits.find(digit) != digits.end()) {
                distinct = false;
                break;
            }
            digits.insert(digit);
        }
        if (distinct) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}

