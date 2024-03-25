#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    string u;
    cin >> u;
    set<char> d;
    for (char c : u) {
        d.insert(c);
    }

    if (d.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
