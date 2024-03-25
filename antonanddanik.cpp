#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int aC = 0, dC = 0;
    for (char c : s) {
        if (c == 'A')
            aC++;
        else
            dC++;
    }
    if (aC > dC)
        cout << "Anton" << endl;
    else if (dC > aC)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}
