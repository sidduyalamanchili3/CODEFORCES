#include<iostream>
using namespace std;
int main() {
    int mat[5][5];
    int count = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(mat[i][j] == 1) {
                count += abs(i - 2) + abs(j - 2);
            }
        }
    }
    cout << count << endl;

    return 0;
}
