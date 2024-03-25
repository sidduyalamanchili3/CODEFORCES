#include <iostream>
using namespace std;
int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int total_cost = (w * (w + 1) / 2) * k;
    int borrow = max(0, total_cost - n);
    cout << borrow << endl;
    return 0;
}
