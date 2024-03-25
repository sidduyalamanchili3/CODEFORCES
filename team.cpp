#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int ans = 0; // Initialize ans outside the loop

    while(t--) {
        int arr[3];
        int count = 0;

        for(int i = 0; i < 3; i++) {
            cin >> arr[i];

            if(arr[i] == 1) {
                count++;
            }
        }
        if(count >= 2) {
            ans++;
        }
// Print ans within the loop
    }
cout << ans << endl;
    return 0;
}
