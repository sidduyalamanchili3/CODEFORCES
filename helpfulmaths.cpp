#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cin >> s;
    stringstream ss(s);
    vector<int> nums;
    char ch;
    while (ss >> ch) {
        if (isdigit(ch)) {
            nums.push_back(ch - '0');
        }
    }
    sort(nums.begin(), nums.end());
    string result;
    for (int i = 0; i < nums.size(); i++) {
        result += to_string(nums[i]);
        if (i < nums.size() - 1) {
            result += "+";
        }
    }
    cout << result << endl;
    return 0;
}
