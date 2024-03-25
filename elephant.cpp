#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int num;
    cin >> num;
    int t = ceil(static_cast<double>(num) / 5);
    cout << t << endl;
    return 0;
}
