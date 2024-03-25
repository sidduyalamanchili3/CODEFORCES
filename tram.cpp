#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int mc= 0;
    int cc = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        cc -= a;
        cc += b;
        mc = max(mc, cc);
    }

    cout << mc << endl;

    return 0;
}
