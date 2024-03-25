#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string word;
    cin >> word;
    int upper_count = 0;
    int lower_count = 0;
    for (char c : word) {
        if (isupper(c)) {
            upper_count++;
        } else {
            lower_count++;
        }
    }
    if (upper_count > lower_count) {
        for (char &c : word) {
            c = toupper(c);
        }
    } else {
        for (char &c : word) {
            c = tolower(c);
        }
    }
    cout << word << endl;
    return 0;
}
