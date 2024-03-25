#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool hard = false;
    for (int i = 0; i < n; ++i) {
        int search;
        cin >>search;
        if (search == 1) {
            hard = true;
            break;
        }
    }
    if (hard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }

    return 0;
}
